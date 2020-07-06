//definit your own function
#include <iostream>

void Oduor(int);  // function prototype for Oduor

int main()
{
    using namespace std;
    
    Oduor(3); // call the Oduor function
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    Oduor(count); // call it again
    cout << "Done!" << endl;
    return 0;
}

void Oduor(int n) // defining the Oduor function
{
    using namespace std;
    cout << "Oduor says touch your toes " << n << " times." << endl;
}