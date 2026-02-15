#include<iostream>
#include<string.h>
class shape
{
    public:
        virtual void draw() = 0;
};

class rectangle : public shape
{
    public:
        void draw() override;
};

class circle : public shape
{
    public:
        void draw() override;
};

class factory
{
    public:
        static shape* createShape(const std::string&);
};