// #include <iostream>
// #include <string>

// template <typename T>
// T add (T a, T b)
// {
//     T  c = a + b;
//     return c;
// }

// int main()
// {
//     std::cout<<"Result 1 :"<<add(5,3)<<std::endl;
//     std::cout<<"Result 2 :"<<add(2.5,2.5)<<std::endl;
//     std::cout<<"Result 3 :"<<add(std::string("HI"),std::string("Hello"))<<std::endl;
//     return 0;
// }

#include <iostream>

template <typename T>
class tmplates
{
    T data;
    public:
        tmplates (T val) : data(val){}
        void show();
};

int main()
{
    tmplates<int> t(5);
    t.show();
    tmplates<std::string> tstring("Hello");
    tstring.show();
    return 0;
}
template <typename T>
void tmplates<T>::show()
{
    std::cout<<"Result: "<<data;
}