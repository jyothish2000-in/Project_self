#include "multithreadding.h"

int main()
{
    thread* t = new thread();
    std::thread t1(&thread::evenNumbers,t,10);
    std::thread t2(&thread::oddNumbers,t,10);

    t1.join();
    t2.join();

    t->getTheVal();

    return 0;
}

void thread::evenNumbers(int n)
{
    for(int num =1;num<=n;num++){
        if(num%2 == 0){
            m.lock();
            std::cout<<"even number: "<<num<<std::endl;
            m.unlock();
            sumOfEvenNum += num;
        }
    }
}

void thread::oddNumbers(int n)
{
    for(int num=1;num <= n;num++){
        if(num%2!=0){
            m.lock();
            std::cout<<"odd numbers: "<<num<<std::endl;
            m.unlock();
            sumOfOddNum+= num;
        }
    }
}

void thread::getTheVal()
{
    std::cout<<"Sum of even numbers : "<<sumOfEvenNum<<std::endl<<"sum of odd numbers : "<<sumOfOddNum<<std::endl;

}