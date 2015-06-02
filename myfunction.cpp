#include"myfunction.h"
#include"playingfunction.h"
#include"setfunction.h"


void gotoxy(int xpos, int ypos) //from the net
{
    COORD scrn;
    HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
    scrn.X = xpos;
    scrn.Y = ypos;
    SetConsoleCursorPosition(hOuput,scrn);
}



void Line (int n)  // print one line
{
    for(int i=0; i<n; i++)
    {
        printf("¢i");
    }
    printf("\n");
}

void Licence(int color=8) // copy left
{
    SetColor(color);
    gotoxy(0,18);
    puts("\t¢i¢i¢i  ¢i¢i¢i  ¢i¢i¢i  ¢i  ¢i  ¢i      ¢i¢i¢i  ¢i¢i¢i  ¢i¢i¢i");
    puts("\t¢i      ¢i  ¢i  ¢i  ¢i  ¢i  ¢i  ¢i      ¢i      ¢i        ¢i");
    puts("\t¢i      ¢i  ¢i  ¢i¢i¢i    ¢i    ¢i      ¢i¢i¢i  ¢i¢i¢i    ¢i");
    puts("\t¢i      ¢i  ¢i  ¢i        ¢i    ¢i      ¢i      ¢i        ¢i");
    puts("\t¢i¢i¢i  ¢i¢i¢i  ¢i        ¢i    ¢i¢i¢i  ¢i¢i¢i  ¢i        ¢i");
    gotoxy(70,23);
    printf("@ Wildsky");
    SetColor();
    return;
}



int Main_menu(void) // print main menu
{
    SetColor(9);
    gotoxy(19,2);
    Line(18);
    gotoxy(19,3);
    printf("¢i");
    gotoxy(53,3);
    printf("¢i");
    gotoxy(19,4);
    printf("¢i");
    SetColor();
    printf("         Car Racing Game        ");
    SetColor(12);
    printf("¢i");
    gotoxy(19,5);
    printf("¢i");
    gotoxy(53,5);
    printf("¢i");
    gotoxy(19,6);
    Line(18);
    SetColor();
    gotoxy(19,8);
    puts("[1] Play!");
    gotoxy(19,10);
    puts("[2] Setting");
    gotoxy(19,12);
    puts("[3] Best Score");
    gotoxy(19,14);
    puts("[4] Exit");
    Licence(7);
    return InputChoice();
}

int InputChoice(void) // get choice
{
    gotoxy(19,16);
    printf("Input your choice...>");
    char j = getchar();
    if(j != '\n')
    {
        getchar();
    }
    return j -'0';
}

void Beforegame(void) //how to play and how to give up
{
    system("cls");
    SetColor(8);
    gotoxy(18,6);
    Line(22);
    gotoxy(18,7);
    printf("¢i");
    gotoxy(60,7);
    printf("¢i");
    gotoxy(18,8);
    printf("¢i");
    SetColor();
    printf("   Please use arrow key to control car  ");
    SetColor(8);
    printf("¢i");
    gotoxy(18,9);
    printf("¢i");
    gotoxy(60,9);
    printf("¢i");
    gotoxy(18,10);
    printf("¢i");
    SetColor();
    printf("   Press  [q]   to end");
    SetColor(8);
    gotoxy(60,10);
    printf("¢i");
    gotoxy(18,11);
    printf("¢i");
    gotoxy(60,11);
    printf("¢i");
    gotoxy(18,12);
    Line(22);
    gotoxy(30,17);
    SetColor();
    system("pause");
}

int Selectdifficulty(void) // Select the speed of car
{
    system("cls");
    SetColor(1);
    gotoxy(19,2);
    Line(18);
    gotoxy(19,3);
    printf("¢i");
    gotoxy(53,3);
    printf("¢i");
    gotoxy(19,4);
    printf("¢i");
    SetColor();
    printf("        Select Difficulty       ");
    SetColor(4);
    printf("¢i");
    gotoxy(19,5);
    printf("¢i");
    gotoxy(53,5);
    printf("¢i");
    gotoxy(19,6);
    Line(18);
    SetColor();
    gotoxy(19,8);
    puts("[1] Easy");
    gotoxy(19,10);
    puts("[2] Common");
    gotoxy(19,12);
    puts("[3] Difficult");
    gotoxy(19,14);
    puts("[4] Crazy");
    Licence(8);
    int r=0;
    do
    {
        r = InputChoice();
    }
    while(!(1<=r&&r<=4));
    return r;  // return difficulty to Playing()
}

