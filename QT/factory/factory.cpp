//factory.cpp
#include "factory.h"
#include <Qpainter>


shape* factory::createShape(const std::string&s)
{

    if(!s.compare("rectangle")){
        return new rectangle();
    }
    else
        return new circle();
}

void rectangle::draw(QPainter& paint)
{
    paint.drawRect(50,50,150,100);
}

void circle::draw(QPainter& paint)
{
    paint.drawEllipse(50,50,150,150);
}
