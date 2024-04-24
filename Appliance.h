// Appliance.h
#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
public:
    Appliance();
    Appliance(int powerRating);

    void turnOn();
    void turnOff();
    double getPowerConsumption() const;

    bool getIsOn() const;
    void setIsOn(bool isOn);

    virtual double calculateEnergyConsumption() const;

private:
    int powerRating;
    bool isOn;
};

#endif // APPLIANCE_H
