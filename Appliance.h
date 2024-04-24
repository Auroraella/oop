// Appliance.h
#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
public:
    Appliance();
    Appliance(int powerRating);

    virtual ~Appliance(); // Virtual destructor

    int getPowerRating() const; // Corrected function name
    void setPowerRating(int powerRating); // Corrected function name

    bool getIsOn() const;
    void setIsOn(bool isOn);

    virtual double calculateEnergyConsumption() const;

private:
    int powerRating;
    bool isOn;
};

#endif // APPLIANCE_H
