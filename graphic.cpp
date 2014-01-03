#include<iostream>
#include<stdlib.h>
#include"processing.h"
#include<time.h>
#include"graphic.h"
constexpr int width =35;
using namespace std;
const string space3 = "\t\t\t";


void firstmenu()
{
    title();
    string item[4];
    item[0]="play!";
    item[1]="setting (not yet)";
    item[2]="help (not yet)";
    item[3]="exit";
    for(int a=0; a<4; a++)
    {
        cout <<"\n"<<space3<<"("<<a+1<<") "<<item[a].c_str()<<"\n";
    }
}

void title()
{
    system("cls");

    longtab();
    cout<<"\n\n"
        <<space3
        <<"\tRacing Driving Game"
        <<"\n\n";
    longtab();
    cout<<"\n";
}

void longtab()
{
    cout <<space3<<"\b";
    for(int a=0; a<width; a++)
    {
        cout<<"#";
    }
}

int road(int timec,char path)
{
    system("cls");
    if(timec% 2 ==0)
    {
        for(int a=0; a<20; a++)
        {
            if(a % 2 ==0)
            {
                cout <<space3
                     <<"||\t     ||\n";
            }
            else
            {
                cout <<"\n";
            }
        }
            if(path == 75)   // left
            {
                cout <<space3
                 <<"||  N\t     ||\n"
                 <<space3
                 <<"  O T O\t\n"
                 <<space3
                 <<"||  N\t     ||\n"
                 <<space3
                 <<"  O U O\t\n";
            }
             else if(path == 77)  //right
             {
                 cout <<space3
                 <<"||\t  N  ||\n"
                 <<space3
                 <<"  \tO T O\n"
                 <<space3
                 <<"||\t  N  ||\n"
                 <<space3
                 <<"  \tO U O\n";
             }
             else
             {
                 cout <<space3
                 <<"||\t  N  ||\n"
                 <<space3
                 <<"  \tO T O\n"
                 <<space3
                 <<"||\t  N  ||\n"
                 <<space3
                 <<"  \tO U O\n";
             }

    }
    else
    {
        for(int a=0; a<20; a++)
        {
            if(a % 2 ==0)
            {
                cout <<"\n";
            }
            else
            {
                cout <<space3
                     <<"||\t     ||\n";
            }
        }
            if(path == 75)   // left
            {
                cout <<space3
                     <<"    N\t\n"
                     <<space3
                     <<"||O T O\t     ||\n"
                     <<space3
                     <<"    N\t\n"
                     <<space3
                     <<"||O U O\t     ||\n";
            }
            else if(path == 77)
             {
                 cout <<space3
                 <<"  \t  N\n"
                 <<space3
                 <<"||\tO T O||\n"
                 <<space3
                 <<"  \t  N\n"
                 <<space3
                 <<"||\tO U O||\n";
             }
            else
            {
                cout <<space3
                 <<"  \t  N\n"
                 <<space3
                 <<"||\tO T O||\n"
                 <<space3
                 <<"  \t  N\n"
                 <<space3
                 <<"||\tO U O||\n";
            }
    }

}

void beforegame()
{
    cout <<"\n\n\n\n\n"<<space3;
    cout << "Please use arrow key to control car\n\n\n";
    cout <<space3;
    cout << "Press any key to start\n\n\n";
    cout <<space3;
    cout << "Press  [q]   to end\n\n\n";
}

void aftergame(int score)
{
    system("cls");
    cout <<"\n\n\n\n\n";
    longtab();
    cout<<"\n\n"
        <<space3
        <<"\t  Game over\n\n"
        <<space3
        <<"\t\bYour score is "<<score
        <<"\n\n";
    longtab();
    cout<<"\n\n\n";
}
