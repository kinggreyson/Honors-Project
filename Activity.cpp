#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include "Schedule.h"
#include <windows.h>

using namespace std;

Schedule::Schedule()
{
    front = nullptr;
    rear = nullptr;
}

Schedule :: ~Schedule()
{
    node* junk = front;
    while (junk != nullptr)
    {
        front = front->next;
        junk->next = nullptr;
        delete junk;
        junk = front;

    }
}

void Schedule::enqueue(int num)
{
    if (isempty() == true)
    {
        front = new node(num);
        rear = front;
    }
    else
    {
        rear->next = new node(num);
        rear = rear->next;
    }
}

void Schedule::dequeue(int& n)
{
    int num;
    node* temp = nullptr;
    if (isempty() == true)
    {
        cout << "The queue is empty" << endl;
    }
    else
    {
        n = front->value;
        num = front->value;
        temp = front;
        front = front->next;
        delete temp;
    }
}

bool Schedule::isempty()
{
    if (front == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Schedule::display()
{
    node* temp = front;
    while (temp != nullptr)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
    cout << endl;
}

void Schedule :: activity(Schedule& S)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    ofstream file1;
    string filename;
    int count;
    string activity;
    int val;
    int choice = 0;
    int c = 0;
    cout << "Decide on what you would like to call this, and enter that below" << endl;
    cout << "Attach .html to the end to create" << endl;
    cout << "IMPORTANT: Do not include any special characters such as @ or /" << endl;
    //cin.ignore();
    cin >> filename;
    file1.open(filename);
    file1 << "<!DOCTYPE html><html><head><title>DAILY SCHEDULE</title></head><body>" << endl;
    file1 << "<h1 style='font-size:36px;'><h1 style='color:black;'>Schedule</h1>" << endl;
    cout << "Now you'll begin with your first activity of the day" << endl;
    cout << "Activities can range from wake up to school or whatever else you need to do during the day" << endl;
    while (S.isempty() != true)
    {
        cout << "Enter the activity" << endl;
        cin.ignore();
        getline(cin, activity);

        cout << "Enter the number of time slots you'd like to use for your activity " << endl;
        cin >> count;

        cout << "What color would you like for this activity?" << endl;
        cout << "Default black (in file) - 1 ";
        SetConsoleTextAttribute(h, 1);
        cout << "Blue - 2 ";
        SetConsoleTextAttribute(h, 2);
        cout << "Green - 3 ";
        SetConsoleTextAttribute(h, 4);
        cout << "Red - 4 ";
        SetConsoleTextAttribute(h, 5);
        cout << "Purple - 5 ";
        SetConsoleTextAttribute(h, 6);
        cout << "brown - 6 ";
        SetConsoleTextAttribute(h, 7);
        cout << endl << "CHOOSE BETWEEN 1 - 6" << endl;
        cin >> c;

        if (c == 1)
        {
            for (int x = 0; x < count; x++)
            {
                if (S.isempty() == false)
                {
                    S.dequeue(val);
                    cout << val << ":     " << activity << endl;
                    file1 << "<h1 style='font-size:20px;'><span style = 'color:black;'>" << val << ":     " << activity << endl;
                    //file1 << "<h1 style='font-size:20px;'><span style = 'color:black;'>" << activity << "</span></p>" << endl;
                }
                else
                {
                    break;
                }
                cout << endl;
            }

        }
        if (c == 2)
        {
            for (int x = 0; x < count; x++)
            {
                if (S.isempty() == false)
                {
                    S.dequeue(val);
                    cout << val << ":     ";
                    SetConsoleTextAttribute(h, 1);
                    cout << activity << endl;
                    file1 << "<h1 style='font-size:20px;'><span style = 'color:blue;'>" << val << ":     " << activity << "</span></p>" << endl;
                    //file1 << "<h1 style='font-size:20px;'><span style = 'color:blue;'>" << activity << "</span></p>" << endl;
                    SetConsoleTextAttribute(h, 7);
                }
                else
                {
                    break;
                }
                cout << endl;
            }

        }
        if (c == 3)
        {
            for (int x = 0; x < count; x++)
            {
                if (S.isempty() == false)
                {
                    S.dequeue(val);
                    cout << val << ":     ";
                    SetConsoleTextAttribute(h, 2);
                    cout << activity << endl;
                    file1 << "<h1 style='font-size:20px;'><span style = 'color:green;'>" << val << ":     " << activity << "</span></p>" << endl;
                    //file1 << "<h1 style='font-size:20px;'><span style = 'color:green;'>" << activity << "</span></p>" << endl;
                    SetConsoleTextAttribute(h, 7);
                }
                else
                {
                    break;
                }
                cout << endl;
            }

        }
        if (c == 4)
        {
            for (int x = 0; x < count; x++)
            {
                if (S.isempty() == false)
                {
                    S.dequeue(val);
                    cout << val << ":     ";
                    SetConsoleTextAttribute(h, 4);
                    cout << activity << endl;
                    file1 << "<h1 style='font-size:20px;'><span style = 'color:red;'>" << val << ":     " << activity << "</span></p>" << endl;
                    //file1 << "<h1 style='font-size:20px;'><span style = 'color:red;'>" << activity << "</span></p>" << endl;
                    SetConsoleTextAttribute(h, 7);
                }
                else
                {
                    break;
                }
                cout << endl;
            }

        }
        if (c == 5)
        {
            for (int x = 0; x < count; x++)
            {
                if (S.isempty() == false)
                {
                    S.dequeue(val);
                    cout << val << ":     ";
                    SetConsoleTextAttribute(h, 5);
                    cout << activity << endl;
                    file1 << "<h1 style='font-size:20px;'><span style = 'color:purple;'>" << val << ":     " << activity << "</span></p>" << endl;
                    //file1 << "<h1 style='font-size:20px;'><span style = 'color:purple;'>" << activity << "</span></p>" << endl;
                    SetConsoleTextAttribute(h, 7);
                }
                else
                {
                    break;
                }
                cout << endl;
            }

        }
        if (c == 6)
        {
            for (int x = 0; x < count; x++)
            {
                if (S.isempty() == false)
                {
                    S.dequeue(val);
                    cout << val << ":     ";
                    SetConsoleTextAttribute(h, 6);
                    cout << activity << endl;
                    //SetConsoleTextAttribute(h, 7);
                    file1 << "<h1 style='font-size:20px;'><span style = 'color:brown;'>" << val << ":     " << activity << "</span></p>" << endl;
                    //file1 << "<h1 style='font-size:20px;'><span style = 'color:brown;'>" << activity << "</span></p>" << endl;
                    SetConsoleTextAttribute(h, 7);
                }
                else
                {
                    break;
                }
                cout << endl;
            }

        }
    }

    S.display();
    cout << "Access your folder at " << filename << endl;
    file1 << "</body></html>" << endl;

    file1.close();
}

void Schedule :: time(Schedule& S)
{

    int time;
    cout << "It is reccomended that you get seven to nine hours of sleep so this application averages it to 8" << endl;
    cout << "With that in mind, enter the time you wake up on the hour (Just number)" << endl;
    cin >> time;
    time = time * 100; // 8 = 800
    for (int x = 0; x <= 32; x++)
    {

        if (x == 1 || x == 3 || x == 5 || x == 7 || x == 9 || x == 11 || x == 13 || x == 15 || x == 17 || x == 19 || x == 21 || x == 23 || x == 25 || x == 27 || x == 29 || x == 31)
        {
            time += 30;
        }
        if (x == 2 || x == 4 || x == 6 || x == 8 || x == 10 || x == 12 || x == 14 || x == 16 || x == 18 || x == 20 || x == 22 || x == 24 || x == 26 || x == 28 || x == 30 || x == 32)
        {
            time += 70;
        }
        if (time >= 1300)
        {
            time = 100;
        }
        S.enqueue(time);

    }
    cout << "30 minute time slot range" << endl;
    S.display();
    cout << "These are the times you'll plan for in the range" << endl;
}