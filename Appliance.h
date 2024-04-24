// Tv.h
#ifndef TV_H
#define TV_H


class Tv : public Appliance {
public:
    Tv();
    Tv(int powerRating, double screenSize);

    void setScreenSize(double screenSize);
    double getScreenSize() const;

    double getPowerConsumption() const override; // Correctly overrides the virtual function

private:
    double screenSize; // screen size in inches
};

#endif // TV_H
