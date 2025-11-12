#include<iostream>

class deep
{
    int* data;
    public:
        deep(int val){
            data = new int(val);
        }
        deep(const deep& obj){
            data = new int(*obj.data);
        }
        void getVal();
        void setVal(int);
};

int main()
{
    deep obj1(120);
    deep obj2 = obj1;

    obj2.setVal(220);
    obj2.getVal();

}

void deep::getVal()
{
    std::cout<<"obj val is "<<*data;
}
void deep::setVal(int val)
{
    *data = val;
}