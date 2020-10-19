// a table-tennis base class
#ifndef TABTENN0_H_
#define TABTENN0_H_
#include <string>

using std::string;
//simple base class
class TableTennisPlayer
{
    private:
        string firstname;
        string lastname;
        bool hasTable;
    public:
        TableTennisPlayer(const string & fn = "none", const string & ln = "none", bool ht = fale);
        void Name() const;
        bool HasTable() const {return hasTable;}
};
#endif  