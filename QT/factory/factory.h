//factory.h
#ifndef FACTORY_H
#define FACTORY_H
#include<iostream>
#include<string>
#include<QObject>
#include<QPainter>


class shape : public QObject
{
    Q_OBJECT
public:
    virtual void draw(QPainter&) = 0;
};

class rectangle : public shape
{
public:
    void draw(QPainter&) override;
};

class circle : public shape
{
public:
    void draw(QPainter&) override;
};

class factory
{
public:
    static shape* createShape(const std::string&);
};
#endif // FACTORY_H