int Playing(char* mine,char* others,int diff)
{
    Beforegame();
    system("cls");
    int random = 1,other=0;
    char ch1=75, path = 1 ;
    int speed = diff/2;
    Road(2);    // print road
    Car(ch1,mine);  // print my car
    Othercar((clock()/diff)%20,random,others,ch1); // print other's car
    Countdown(diff,1); // countdown
    int tim = 50;
    int pre = clock() ;
    int endsituation=1;
    int start = clock();  // record the start time
    int score=0;
    while( ch1 != 'q' && endsituation != 0 )
    {
        if((clock()/speed)%20 == 0)  //time of change
        {
            random = rand()%2; // change the position of other's car
        }
        other = Othercar((clock()/diff)%20,random,others,ch1);

        if( kbhit() ) // press any key? process the input command
        {
            Road(2);
            int buffer = ch1;
            ch1 = getch();
            if(ch1!=77 && ch1!=75 && ch1!='q') ch1 = buffer;
            path = 1 ;
        }
        if( path || clock()-pre > tim ) // refresh the display
        {
            path = 0 ;
            Road(2);
            endsituation = Car(ch1,mine);
            pre = clock() ;
        }
        int i=(clock()/diff)%20; //
        if((i>=17&&i<20) && endsituation == other) endsituation = 0;  // Being run down from side
        score = Score(clock()-start);  // set score
        gotoxy(48,8);
        printf("press [q] to end game.");
    }
    if(ch1 != 'q')
    {
        Endanimation(other);  // Bomb~~ !!
    }
    gotoxy(48,22);
    system("pause");
    return score;
}

void Gameover(int score,int diff,int* best) // print your score
{
    system("cls");
    gotoxy(19,4);
    Line(18);
    gotoxy(19,5);
    printf("¢i");
    gotoxy(53,5);
    puts("¢i");
    gotoxy(19,6);
    printf("¢i           game over\n");
    gotoxy(53,6);
    puts("¢i");
    gotoxy(19,7);
    printf("¢i");
    gotoxy(53,7);
    puts("¢i");
    gotoxy(19,8);
    printf("¢i       your score is %d",score);
    gotoxy(53,8);
    puts("¢i");
    int a=8;
    bool over=false; // control the bottom boarder
    if(best[diff-1] < score)  //check if it is the best score
    {
        best[diff-1] = score;
        gotoxy(19,a+1);
        printf("¢i");
        gotoxy(53,a+1);
        puts("¢i");
        gotoxy(19,a+2);
        printf("¢i       You are the best!\n");
        gotoxy(53,a+2);
        printf("¢i");
        over = true;
    }
    gotoxy(19,over?a+3:a+1);
    printf("¢i");
    gotoxy(53,over?a+3:a+1);
    printf("¢i");
    gotoxy(19,over?a+4:a+2);
    Line(18);
    gotoxy(19,over?a+6:a+4);
    FILE *sv=fopen("car_game.sv","w");
    fprintf(sv,"%d %d %d %d\n",(40247038-best[0]),(40247038-best[1]),(40247038-best[2]),(40247038-best[3])); // record the best score
    fclose(sv);
    system("pause");
}


void Setting(char* mine,char* others)  // print setting menu
{
    int choice=0;
    do
    {
        system("cls");
        SetColor(1);
        gotoxy(19,2);
        Line(18);
        gotoxy(19,3);
        printf("¢i");
        gotoxy(53,3);
        printf("¢i");
        gotoxy(19,4);
        printf("¢i");
        SetColor();
        printf("             Setting            ");
        SetColor(4);
        printf("¢i");
        gotoxy(19,5);
        printf("¢i");
        gotoxy(53,5);
        printf("¢i");
        gotoxy(19,6);
        Line(18);
        SetColor();
        gotoxy(19,8);
        puts("[1] The Name of My Car");
        gotoxy(19,10);
        puts("[2] The Name of other's Car");
        gotoxy(19,12);
        puts("[3] Back");
        Licence();
        choice = InputChoice();  // get choice

        switch(choice)
        {
        case 1:
            SetCarName(mine,0);
            break;
        case 2:
            SetCarName(others,1);
            break;
        case 3:
            break;
        default:
            gotoxy(19,14);
            SetColor(7);
            puts("Invalid Command!");
            SetColor();
            gotoxy(19,16);
            system("pause");
            break;
        }
    }
    while(choice != 3);
}


void ShowTheBest(int best[])  // print the best score
{
    system("cls");
    SetColor(1);
    gotoxy(19,2);
    Line(18);
    gotoxy(19,3);
    printf("¢i");
    gotoxy(53,3);
    printf("¢i");
    gotoxy(19,4);
    printf("¢i");
    SetColor();
    printf("         The best scores        ");
    SetColor(4);
    printf("¢i");
    gotoxy(19,5);
    printf("¢i");
    gotoxy(53,5);
    printf("¢i");
    gotoxy(19,6);
    Line(18);
    SetColor();
    gotoxy(19,8);
    printf("Easy      :  %-5d\n",best[0]);
    gotoxy(19,10);
    printf("Common    :  %-5d\n",best[1]);
    gotoxy(19,12);
    printf("Difficult :  %-5d\n",best[2]);
    gotoxy(19,14);
    printf("Crazy     :  %-5d\n",best[3]);
    gotoxy(19,16);
    system("pause");
}

void Say_Good_Bye(void) // BYE BYE ~
{
    system("cls");
    char Bye[9]="Bye Bye!";
    gotoxy(19,8);
    for(int a=0; a<9; a++)
    {
        printf("%c",Bye[a]);
        Sleep(70);
    }
    char Bye2[32]="I hope that you like this game!";
    gotoxy(19,11);
    for(int a=0; a<32; a++)
    {
        printf("%c",Bye2[a]);
        Sleep(30);
    }
    gotoxy(19,14);
    puts(":D");
    Sleep(1000);
    gotoxy(0,20);
}
