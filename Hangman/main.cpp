#include <iostream>
#include <cstdlib>
#include <cstring>
#include<ctime>
#include<vector>
#include<fstream>
using namespace std;

const int TONGLUOTCHOI = 7;
const int numberLose = 0;
vector<string> listWord;

void listWordEnglish(){
    ifstream file("List_basic_word_english.txt");
    if(file.is_open()){
        while(!file.eof()){
            string val;
            getline(file,val);
            if(file)
                listWord.push_back(val);
                else break;
        }
    }
}
string randomWord(){
    int soTu = listWord.size();
    srand((time(0)));   // tao ngau nhien moi lan Run
    int randomIndex = rand() % soTu;  // ngau nhien tu 1 den soTu -1
    return listWord[randomIndex];
}

void dohoa(int pictureNumber){
    if(pictureNumber == 7){
        cout <<         "\n\t\t  ____________________________________  \n"
                        "\t\t |       |                             \n"
                        "\t\t |       |                             \n"
                        "\t\t |       |                             \n"
                        "\t\t |       O                             \n"
                        "\t\t |      /|\\                            \n"
                        "\t\t |      / \\                            \n"
                        "\t\t |                                     \n"
                        "\t\t |____________________________________ \n\n\n" ;
    }

    else if(pictureNumber == 6){
        cout <<         "\n\t\t  ____________________________________  \n"
                        "\t\t |       |                             \n"
                        "\t\t |       |                             \n"
                        "\t\t |       |                             \n"
                        "\t\t |       O                             \n"
                        "\t\t |      /|\\                            \n"
                        "\t\t |      /                              \n"
                        "\t\t |                                     \n"
                        "\t\t |____________________________________ \n\n\n" ;
    }
    else if(pictureNumber == 5){
        cout <<         "\n\t\t  ____________________________________  \n"
                        "\t\t |       |                             \n"
                        "\t\t |       |                            \n"
                        "\t\t |       |                             \n"
                        "\t\t |       O                             \n"
                        "\t\t |      /|\\                            \n"
                        "\t\t |                                     \n"
                        "\t\t |                                     \n"
                        "\t\t |____________________________________\n\n\n" ;
    }

    else if(pictureNumber == 4){
        cout <<         "\n\t\t  ____________________________________  \n"
                        "\t\t |       |                            \n"
                        "\t\t |       |                             \n"
                        "\t\t |       |                             \n"
                        "\t\t |       O                             \n"
                        "\t\t |      /|                            \n"
                        "\t\t |                                     \n"
                        "\t\t |                                     \n"
                        "\t\t |___________________________________  \n\n\n" ;
    }
     else if(pictureNumber == 3){
        cout <<         "\n\t\t  ____________________________________  \n"
                        "\t\t |       |                            \n"
                        "\t\t |       |                             \n"
                        "\t\t |       |                             \n"
                        "\t\t |       O                             \n"
                        "\t\t |       |                           \n"
                        "\t\t |                                     \n"
                        "\t\t |                                     \n"
                        "\t\t |___________________________________  \n\n\n" ;
    }
     else if(pictureNumber == 2){
        cout <<         "\n\t\t  ____________________________________  \n"
                        "\t\t |       |                            \n"
                        "\t\t |       |                             \n"
                        "\t\t |       |                             \n"
                        "\t\t |       O                             \n"
                        "\t\t |                                   \n"
                        "\t\t |                                     \n"
                        "\t\t |                                     \n"
                        "\t\t |___________________________________  \n\n\n" ;
    }
    else if(pictureNumber == 1)
    {
        cout <<         "\n\t\t  ____________________________________  \n"
                        "\t\t |       |                            \n"
                        "\t\t |       |                             \n"
                        "\t\t |       |                             \n"
                        "\t\t |                                     \n"
                        "\t\t |                                     \n"
                        "\t\t |                                     \n"
                        "\t\t |                                     \n"
                        "\t\t |____________________________________ \n\n\n" ;
    }
    else if(pictureNumber == 0)
    {
        cout <<         "\n\t\t  ____________________________________  \n"
                        "\t\t |                                    \n"
                        "\t\t |                                     \n"
                        "\t\t |                                     \n"
                        "\t\t |                                     \n"
                        "\t\t |                                     \n"
                        "\t\t |                                     \n"
                        "\t\t |                                     \n"
                        "\t\t |____________________________________ \n\n\n" ;
    }

}

