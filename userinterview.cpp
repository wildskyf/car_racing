#include<stdio.h>
#include<stdlib.h>
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
    for(int a=0; a<4;a++)
    {
        printf(" ");
    }
    printf("%s",s.c_str());
    for(int a=0; a<4;a++)
    {
        printf(" ");
    }
}

void firstmanu()
{
    longtab();
    printf("\n\n");
    string s="The Car Game";
    keepcenter(s);
    printf("\n\n");
    longtab();
    printf("\n");
    string item[3];
    item[0]="play!";
    item[1]="setting";
    item[2]="exit";
    for(int a=0;a<3;a++)
    {
         printf("\n(%d) %s\n",a+1,item[a].c_str());
    }
}

