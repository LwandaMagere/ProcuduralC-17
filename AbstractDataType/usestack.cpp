// testing the Stack class

#include <iostream>
#include <cctype>
#include "stock.h"

int main()
{
    using namespace std;
    Stack st; // create an empty stack
    char ch;
    unsigned long po;
    cout << "Please enter A to add a purchase order,\n"
        << "P to process a PO, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\n';
            continue;
        }
        switch(ch)
        {
            case 'A':
            case 'a':cout << "Enter a PO number to add: ";
                     cin >> po;
                     if (st.isfull())
                        cout << "Stack already full" << endl;
                     else 
                        st.push(po);
                    break;
            case 'P':
            case 'p': if (st.isempty())
                        cout << "stack already empty" << endl;
                      else{
                          st.pop(po);
                          cout << "PO #" << po << " popped" << endl;
                      }
                      break;
            
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye" << endl;
    return 0;
}