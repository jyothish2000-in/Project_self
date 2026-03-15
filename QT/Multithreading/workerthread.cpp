
#include "workerthread.h"
#include <QThread>


workerThread::workerThread(int n) : num(n){}

void workerThread::evenNumber()
{

    for(int i=1;i<=num;i++){
        if(i%2 == 0){
            emit number(QString("Even number %1").arg(i));
            QThread::sleep(1);
        }
    }

}

void workerThread::oddNumber()
{

    for(int i=1;i<=num;i++){
        if(i%2!=0){
            emit number(QString("Odd numbers %1").arg(i));
            QThread::sleep(1);
        }
    }

}

