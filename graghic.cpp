#include<iostream>
#include<stdlib.h>
#include"processing.h"
#include<time.h>
#include"graghic.h"

constexpr int width =27;
using namespace std;
const string space = "\t";
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

void mycar_path(char path)
{
    if(path == 75)   // left
    {
        cout <<space<<space<<space;
             cout <<"||  N"<<space<<"     ||\n";
             cout <<space<<space<<space;
             cout <<"||O T O"<<space<<"     ||\n";
             cout <<space<<space<<space;
             cout <<"||  N"<<space<<"     ||\n";
             cout <<space<<space<<space;
             cout <<"||O U O"<<space<<"     ||\n";
    }
  /*  else if(path == 0)
    {
        cout <<space<<space<<space;
             cout <<"  N\n";
             cout <<space<<space<<space;
             cout <<"O T O\n";
             cout <<space<<space<<space;
             cout <<"  N\n";
             cout <<space<<space<<space;
             cout <<"O U O\n";
    }*/
    else if(path == 77)
    {
        cout <<space<<space<<space<<"||"<<space;
             cout <<"  N  ||\n";
             cout <<space<<space<<space<<"||"<<space;
             cout <<"O T O||\n";
             cout <<space<<space<<space<<"||"<<space;
             cout <<"  N  ||\n";
             cout <<space<<space<<space<<"||"<<space;
             cout <<"O U O||\n";
    }


}

/*void mycar_left()
{
    cout <<space
         cout <<"  N\n"
         cout <<space
         cout <<"O T O\n"
         cout <<space
         cout <<"  N\n"
         cout <<space
         cout <<"O U O\n";
}
void mycar_center()
{
    cout <<space<<space<<space<<"  N\n"
         <<space<<space<<space<<"O T O\n"
         <<space<<space<<space<<"  N\n"
         <<space<<space<<space<<"O U O\n";
}
void mycar_right()
{
    cout <<space<<space<<space<<space<<space<<"  N\n"
         <<space<<space<<space<<space<<space<<"O T O\n"
         <<space<<space<<space<<space<<space<<"  N\n"
         <<space<<space<<space<<space<<space<<"O U O\n";
}
*/
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

