#include <iostream>

class stack
{
    int x[5];
    int top;
    public:
        stack(){
            top = -1;
        }
        void push(int);
        void pop();
        int peek();
};

void stack::push(int val)
{
    if(top >= 4)
    {
        std::cout<<"Stack full"<<std::endl;
        return;
    }
    x[++top] = val;
}

void stack::pop()
{
    if(top < 0){
        std::cout<<"stack underflow"<<std::endl;
        return;
    }
    top--;
}

int stack::peek()
{
    if(top < 0){
        std::cout<<"stack empty"<<std::endl;
        return -1;
    }
    return x[top];
}

int main()
{
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    std::cout<<s.peek()<<" ";

    return 0;
}

