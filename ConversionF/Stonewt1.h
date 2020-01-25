// revised definition for the Stonewt class
#ifndef STONE_H_
#define STONE_H_
class Stonewt
{
    private:
        enum {Lbs_per_stn = 14};
        int stone;
        double pds_left;
        double pound;
    public:
        Stonewt(double lbs); // construct from double pounds
        Stonewt(int stn, double lbs); // construct from double pounds
        Stonewt();
        ~Stonewt();
        void show_lbs() const; // show weight in pounds format
        void show_stn() const; // show weight in stone format
    
    // converstion functions
        operator int () const;
        operator double () const;
};

#endif