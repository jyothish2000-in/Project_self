#include<iostream>
#include<thread>
void printfunc();

int main()
{
    std::thread t1;
    t1 = std::thread(printfunc);
    t1.join();
    return 0;
}

void printfunc()
{
    std::cout<<"Thread running";
}