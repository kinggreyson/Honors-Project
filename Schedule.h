#ifndef Schedule_H
#define Schedule_H

#include <iostream>
#include <iomanip>
#include "Schedule.h"

class Schedule
{
	struct node
	{
		int value;
		node* next;
		node(int v, node* n = nullptr)
		{
			value = v;
			next = n;
		}
	};
	node* front;
	node* rear;

public:
	Schedule();
	~Schedule();
	void enqueue(int num);
	void dequeue(int& n);
	bool isempty();
	void display();
	void time(Schedule& S);
	void activity(Schedule& S);
};

#endif
