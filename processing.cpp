#include<iostream>
#include<string>
#include"main.h"
#include"mywindowscommand.h"
#include<stdlib.h>
#include"graphic.h"
#include"processing.h"
#include<conio.h>
#include <time.h>
#include<windows.h>

using namespace std;


int main_inerface()
{
    firstmenu();
    return inputchoice();
}


int inputchoice()
{
    cout <<"\n\t\t\tPlease input your choice===>";
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
            Selectdifficulty();
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

        }
        else if(choice == 4)
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
    while(choice!=4 );
    if(choice!=4)
    {
        main();
    }
}

void Selectdifficulty()
{
    cout << "\t\t\tSelect a difficulty";

    for(int a=1; a<=3; a++)
    {
        cout << "\n\n\t\t\t("<<a<<")";

        for(int b=5; b>=a; b--)
        {
            cout << "*";
        }
    }
    cout<<"\n";
    int diffculty = inputchoice()*100;
    system("cls");
    beforegame();  // how to manufactor
    aftergame(game(diffculty));   // score
}

int control_path(int diffculty)
{
    int tim = diffculty ;
    char ch1, path = 0 ;
    int pre = clock() ;
    int start = clock();
    int endsituation;
    while(  ch1 != 'q' && endsituation != 0 )
    {
        if( kbhit() )
        {
            ch1 = getch();
            path = 1 ;
        }
        if( path || clock()-pre > tim )
        {
            endsituation = road(clock()%10,ch1);    // return 0  == end game
            path = 0 ;
            pre = clock() ;
        }
    }
    return (clock() - start) /10;
}

int game(int diffculty)
{
    system("pause");
    system("cls");
    return control_path(diffculty);
}

