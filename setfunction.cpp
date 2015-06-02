#include"setfunction.h"

void SetColor(int color=15); // from the net


void SetCarName(char name[], int a)
{
    /*
        change cars' name
        blue is mine
        red is enemy's
    */
    int color=0;
    if(a==0)
    {
        color = 1;
    }
    else
    {
        color = 4;
    }

    system("cls");
    Licence(8);
    SetColor(color); // set the color of boarder
    gotoxy(19,2);
    Line(18);
    gotoxy(19,3);
    printf("¢i");
    gotoxy(53,3);
    printf("¢i");
    gotoxy(19,4);
    printf("¢i");
    SetColor();
    printf("      The Name of %s Car   %s",a==0?"Your ":"Eneny's",a==0?"  ":"");  // the space is used to make the boarder tidy
    SetColor(color);
    printf("¢i");
    gotoxy(19,5);
    printf("¢i");
    gotoxy(53,5);
    printf("¢i");
    gotoxy(19,6);
    Line(18);
    SetColor();
    gotoxy(16,10);
    printf("You could change the name of%scar here.",a==0?" Your  ":"Other's");
    gotoxy(14,12);
    printf("But It is available only if you imput four word.");
    gotoxy(14,14);
    printf("If you want to quit just imput [q] ,and press [Enter]");
    gotoxy(24,17);
    char buffer[5];
    strcpy(buffer,name);
    printf("Please input a name :____");
    gotoxy(45,17);
    scanf("%s",name);
    getchar();
    if(name[0]=='q')
    {
        strcpy(name,buffer);
    }

}
