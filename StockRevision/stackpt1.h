// modified Stack template
#ifndef STCK1_H_
#define STCK1_H_

template <class T>
class Stack
{
    private:
        enum {SIZE = 10}; // default size
        int stacksize;
        T * items; // holds stack items
        int top; // index for top stack item
    public:
        explicit Stack(int ss = SIZE);
        Stack(const Stack & st);
        ~Stack(){ delete [] items;}
        bool isfull(){return top == stacksize;}
        bool push(const T & item); // add
        bool pop(T & item); // pop top into item
        Stack & operator=(const Stack & st);
};

#endif