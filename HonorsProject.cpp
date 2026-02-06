#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <stdlib.h>
#include "Schedule.h"
#include <windows.h>

using namespace std;

void tutorial1()
{
    Schedule stack;
    int choice = 0;
    cout << "This program is meant to scheudle your day" << endl;
    cout << "It is at a set 8 hours of sleep" << endl;
    cout << "You will set the time you wakeup" << endl;
    cout << "You will plan activities in 30 minute blocks for the rest of the day" << endl;
    cout << "This will be set in an html file" << endl;
    cout << "Example file name - Hello.html - It is important that you include .html at the end" << endl;
    cout << "You will have the freedom to set the color of the text for each activity" << endl;
    cout << "Afterwards look for the file in your file explorer" << endl;
    cout << endl;
    cout << "Ready to continue - Enter 1" << endl;
    cin >> choice;
    if (choice == 1)
    {
        stack.time(stack);
        stack.activity(stack);
    }
    else
    {
        tutorial1();
    }
}

int main()
{
    int tutorial = 0;
    Schedule stack;
    cout << "WELCOME TO SCHEDULER APP" << endl;
    cout << "If this is your first time using this program or you are lost enter 1 to receive more information" << endl;
    cout << "otherwise enter any other number to continue" << endl;
    cin >> tutorial;
    if (tutorial == 1)
    {
        tutorial1();
    }
    else if(tutorial > 1 || tutorial < 1)
    {
        cout << "It is important to set some parameters first" << endl;

        stack.time(stack);
        stack.activity(stack);
    }
}

