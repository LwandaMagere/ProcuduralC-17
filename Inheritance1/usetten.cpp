// using a base class
#include "tabtenn0.h"

int main(void) 
{
    using std::cout;
    TabTennisPlayer player1("Chuck", "Blizzard", true);
    TabTennisPlayer player2("Tara", "Boomdea", false);
    player1.Name();
    if (player1.HasTable())
        cout << ": has a table." << std::endl;
    else 
        cout << ": hasn't a table.\n";
    player2.Name();
    if (player2.HasTable())
        cout << ": has a table";
    else 
        cout << ": hasn't a table." << std::endl;
    
    return 0;
}