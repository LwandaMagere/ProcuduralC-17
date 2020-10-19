// modified Stack template
#ifndef Modified
#define Modified

template <class D>
class Stack 
{
    private:
        enum {SIZE = 10}; // default size
        int stacksize;
        S * items; // holds stack items
        int top; // index for stack item
    public:
        explicit Stack(int ss = SIZE);
        Stack(const Stack & st);
        ~Stack(){delete [] items; }
        bool isempty(){ return top == 0; }
        bool isfull(){ return top == stacksize;}
        bool push(const D & item); // add item to stack
        bool pop(D & item); // pop top into item
        Stack & operator=(const Stack & st);
};

template <class D>
Stack<D>::Stack(int ss) : stacksize(ss), top(0)
{
    items = new D [stacksize];
}

template <class D>
Stack<D>::Stack(const Stack & st)
{
    stacksize = st.stacksize;
    top = st.top;
    items = new D [stacksize];
    for (int i = 0; i < top; i++)
        items[i] = st.items[i];
}

template <class D>
bool Stack<D>::push(const D & item)
{
    if (top < stacksize)
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

template<class D>
Stack<D> & Stack<D>::operator=(const Stack<D> & st)
{
    if (this == &st)
        return *this;
    delete [] items;
    stacksize = st.stacksize;
    top = st.top;
    items = new D [stacksize];
    for (int i = 0; i < top; i++)
        items[i] = st.items[i];
    return *this;
}
#endif