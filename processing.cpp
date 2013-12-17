#include<iostream>
#include<string>
#include"main.h"
#include"mywindowscommand.h"
#include<stdlib.h>
#include"graghic.h"
#include"processing.h"
#include<stdio.h>
#include <conio.h>
using namespace std;


int main_inerface()
{
    firstmenu();
    return inputchoice();
}


int inputchoice()
{
    cout<<"\nPlease input your choice===>";
    int choice=0;
    cin>>choice;
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
            cout<<"Your score is "<<Selectdifficulty()<<"\n";
            system("pause");
            break;
        }

        else if(choice ==2)
        {
            title();
            cout << "\nSETTING\n";
            setitem[0]="speed";
            setitem[1]="column";
            setitem[2]="exit";
            for(int a=0; a<3; a++)
            {
                cout << "\n("<<a+1<<") "<<setitem[a].c_str()<<"\n";
            }
            setchoice = inputchoice();
            if(setchoice==1)
            {

            }
            else if(setchoice==2)
            {}
            else if(setchoice==3)
            {
                break;
            }
            else
            {}
        }
        else if(choice ==3)
        {
            break;
        }
        else
        {
            cout << "Invalid Command!\n\n";
            system("pause");
            break;
        }
    }
    while(choice!=3 );
    if(choice!=3)
    {
        main();
    }
}

int Selectdifficulty()
{
    cout << "Select a difficulty";

    for(int a=1; a<=3; a++)
    {
        cout << "\n\n("<<a<<")";

        for(int b=1; b<=a; b++)
        {
            cout << "*";
        }
    }
    cout<<"\n";
    inputchoice();
    game();

    return 0;
}

void control_path()
{
    char ch1, path;
    while( ch1 = getch() )
    {
        if(ch1 == -32)
        {

            path = getch();
            mycar_path(path);//75for left , 77 for left
        }
        cout << "\n";
    }
}

void game()
{

    cout << "Press any key to start\n";
    system("pause");
    system("cls");
 //   road();
    control_path();
}

