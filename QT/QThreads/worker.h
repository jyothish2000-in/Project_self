#ifndef WORKER_H
#define WORKER_H
#include <QObject>
#include <QThread>

class worker: public QObject
{
    Q_OBJECT
public:
    worker();
public slots:
    void doWork();

signals:
    void progress(int);
    void finished();


};

#endif // WORKER_H
