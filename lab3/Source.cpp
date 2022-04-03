#include <iostream>
#include <queue>
#include "Header1.h"

using namespace std;


Queue::Queue() : front(-1), tail(-1) {}



 bool Queue::Empty()
{
    return getFront() == -1 && getTail() == -1;
} 



int Queue::getFront()
{
    return this->front;
}


int Queue::getTail()
{
    return this->tail;
}

void Queue::show()
{
    if (Empty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        for (int i = getFront(); i <= getFront(); i++) 
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
}



void Queue::operator<<(int number)
{
    if (getTail() == SIZE - 1) {
        cout << "Queue is full" << endl;
    }
    else
    {
        if (getFront() == -1)
        {
            this->front = 0;
        }
        this->tail++;
        array[this->tail] = number;
    }
   
}

int Queue::operator>>(int)
{
    cout << array[this->front] << endl;
    return 0;
}
