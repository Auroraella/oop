// Appliance.h
#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
public:
    Appliance();
    Appliance(int powerRating);

    void setPowerRating(int powerRating);
    int getPowerRating() const;

    void turnOn();
    void turnOff();
    bool isPoweredOn() const; // Rename isOn() to isPoweredOn()

    virtual double getPowerConsumption() const;

private:
    int powerRating;
    bool isOn; // Rename isOn to isPoweredOn
};

#endif // APPLIANCE_H
