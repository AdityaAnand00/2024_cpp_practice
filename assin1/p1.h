#ifndef P1_H
#define P1_H

#include <iostream>

class Electricity
{
private:
    int sanctionLoad;
    int electricitySlab;
    long presentReading;
    long previousReading;
    long consumption;

public:
    // Default Constructor
    Electricity() : sanctionLoad(0), electricitySlab(0), presentReading(0), previousReading(0), consumption(0) {}

    // Getters and Setters for sanctionLoad
    int getSanctionLoad() const { return sanctionLoad; }
    void setSanctionLoad(int sanctionLoad_) { sanctionLoad = sanctionLoad_; }

    // Getters and Setters for electricitySlab
    int getElectricitySlab() const { return electricitySlab; }
    void setElectricitySlab(int electricitySlab_) { electricitySlab = electricitySlab_; }

    // Getters and Setters for presentReading
    long getPresentReading() const { return presentReading; }
    void setPresentReading(long presentReading_) { presentReading = presentReading_; }

    // Getters and Setters for previousReading
    long getPreviousReading() const { return previousReading; }
    void setPreviousReading(long previousReading_) { previousReading = previousReading_; }

    // Getters and Setters for Consumption
    long getConsumption() const { return consumption; }
    void setConsumption(long consumption_) { consumption = consumption_; }

    // Function for accepting details from user
    void accept();

    // Function to Calculate Electricity Bill
    long calculateElectricityBill();

    // Function to Display all the Electricity Bill Details :
    // void Display();

     operator<<()
   

};

#endif // P1_H
