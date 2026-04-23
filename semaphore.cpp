#include<iostream>
#include<thread>
#include<semaphore>
void task(int);

std::counting_semaphore<3> sem(3);
int main(){
    std::thread t1(task,1);
    std::thread t2(task,2);
    std::thread t3(task,3);
    std::thread t4(task,4);
    std::thread t5(task,5);
    std::thread t6(task,6);

    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();
    t6.join();


    return 0;
}


void task(int id){
    sem.acquire();

      std::cout << "Thread " << id << " entered critical section\n";

    std::this_thread::sleep_for(std::chrono::seconds(2));

    std::cout << "Thread " << id << " leaving\n";

    sem.release();
}