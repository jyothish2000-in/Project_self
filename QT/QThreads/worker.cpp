#include "worker.h"

worker::worker() {}

void worker::doWork(){
    for(int i = 0; i<=5; i++)
    {
        QThread::sleep(1);
        emit progress(i);
    }

    emit finished();
}
