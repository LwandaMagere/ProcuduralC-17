// stacktem.cpp -- testing the template stack class
#include <iostream>
#include <string>
#include <cctype>
#include "template.h"
using std::cin;
using std::cout;
using std::string;
using std::toupper;
using std::isalpha;
int main()
{
    Stack<string> st;
    char ch;
    string po;
    cout << "Please enter A to add a purchase order,\n"
         << "P to process a PO, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!std::isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
            case 'A':
            case 'a': cout << "Enter a PO number to add: ";
                      cin >> po;
                      if (st.isfull())
                      cout << "stack already full\n";
                      else
                      st.push(po);
                      break;
            case 'P':
            case 'p': if (st.isempty())
                        cout << "stack already empty\n";
                      else {
                            st.pop(po);
                            cout << "PO #" << po << " popped\n";
                            break;
                           }
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";

    return 0;
}