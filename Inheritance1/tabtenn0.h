// a table tennis base class
#ifndef TABTENNIS_H_
#define TABTENNIS_H_
#include <string>
#include <iostream>
using std::string;
// simple base class
class TabTennisPlayer
{
    private:
        string firstname;
        string lastname;
        bool hasTable;
    public:
        TabTennisPlayer(const string & fn = "none", const string & ln = "none", bool ht = false);
        void Name() const;
        bool HasTable()const {return hasTable;}
        void ResetTable(bool v){ hasTable = v;}

};

#endif