#include<iostream>

class shallow
{
    int* data;
    public:
        shallow(int val){
            data =new int(val);
        }
        shallow(const shallow& obj){
            data = obj.data;
        }
        void getVal();
        void setVal(int);
};

int main()
{
    shallow obj1(10);
    shallow obj2 = obj1;
    obj1.setVal(20);
    obj1.getVal();
    return 0;
}

void shallow::getVal()
{
    std::cout <<"val obj2 is = "<<*(data);
}

void shallow::setVal(int val)
{
    *data = val;
}