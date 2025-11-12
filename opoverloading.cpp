#include <iostream>

class Opoverloading
{
    int val1,val2;
    public:
        Opoverloading(int a, int b) : val1(a),val2(b) {}

        Opoverloading operator+ (const Opoverloading&);
        void display();

};

int main()
{
    Opoverloading op1(10,5),op2(10,5);
    Opoverloading op3 = op1 + op2;
    op3.display();
    return 0;
}

Opoverloading Opoverloading::operator+ (const Opoverloading& temp)
{
    return Opoverloading(val1 + temp.val1, val2 + temp.val2);
}

void Opoverloading::display()
{
    std::cout<<"op3 val1:"<<val1<<" op3 val2:"<<val2;
}