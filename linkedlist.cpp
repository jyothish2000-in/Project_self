#include <iostream>

class node
{
    public:
        int data;
        node* next;

        node(int val) : data(val){
            next = nullptr;
        }


};

class linkedlist
{
    node* head;

    public:
        linkedlist()
        {
            head = nullptr;
        }

        void insertnode(int data);
        void deleteNodeAt(int data);
        void insertnodeat(int data, int data1);
        void displayForward();
        void displayBackward(node* temphead);
        node* getHead()
        {
            return head;
        }
};

void linkedlist::insertnode(int data)
{
    node* newnode = new node(data);

    if(head == nullptr)
    {
        head = newnode;
    }
    else{
        node*temp = head;
        
        while(temp->next)
            temp = temp->next;
        temp->next = newnode;   
    }
}

void linkedlist::deleteNodeAt(int data)
{
    node* temp = head;
    node* prev = nullptr;

    if(head == nullptr)
        return;
    else{
        while(temp){
            if(temp->data == data){
                prev->next = temp->next;
                break;
            }
            prev = temp;
            temp = temp->next;
        }
        delete temp;
    }
}

void linkedlist::insertnodeat(int data, int data1)
{
    node* temp = head;

    node* newnode = new node(data1);

    while (temp)
    {
        if(temp->data == data){
            newnode->next = temp->next;
            temp->next = newnode;
        }
        temp= temp->next;
    }
}

void linkedlist::displayForward()
{
    node*temp = head;

    while(temp)
    {
        std::cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void linkedlist::displayBackward(node* temphead)
{
    if(temphead == nullptr)
        return;

    displayBackward(temphead->next);

    std::cout<<temphead->data<<" ";   
}

int main()
{
    linkedlist list;

    list.insertnode(10);
    list.insertnode(20);
    list.insertnode(30);
    list.insertnode(40);
    list.insertnode(50);

    list.insertnodeat(20,99);

    list.displayForward();
    std::cout<<std::endl;
    list.displayBackward(list.getHead());
}