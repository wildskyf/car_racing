#include<stdio.h>
#include<iostream>
#include"userinterview.h"
#include<string>
#include"main.h"
#include"mywindowscommand.h"
constexpr int width = 20;
using namespace std;


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
    System("clr");
    longtab();
    cout<<"\n\n";
    string s="The Car Game";
    keepcenter(s);
    cout<<"\n\n";
    longtab();
    cout<<"\n";
}

int firstmenu()
{
    title();
    string item[3];
    item[0]="play!";
    item[1]="setting";
    item[2]="exit";
    for(int a=0; a<3; a++)
    {
        printf("\n(%d) %s\n",a+1,item[a].c_str());
    }
    return inputchoice();
}


int inputchoice()
{
    cout<<"\nPlease input your choice===>";
    int choice=0;
    scanf("%d",&choice);
    return choice;
}

void menuprocess(int choice)
{
    do
    {
        int setchoice;
        string setitem[3];
        if( choice == 1)
        {
            title();
        }

        else if(choice ==2)
        {
            title();
            printf("\nSETTING\n");
            setitem[0]="speed";
            setitem[1]="column";
            setitem[2]="exit";
            for(int a=0; a<3; a++)
            {
                cout << "\n("<<a+1<<") "<<setitem[a].c_str()<<"\n";
            }
            setchoice = inputchoice();
            if(setchoice==1)
            {}
            else if(setchoice==2)
            {}
            else if(setchoice==3)
            {break;}
            else
            {}
        }
        else if(choice ==3)
        {
            break;
        }
        else
        {
            System("pause");
            break;
        }
    }
    while(choice!=3 );
    if(choice!=3)
    {main();}
}


