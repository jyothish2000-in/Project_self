#include <iostream>
#include <thread>
#include <mutex>

class thread
{
    int sumOfEvenNum =0, sumOfOddNum =0;
    std::mutex m;

    public:
        thread(){

        }
        void evenNumbers(int);
        void oddNumbers(int);
        void getTheVal();
};