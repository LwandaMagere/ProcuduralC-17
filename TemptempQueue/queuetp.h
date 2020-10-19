// queuetp.h -- queue template with a nested class
#ifndef QUEUETP_H_
#define QUEUETP_H_

template <class Item>
class QueueTP 
{
    private:
        class Node 
        {
            public:
                Item item;
                Node * next;
                Node(const Item * i): item(i), next(0){}

        };
        Node * front;
        Node * rear;
        int items;
        const int qsize;
        QueueTP(const QueueTP & q) : qsize(0){}
        QueueTP & QueueTP::operator=(const QueueTP & q){return *this;}
    public:
        QueueTP(int qs = Q_SIZE);
        ~QueueTP();
        bool isempty()const {return items == 0;}
        bool isfull() const {return items == qsize;}
        int queuecount()const {return items;}
        bool enqueue(const Item &item);
        bool dequeue(Item &item);

};

// QueueTP methods
template <class Item>
QueueTP<Item>::QueueTP(int qs) : qsize(qs)
{
    front = rear = 0;
    items = 0;
}

template <class Item>
QueueTP<Item>::~QueueTP()
{
    Node * temp;
    while (front != 0)
    {
        temp = front; // save address of front item
        front = front->next; // reset pointer to next item
        delete temp; // delete former front
    }
}

// Add item to queue
template <class Item>
bool QueueTP<Item>::enqueue(const Item & item)
{
    if (isfull())
        return false;
    Node * add = new Node(item); // create a node
    // on failure, new thros std::bad_alloc exception
    items++;
    if (front == 0)
        front = add; // place item at front
    else 
        rear->next =  add; // else place at rear
    rear = add; // have rear point to a new node
}

// Place front item into item variable and remove from queue
template <class Item>
bool QueueTP<Item>::dequeue(Item & item)
{
    if (front == 0)
        return false;
    item = front->item; // set item to first item in queue
    items--;
    Node * temp =  front; // save location of first item
    front = front->next; // reset front to next item
    delete temp;
    if (items == 0)
        rear = 0;
    return true;

}
#endif
