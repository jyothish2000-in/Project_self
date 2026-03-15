#ifndef WORKERTHREAD_H
#define WORKERTHREAD_H

#include <QObject>

class workerThread : public QObject
{
    Q_OBJECT
public:
    int num;
    workerThread(int n);
    void evenNumber();
    void oddNumber();
signals:
    void number(QString text);

};

#endif // WORKERTHREAD_H
