#include<iostream>
#include<stdlib.h>
#include"processing.h"
constexpr int width = 30;
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
