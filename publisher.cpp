#include "observer.h"


int main(){
    publisher p;

    p.setval(10);

    sai s;
    jyothish j;

    p.addObserver(&s);
    p.addObserver(&j);

    p.setval(10);

}