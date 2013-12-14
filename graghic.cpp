#include<iostream>
#include<stdlib.h>
#include"processing.h"
#include<time.h>
constexpr int width =27;
using namespace std;

void firstmenu()
{
    title();
    string item[3];
    item[0]="play!";
    item[1]="setting";
    item[2]="exit";
    for(int a=0; a<3; a++)
    {
        cout<<"\n("<<a+1<<") "<<item[a].c_str()<<"\n";
    }
}
void longtab()
{
    for(int a=0; a<width; a++)
    {
        cout<<"#";
    }
}

void keepcenter(string s)
{
    for(int a=0; a<4; a++)
    {
        cout<<" ";
    }
    cout<<s.c_str();
}


void title()
{
    system("cls");
    longtab();
    cout<<"\n\n";
    string s="Racing Driving Game";
    keepcenter(s);
    cout<<"\n\n";
    longtab();
    cout<<"\n";
}

void mycar()
{
    cout <<"        ¢p\n"
         <<"      ¢p¢p¢p\n"
         <<"        ¢p\n"
         <<"      ¢p¢p¢p\n";
}

void road()
{
    for(int row=0; row<30; row++)
    {
        if(row%2 == 0)
        {

            cout <<"||";
            for(int a=0; a<50; a++)
            {
                cout << " ";
            }
            cout <<"||\n";
        }
        else
        {
            cout <<"\n";
        }
    }
}
