#include"myfunction.h"
#include"setfunction.h"

int main()
{

    char myname[5]={'N','T','N','U'},othername[5]={'N','T','H','U'}; //cars' names
    int choice;
    int best[4]={};
    FILE *sv=fopen("car_game.sv","r");
    if(sv==0)  //check if save file exist
    {
        sv=fopen("car_game.sv","w");  //create save file
        gotoxy(21,6);
        printf("Initialing....");
        fprintf(sv,"%s\n",myname);  // record my car name
        fprintf(sv,"%s\n",othername);  // record other's car name
        fprintf(sv,"%d %d %d %d\n",(40247038-best[0]),(40247038-best[1]),(40247038-best[2]),(40247038-best[3])); // record the best score
        gotoxy(21,8);
        system("pause");
        fclose(sv);
    }
    else
    {
        fscanf(sv,"%s",myname); // set my car name
        fscanf(sv,"%s",othername); // set other's car name
        fscanf(sv,"%d%d%d%d",&best[0],&best[1],&best[2],&best[3]);
        for(int a=0;a<4;a++)
        {
            best[a] = 40247038-best[a]; // set the best score
        }
        fclose(sv);
    }
    do
    {
        system("cls");
        choice = Main_menu(); //get choice
        int b;
        switch(choice)
        {
        case 1:
            b = Selectdifficulty();
            sv=fopen("car_game.sv","w");
            fprintf(sv,"%s\n",myname); // record my car name
            fprintf(sv,"%s\n",othername); // record other's car name
            Gameover(Playing(myname,othername,150-(30*b)),b,best); //Playing() will send score to Gameover()
            break;
        case 2:
            Setting(myname,othername);
            break;
        case 3:
            ShowTheBest(best);
            break;
        case 4:
            Say_Good_Bye();
            break;
        default:
            gotoxy(40,10);
            puts("Invalid Command!");
            gotoxy(40,12);
            system("pause");
            break;
        }
    }
    while(choice != 4);
    return 0;
}
