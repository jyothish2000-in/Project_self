#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
class condition_var
{
    public:
        bool ready;
        std::mutex m;
        std::condition_variable cv;
        condition_var(){}

        void consumer();
        void producer();
};

void condition_var::consumer(){
    std::unique_lock<std::mutex> lock(m);
    std::cout<<"consumer waiting"<<std::endl;
    cv.wait(lock,[this]{return ready;});
    std::cout<<"consumer signal received"<<std::endl;
}

void condition_var::producer(){
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::lock_guard<std::mutex> lock(m);
    ready = true;

    std::cout<<"producer notifying"<<std::endl;
    cv.notify_one();
}

int main(){
    condition_var obj;
    obj.ready = false;

    std::thread t1(&condition_var::consumer,&obj);
    std::thread t2(&condition_var::producer,&obj);

    t1.join();
    t2.join();

    return 0;
}