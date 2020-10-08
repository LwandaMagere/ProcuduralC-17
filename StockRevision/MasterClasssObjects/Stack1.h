// class definition for the stack ADT
#ifndef STACK3_H_
#define STACK3_H_

typedef unsigned long Item;

class Stack
{
    private:
        enum {MAX =  10}; // constant specific to class
        Item items[MAX]; // holds stack items
        int top;
    public:
        Stack();
        bool isempty() const;
        bool isfull() const;
        // push() returns false if stack already is full, true or otherwise
        bool push(const Item & item); // add item to stack
        // pop() returns false if stack already is empty, true otherwise
        bool pop(Item & item); // pop top into item
};

#endif