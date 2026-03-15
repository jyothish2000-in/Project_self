#include "queue.h"

void queue::enqueue(int data)
{
    node* newnode = new node(data);

    if(rear == nullptr){
        front = newnode;
        rear = newnode;
    }
    else{
        rear->next = newnode;
        rear = newnode;
    }
}

void queue::dequeue()
{
    node* temp = front;

    if(front == nullptr){
        return;
    }

    front = front->next;
    if(front == nullptr)
        rear = nullptr;
    delete temp;
}

node* queue::getFront()
{
    return front;
}

