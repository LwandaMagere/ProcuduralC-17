// definition for the Stonewt class
#ifndef STONEWT
#define STONEWT

class Stonewt
{
    private:
        enum {Lbs_per_stn = 14};
        int stone;
        double pds_left;
        double pounds;
    public:
        Stonewt(double lbs);
        Stonewt(int stn, double lbs);
        Stonewt();
        ~Stonewt();
        void show_lbs() const;
        void show_stn() const;
        // conversion function
        operator int() const;
        operator double() const;
};

#endif