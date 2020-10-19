// a stack template
#ifndef Stack_h
#define Stack_h

template <class T>
class Stack 
{
    private:
        enum {MAX = 10};
        T items[MAX]; // hold stack item
        int top; // index for top stack item
    public:
        Stack();
        bool isempty();
        bool isfull();
        bool push(const T & item); // add item to stack
        bool pop(T & item); // pop top into item

};

template <class T>
Stack<T>::Stack()
{
    top = 0;
}

template <class T>
bool Stack<T>::isempty()
{
    return top == 0;
}

template <class T>
bool Stack<T>::isfull()
{
    return top == MAX;
}

template <class T>
bool Stack<T>::push(const T & item)
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else 
        return false;
}

template <class T>
bool Stack<T>::pop(T & item)
{
    if (top > 0)
    {
        item = items[--top];
        return true;
    }
    else 
        return false;
}
#endif