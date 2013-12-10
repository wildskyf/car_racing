#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include"userinterview.h"
#include<string>
constexpr int width = 20;
using namespace std;

void longtab()
{
    for(int a=0; a<width; a++)
    {
        printf("#");
    }
}

void keepcenter(string s)
{
    for(int a=0; a<4; a++)
    {
        printf(" ");
    }
    printf("%s",s.c_str());
    for(int a=0; a<4; a++)
    {
        printf(" ");
    }
}
void title()
{
    longtab();
    printf("\n\n");
    string s="The Car Game";
    keepcenter(s);
    printf("\n\n");
    longtab();
    printf("\n");
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
    return input();
}

int input()
{
    printf("\nPlease input your choice===>");
    int menu_choice=0;
    scanf("%d",&menu_choice);
    return menu_choice;
}

void menuprocess(int choice)
{
    do
    {
        string setitem[3];
        switch(choice)
        {
        case 1:
            break;

        case 2:
            system("clear");
            title();
            printf("\nS E T T I N G\n");
            setitem[0]="speed";
            setitem[1]="column";
            setitem[2]="exit";
            for(int a=0; a<3; a++)
            {
                printf("\n(%d) %s\n",a+1,setitem[a].c_str());
            }
            input();

            break;

        case 3:
            break;

        default:
            printf("Invalid Command!\n");


            //To be repaired
            cout << "\nEnter to move on. ";
            cin.ignore().get();
            firstmenu();
            //To be repaired


            break;
        }
    }
    while(choice!=3 );
}

