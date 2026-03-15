#ifndef QUEUE_H
#define QUEUE_H
#include <QStandardItem>

class node
{
public:
    int data;
    node* next;

    friend class queue;

public:
    node(int val) : data(val){
        next = nullptr;
    }
};

class queue
{
    node* front;
    node* rear;
    QStandardItemModel* item;

public:
    queue()
    {
        front = rear = nullptr;
        item = new QStandardItemModel;
    }
    ~queue()
    {
        node* temp = front;

        while(temp)
        {
            node* next = temp->next;
            delete temp;
            temp = next;
        }
    }

    void enqueue(int);
    void dequeue();
    node* getFront();
};

#endif // QUEUE_H
