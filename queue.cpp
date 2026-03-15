#include <iostream>

class node
{
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

    public:
        queue()
        {
            front = rear = nullptr;
        }

        void enqueue(int);
        void dequeue();
        void display();
};

void queue::enqueue(int data)
{
    node* newnode = new node(data);

    if(rear == nullptr && front == nullptr){
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

    if(front == nullptr)
        return;
    
    front = front->next;
    delete temp;
}

void queue::display()
{
    while(front){
        std::cout<<front->data<<" ";
        front = front->next;
    }
}

int main()
{
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.dequeue();
    q.dequeue();
    
    q.display();

    return 0;
}