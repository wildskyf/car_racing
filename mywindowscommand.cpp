#include<iostream>
#include<string>
using namespace std;
void System(string s)
{
        if(s=="pause"){
        cout << "Invalid Command!\n\nEnter to move on. ";
        cin.ignore().get();
        }
        else if(s=="clr")
        {
            system("clear");
        }
}

