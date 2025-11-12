#include <iostream>

class Methodoverridebase
{
    public:
        virtual void show();
};

class Derieved : public Methodoverridebase
{
    public:
        void show() override;
};

int main()
{
    Methodoverridebase* ptr;
    Derieved d;
    ptr = &d;

    ptr->show();
}

void Methodoverridebase::show()
{
    std::cout<<"Base class show method";
}

void Derieved::show()
{
    std::cout<<"Derieved class show method";
}