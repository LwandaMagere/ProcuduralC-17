// function with pointer to structure arguments
#include <iostream>
#include <cmath>

// structure template
struct polar 
{
    double distance; // distance from origin
    double angle; // direction from origin
};

struct rect 
{
    double x; // horizontal distance from origin
    double y; // verticle distance from origin
};

void rect_to_polar(const rect * pxy, polar * pda);
void show_polar(const polar * pda);

int main()
{
    using namespace std;
    rect rplace;
    polar pplace;

    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y)
    {
        rect_to_polar(&rplace, &pplace); // pass addresses
        show_polar(&pplace);  // pass address
        cout << "Next two numbers (q to quit):";
    }
    cout << "Done" << endl;
    return 0;

}

// show polar coordinates, converting angle to degree
void show_polar(const polar * pda)
{
    using namespace std;
    const double Rad_to_deg = 57.29577951;
    
    cout << "distance = " << pda->distance;
    cout << ", angle = " << pda->angle * Rad_to_deg;
    cout << " degrees" << endl;
}

// convert rectangular to polar coordinates
void rect_to_polar(const rect * pxy, polar * pda)
{
    using namespace std;
    pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle = atan2(pxy->y, pxy->x);
}