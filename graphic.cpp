#include<iostream>
#include<stdlib.h>
#include"processing.h"
#include<time.h>
#include"graghic.h"

constexpr int width =27;
using namespace std;
const string space = "\t";
const string space3 = "\t\t\t";
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
                 <<"||  N"<<space<<"     ||\n"
                 <<space3
                 <<"  O T O"<<space<<"\n"
                 <<space3
                 <<"||  N"<<space<<"     ||\n"
                 <<space3
                 <<"  O U O"<<space<<"\n";

        }
        else
        {
            cout <<space3
                 <<"    N"<<space<<"\n"
                 <<space3
                 <<"||O T O"<<space<<"     ||\n"
                 <<space3
                 <<"    N"<<space<<"\n"
                 <<space3
                 <<"||O U O"<<space<<"     ||\n";

        }
    }

    else if(path == 77)
    {
        if(*timec % 2 ==0)
        {
            cout <<space3
                 <<"||"<<space<<"  N  ||\n"
                 <<space3
                 <<"  "<<space<<"O T O\n"
                 <<space3
                 <<"||"<<space<<"  N  ||\n"
                 <<space3
                 <<"  "<<space<<"O U O\n";

        }
        else
        {
            cout <<space3
                 <<"  "<<space<<"  N\n"
                 <<space3
                 <<"||"<<space<<"O T O||\n"
                 <<space3
                 <<"  "<<space<<"  N\n"
                 <<space3
                 <<"||"<<space<<"O U O||\n";

        }
    }


}

void road(int *timec)
{
    if(*timec % 2 ==0)
    {
        for(int b=0; b<4; b++)
        {
            for(int a=0; a<4; a++)
            {
                if(a % 2 ==0)
                {
                    cout <<space3
                         <<"||"<<space<<"     ||\n";
                }
                else
                {
                    cout <<"\n";
                }

            }
            //   cout <<"\n";
        }
    }
    else
    {
        for(int b=0; b<4; b++)
        {
            for(int a=0; a<4; a++)
            {
                if(a % 2 ==0)
                {
                    cout <<"\n";
                }
                else
                {
                    cout <<space3
                         <<"||"<<space<<"     ||\n";
                }
            }
        }
    }
}

