// structure templates and function prototypes
#ifndef COOO
#define COOO

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

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif