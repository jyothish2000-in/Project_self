#include <iostream>

class node
{
    public:
        int data;
        node* next;

    node(int val) : data(val)
    {
        next = nullptr;
    } 
};

class circularlist
{
    node* head;

    public:
        circularlist()
        {
            head = nullptr;
        }
        void insertnode(int);
        void insertNodeAt(int,int);
        void displayNodesForward();
        void displayBackward(node*);
        node* getNode(){
            return head;
        }
};

void circularlist::insertnode(int data)
{
    node* newnode = new node(data);

    if(!head){
        head = newnode;
        newnode->next = head;
    }
    else{
        node* temp = head;
        while(temp->next!= head){
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = head;
    }
}

void circularlist::insertNodeAt(int data1 , int data2)
{
    node* newnode = new node(data2);

    if(!head)
    {
        return;
    }
    else
    {
        node* temp = head;
        do{
            if(temp->data == data1){
                break;
            }
            temp = temp->next;
        }while(temp!= head);
        if(temp == head)
        {
            newnode->next = temp->next;
            temp->next = newnode;
            head = newnode;
        }
        else{
            newnode->next = temp->next;
            temp->next = newnode;
        }
    }
}

void circularlist::displayNodesForward()
{
    node*temp = head;

    do{
        std::cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp!=head);
}

void circularlist::displayBackward(node* temp)
{

    if(temp->next == head){
        std::cout<<temp->data<<" ";
        return;
    }
    displayBackward(temp->next);

    std::cout<<temp->data<<" ";
}

int main()
{
    circularlist circle;

    circle.insertnode(10);
    circle.insertnode(20);
    circle.insertnode(30);
    circle.insertnode(40);
    circle.insertnode(50);

    circle.insertNodeAt(20,88);
    circle.insertNodeAt(10,99);
    circle.displayNodesForward();
    std::cout<<std::endl;
    circle.displayBackward(circle.getNode());
    return 0;
}

