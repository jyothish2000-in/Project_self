#include <iostream>
class add
{
    int val;
    public:
        friend class help;
        add(int a, int b)
        {
            val = a+b;
        }
};

class help
{
    public:
        void show(add&);
};

int main()
{
    add s1(10,20);
    help s2;
    s2.show(s1);
    return 0;
}

void help::show(add& obj)
{
    std::cout<<"val of class add is : "<<obj.val;
}