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
    item[1]="setting";
    item[2]="help";
    item[3]="exit";
    for(int a=0; a<4; a++)
    {
        cout<<"\n("<<a+1<<") "<<item[a].c_str()<<"\n";
    }
}

void title()
{
    system("cls");
    longtab();
    cout<<"\n\n";
    cout<<"\tRacing Driving Game";
    cout<<"\n\n";
    longtab();
    cout<<"\n";
}

void longtab()
{
    for(int a=0; a<width; a++)
    {
        cout<<"#";
    }
}

// -1 for left, 0 for center, 1 for right

void mycar_path(char path,int *timec)
{
    system("cls");
    road(timec);
    if(path == 75)   // left
    {

        if(*timec% 2 ==0)
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
        else
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
    }

    else if(path == 77)
    {
        if(*timec % 2 ==0)
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

void road(int *timec)
{
    if(*timec % 2 ==0)
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
    }
}

