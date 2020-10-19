// revised definition for the Stonewt class

#ifndef STON_H_
#define STON_H_
class Stonewt
{
    private:
        enum {Lbs_per_stn = 14}; // pounds per stone
        int stone; // whole stone
        double pds_left; // fractional pounds
        double pounds; // entire weight in pounds
    public:
        Stonewt(double lbs); // construct from double pounds
        Stonewt(int stn, double lbs); 
        Stonewt();
        ~Stonewt();
        void show_lbs() const;
        void show_stn() const;

        // conversion functions
        operator int()const;
        operator double() const;

};

#endif