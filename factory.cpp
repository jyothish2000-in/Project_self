#include "factory.h"

int main()
{
    shape * s = factory::createShape("rectangle");
    s->draw();
}

shape* factory::createShape(const std::string&s)
{
    std::cout<<s.compare("rectangle");
    if(!s.compare("rectangle")){
        return new rectangle();
    }
    else
        return new circle();
}

void rectangle::draw()
{
    std::cout<<"drawing rectangle";
}

void circle::draw()
{
    std::cout<<"drawing circle";
}