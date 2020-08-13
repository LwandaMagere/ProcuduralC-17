// simple base-class methods
#include "tabtenn0.h"
#include <iostream>

TabTennisPlayer::TabTennisPlayer(const string & fn, const string & ln, bool ht) : firstname(fn), lastname(ln), hasTable(ht){}
void TabTennisPlayer::Name() const
{
    std::cout << lastname << ", " << firstname;
}