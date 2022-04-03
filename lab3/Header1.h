#pragma once

#include <iostream>
#define SIZE 100

using namespace std;

class Queue
{
private:
    int front, tail;
    int array[SIZE]{};
public:
	
    Queue();
    bool Empty();
    int getFront();
    int getTail();
    void show();
    int operator>>(int);
    void operator<<(int number);
};