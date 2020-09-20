// a stack template
#ifndef STACK_H_
#define STACK_H_

template <typename T>
class Stack 
{
    private:
        enum {MAX = 10}; // constant specific to class
        T items[MAX]; // hold stack items
        int top;   // index for top stack item
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

template <typename T>
bool Stack<T>::isfull()
{
    return top == MAX;
}

template <class T>
bool Stack<T>::push(const T & item)
{
    if (top < MAX)
    {
        items[top++] = item; ///
        return true;
    }
    else 
        return false;
}

template <typename T>
bool Stack<T>::pop(T & item)
{
    if (top > 0)
    {
        item = items[--top];///
        return true;
    }
    else 
        return false;
}
#endif