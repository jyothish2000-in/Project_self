#include <iostream>
#include <vector>
class observer{
    public:
    virtual void update(int val) = 0;
    virtual ~observer(){}
};

class sai : public observer{
    void update(int val) override{
        std::cout<<"sai got updated"<<std::endl;
    }
};

class jyothish : public observer{
    void update(int val) override{
        std::cout<<"Jyothish got update"<<std::endl;
    }
};

class publisher{
    std::vector<observer*> vec;
    int price;
    public:
    void addObserver(observer* obj){
        vec.push_back(obj);
    }

    void setval(int val){
        price = val;
        notifyall();
    }

    void notifyall(){
        for(auto obj : vec){
            obj->update(price);
        }
    }
};