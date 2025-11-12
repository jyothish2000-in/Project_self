#include<iostream>
class Addition
{
    public:
        void addition(int,int);
};

int main()
{
    Addition a;
    a.addition(10,5);
}

void Addition::addition(int c,int d)
{
    int e = c + d;
    std::cout<<"your o/p : "<<e;
}