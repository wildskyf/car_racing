#include"mystruct.h"
#include"myfunction.h"
constexpr int column = 2;


void SetColor(int color=15) // from the net
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole,color);
}

void Road(int n) // print road
{
    int a=0;
    bool time1=false;
    if(clock()%2==0)
    {
        a=a+1;
        time1= true;
    }
    for(;a<22;a+=2)
    {
        if(time1)
        {
            gotoxy(25,a-1);
            printf(" ");
            gotoxy(39,a-1);
            printf(" ");
        }
        gotoxy(25,a);
        printf("�i");
        gotoxy(39,a);
        printf("�i");
        gotoxy(25,a+1);
        printf(" ");
        gotoxy(39,a+1);
        printf(" ");
    }
    printf("\n");
    return;
}

int Car(char path,char* name)
{
    int x=27;
    if(path==75) //left
    {
        x=27;
    }
    else if(path==77) //right
    {
        x=34;
    }
    gotoxy(x,19);
    SetColor(14);
    printf("  %c",name[0]);
    gotoxy(x,20);
    printf("O %c O",name[1]);
    gotoxy(x,21);
    printf("  %c",name[2]);
    gotoxy(x,22);
    printf("O %c O",name[3]);
    SetColor();
    return x;  // return my car's position
}
int Othercar(int position,int r,char* name,char path=75)
{
    int x;
    if(r==0)
    {
        x = 27;
    }
    else if(r==1)
    {
        x = 34;
    }

    /* y = 19~22 */

    for(int i=19;i<=22;i++)
    {
        gotoxy(path==75?34:27,i);
        puts("     ");
    }


    gotoxy(27,position-1);
    printf("\t     ");


    if(position<15)
    {
        gotoxy(x==27?34:27,position);
        printf("     ");
    }
    gotoxy(x,position);
    printf("  %c  ",name[0]);

    if(position<15)
    {
        gotoxy(x==27?34:27,position+1);
        printf("     ");
    }
    gotoxy(x,position+1);
    printf("X %c X",name[1]);

    if(position<15)
    {
        gotoxy(x==27?34:27,position+2);
        printf("     ");
    }
    gotoxy(x,position+2);
    printf("  %c  ",name[2]);

    if(position<15)
    {
        gotoxy(x==27?34:27,position+3);
        printf("     ");
    }
    gotoxy(x,position+3);
    printf("X %c X",name[3]);

    if(position<15)
    {
        gotoxy(x==27?34:27,position+4);
        printf("     ");
    }
    return x;  // return other's car 's opsition
}


void Countdown(int s,int ctrl) // count down
{
    /*
        Counting time will be changed by the difficult.
    */
    s=(s/10)*65;
    gotoxy(53,16);
    printf("�i�i�i");gotoxy(53,17);
    printf("    �i");gotoxy(53,18);
    printf("�i�i�i");gotoxy(53,19);
    printf("    �i");gotoxy(53,20);
    printf("�i�i�i");
    if(ctrl != 0)
    {
        Sleep(s);
    }
    gotoxy(53,16);
    printf("�i�i�i");gotoxy(53,17);
    printf("    �i");gotoxy(53,18);
    printf("�i�i�i");gotoxy(53,19);
    printf("�i    ");gotoxy(53,20);
    printf("�i�i�i");
    if(ctrl != 0)
    {
        Sleep(s);
    }
    gotoxy(53,16);
    printf("   �i  ");gotoxy(53,17);
    printf("   �i  ");gotoxy(53,18);
    printf("   �i  ");gotoxy(53,19);
    printf("   �i  ");gotoxy(53,20);
    printf("   �i  ");
    if(ctrl != 0)
    {
        Sleep(s);
    }
    gotoxy(56,16);  // erase the '1'
    printf("  ");gotoxy(56,17);
    printf("  ");gotoxy(56,18);
    printf("  ");gotoxy(56,19);
    printf("  ");gotoxy(56,20);
    printf("  ");
}

int Score(int ScoreOfGame) //print score
{
    gotoxy(48,4);
    printf("score: %d",ScoreOfGame/100);
    return ScoreOfGame/100;
}

void Endanimation(int x) // Bomb!
{
    gotoxy(x,16);
    puts("     ");
    gotoxy(x,17);
    puts("     ");
    gotoxy(x,18);
    puts("     ");
    gotoxy(x-7,19);
    puts("      ^ ^ ^ ^      ");
    gotoxy(x-7,20);
    puts("    < BOMB!!  >    ");
    gotoxy(x-7,21);
    puts("    <  BOMB!! >    ");
    gotoxy(x-7,22);
    puts("      v v v v      ");
    system("color F0");
        Sleep(20);
        system("color 0F");
        Sleep(20);
        system("color C0");
        Sleep(20);
        system("color F0");
        Sleep(20);
        system("color FC");
        Sleep(20);
        system("color 0F");
        Sleep(20);
        system("color F0");
        Sleep(20);
        system("color F0");
        Sleep(20);
        system("color 0F");
        Sleep(20);
        system("color C0");
        Sleep(20);
        system("color F0");
        Sleep(20);
        system("color FC");
        Sleep(20);
        system("color 0f");
        Sleep(20);
}
