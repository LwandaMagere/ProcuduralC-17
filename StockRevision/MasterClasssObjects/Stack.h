#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack 
{
    private:
        enum {MAX = 10};
        Item items[MAX];
        int top; // index for top stack item
    public:
        Stack();
        bool isempty() const;
        bool isfull() const;
        // push() returns false if stack already is full, true otherwise
        bool push(const Item & item); // add item to stack
        // pop() returns false if stack already is empty, true otherwise
        bool pop(Item & item); // pop top into item
};

#endif