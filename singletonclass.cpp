#include<iostream>

class Singleton
{
    static Singleton* instance;
    Singleton(){
        std::cout<<"constructor called";
    }

    public:
        static Singleton* getInstance();
        void show();
};

Singleton* Singleton::getInstance()
{
    if(instance == nullptr)
    {
        instance = new Singleton();
    }
    return instance;
}
void Singleton::show()
{
    std::cout<<"\nshow called";
}
Singleton* Singleton::instance = nullptr;
int main()
{
    Singleton* s1 = Singleton::getInstance();
    s1->show();
    return 0;
}