string khoiTaoTu(string wordRandom){
    string tuDoan ;
    int len = wordRandom.length();
    for(int i = 0 ;i< len;i++)
        tuDoan += '-' ;
    return tuDoan;
}
string updateTuDoan(string randomWord, string tuDoan, char chuCaiDoan){
    int len = randomWord.length();
    for(int i = 0 ; i< len;i++){
        if(randomWord[i] == chuCaiDoan)
            tuDoan[i] = chuCaiDoan;
    }
    return tuDoan;
}

bool kiemTraDoanTu(string randomWord, char chuCaiDoan){
    int len = randomWord.length();
    for(int i = 0 ; i < len;i++){
        if(randomWord[i] == chuCaiDoan)
            return true;
    }
    return false;
}

bool checkNhapTrungKiTu(string tuDaDoan, char chuCaiDoan){
    int size = tuDaDoan.length();
    if(!size) return false;
    for(int i =0 ;i<size;i++){
        if(chuCaiDoan == tuDaDoan[i])
            return true;
    }
    return false;
}
bool checkNhapChuCai(char chuCai){
    if(chuCai >= 'a' && chuCai <= 'z')
        return true;
    else if(chuCai >= 'A' && chuCai <= 'Z')
        return true;
    else return false;
}

void mainGame(){
    int  soLuotDoan = TONGLUOTCHOI;
    string wordRandom = randomWord() ;

    string tuKhoiTao = khoiTaoTu(wordRandom);
    char chuCaiDoan ;
    string tuDaDoan  ;
    while(soLuotDoan >= numberLose)
    {
        system("cls");
        cout << "\t\t\tWelcome to Game Hangman level: Easy\n\n\n";
        cout << "\tTu Doan :" << tuKhoiTao ;
        cout << "\t\t\tCac chu da doan: "<< tuDaDoan;
        dohoa(TONGLUOTCHOI-soLuotDoan);
        if(tuKhoiTao == wordRandom)
            {
                cout << "\n\tCONGRATULATIONS! You WIN (^-^)" ;
                break;

            }
        if(!soLuotDoan){
            cout << "\tYou LOSE!.\n \tTu can doan la: "<< wordRandom;
            break;
        }
        while(true){
            cout << "\n\tNHap chu cai doan: " ;
            cin >> chuCaiDoan ;
            if(chuCaiDoan >= 'A' && chuCaiDoan <= 'Z')
                chuCaiDoan += 'a'-'A';
            if(!checkNhapChuCai(chuCaiDoan)){
                cout <<"\n\tChi nhap chu cai tu a-z.";
            }
            else if(!checkNhapTrungKiTu(tuDaDoan,chuCaiDoan))
                break;
            else cout << "\n\tChu cai nay ban da doan roi. Moi doan lai!";
            continue;
        }
        tuDaDoan.push_back(chuCaiDoan);
        if(kiemTraDoanTu(wordRandom,chuCaiDoan))
        {
            tuKhoiTao = updateTuDoan(wordRandom,tuKhoiTao,chuCaiDoan);
            continue;
        }
        else
        {
            --soLuotDoan;
            if(soLuotDoan)
            {
                cout << "\tBan doan sai. Ban con " << soLuotDoan << " luot doan Sai!\n";
            }
            else continue;

        }

        system("pause") ;
    }
    return;
}

bool playAgain(){
    while(true){

        cout << "\n\tBan muon choi lai khong? (y/n) " ;
        char answer ;
        cin >> answer ;
        if(answer == 'y' || answer == 'Y')
        return true;
        else if(answer == 'n' || answer == 'N')
        {
        //cout << "\tBye! See you again.";
        break;
        }
        else cout << "\tSai cu phap!";
        continue;
    }
    return false;
}

int main() {
    listWordEnglish();
    while(true){
        mainGame();
        if(playAgain())
            continue;
        else break;
    }

}
