#ifndef QUEUETP_H_
#define QUEUETP_H_

template <typename T>
class QueueTp
{
private:
    static const int LEN = 10;
    T *head;
    T *tail;
    T *data;

public:
    QueueTp(int len = LEN)
    {
        data = new T[len];
        head = tail = data;
    }
    ~QueueTp() { delete[] data; }
    bool enQueue(const T &item);
    bool deQueue(T &item);
    T newQueue() const { return *(tail - 1); }
    bool isFull() const { return tail == data + sizeof(data); }
    bool isEmpty() const { return tail == head; }
};

template <typename T>
bool QueueTp<T>::enQueue(const T &item)
{
    if (isFull())
        return false;
    *tail = item;
    tail++;
    return true;
}

template <typename T>
bool QueueTp<T>::deQueue(T &item)
{
    if (isFull())
        return false;
    item = *head;
    head++;
    return true;
}

#endif // !QUEUETP_H_
