#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
void System(string s)
{
    if(s=="pause")
    {
        cout<<"Enter to move on. ";
        cin.ignore().get();
    }
    else if(s=="cls")
    {
        system("clear");
    }
}

