// a stack template
#ifndef Finale_H
#define Finale_H
template <typename D>
class Stack
{
    private:
        enum {MAX = 10}; // constant specific to class
        D items[MAX]; // holds stack items
        int top; // index for top stack item
    public:
        Stack();
        bool isempty();
        bool isfull();
        bool push(const D & item); // add item to stack
        bool pop(D & item); // pop top into item

};

template <class D>
Stack<D>::Stack()
{
    top = 0;
}

template <class D>
bool Stack<D>::isempty()
{
    return top == 0;
}

template <typename D>
bool Stack<D>::isfull()
{
    return top == MAX;
}

template <class D>
bool Stack<D>::push(const D & item)
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else 
        return false;
}

template <class D>
bool Stack<D>::pop(D & item)
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