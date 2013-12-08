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

void printtile()
{
    longtab();
    printf("\n\n");
    string s="The Car Game";
    keepcenter(s);
    printf("\n\n");
    longtab();
}

