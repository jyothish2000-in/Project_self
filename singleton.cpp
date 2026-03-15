#include <iostream>

class Singleton
{
    int data;
    Singleton(){
        std::cout<<"constructor called"<<std::endl;
    }
    static Singleton* instance;
    public:
    static Singleton* getInstance()
    {
        if(instance == nullptr){
            instance = new Singleton();
        }
        return instance;
    }
    void setData(int val){
        data = val;
    }
    void showData(){
        std::cout<<data<<std::endl;
    }
};
Singleton* Singleton::instance =nullptr;

int main()
{
    Singleton* s1 = Singleton::getInstance();

    s1->setData(10);

    Singleton* s2 = Singleton::getInstance();

    s1->showData();
    s2->showData();

    return 0;
}