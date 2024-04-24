// Tv.h
#ifndef TV_H
#define TV_H

#include "Appliance.h"

class Tv : public Appliance {
public:
    Tv();
    Tv(int powerRating, double screenSize);

    void setScreenSize(double screenSize);
    double getScreenSize() const;

    double getPowerConsumption() const override;

private:
    double screenSize; // screen size in inches
};

#endif // TV_H
