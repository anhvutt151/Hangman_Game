#include <iostream>
#include <cstdlib>
#include <cstring>
#include<ctime>
using namespace std;
const int tongLuotChoi = 7;
string randomWord(){
    string wordList[]= {"tent","pile","hello","plate","knife","glass","how","who", "perfect","genius", "project","story",
    "print","world","company","moto","music","person","people","number","meat","fork","data","food","juice","apple","bird",
    "video","movie","paper","month","fish","road","soup","math","wood","office","city","blood","gold","photo","actor"};
    int soTu = sizeof(wordList) / sizeof(string);
    srand((time(0)));   // tao ngau nhien moi lan Run
    int randomIndex = rand() % soTu;  // ngau nhien tu 1 den soTu -1
    return wordList[randomIndex];
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
    else if(pictureNumber == 0)
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
                        "\t\t |       |                             \n"
                        "\t\t |       |                             \n"
                        "\t\t |       |                             \n"
                        "\t\t |       O                             \n"
                        "\t\t |      /|                            \n"
                        "\t\t |                                     \n"
                        "\t\t |                                     \n"
                        "\t\t |____________________________________ \n\n\n" ;
    }
    else if(pictureNumber == 3){
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
     else if(pictureNumber == 2){
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
     else if(pictureNumber == 1){
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


void mainGame(){
    int  soLuotDoan = tongLuotChoi;
    string wordRandom = randomWord() ;

    string tuKhoiTao = khoiTaoTu(wordRandom);
    char chuCaiDoan ;
    string tuDaDoan  ;
    while(soLuotDoan >= 0)
    {
        system("cls");
        cout << "\t\t\tWelcome to Game Hangman level: Easy\n\n\n";
        cout << "\tTu Doan :" << tuKhoiTao ;
        cout << "\t\t\tCac chu da doan: "<< tuDaDoan;
        dohoa(tongLuotChoi-soLuotDoan);
        if(!soLuotDoan){
            cout << "\tYou LOSE!.\n \tTu can doan la: "<< wordRandom;
            break;
        }
        cout << "\n\tNHap chu cai doan: " ;
        cin >> chuCaiDoan ;
        tuDaDoan += chuCaiDoan;
        if(kiemTraDoanTu(wordRandom,chuCaiDoan))
        {
            tuKhoiTao = updateTuDoan(wordRandom,tuKhoiTao,chuCaiDoan);
            if(tuKhoiTao != wordRandom)
            continue;
            else cout << "\n\tCONGRATULATIONS! You WIN (^-^)\n" ;
        }
        else
        {
            --soLuotDoan;
            if(soLuotDoan)
            {
                cout << "\tBan doan sai. Ban con " << soLuotDoan << " luot doan!\n";
            }

        }

        system("pause") ;
    }
    return;
}
 void playAgain(char playGame){
    if(playGame == 'y' || playGame == 'Y')
        mainGame();
    else system("out");
}

int main() {
    system("cls"); // cls la xoa toan bo man hinh
    cout << "xx\n";
    system("pause") ; // dung man hinh lai de nhin

    mainGame();



}
