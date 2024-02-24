#include <iostream>
#include "p1.h"

// Asking user to fill all the details
void Electricity ::accept()
{
    long pre_read;
    std::cout << "Enter your Previous Reading -> " << std::endl;
    std::cin >> pre_read;
    setPreviousReading(pre_read);

    long present_read;
    std::cout << "Enter your Present Reading -> " << std::endl;
    std::cin >> present_read;
    setPresentReading(present_read);

    long cons;
    std::cout << "Enter your Consumption -> " << std::endl;
    std::cin >> cons;
    setConsumption(cons);

    int eslab;
    std::cout << "Enter your Electricity Slab -> " << std::endl;
    std::cin >> eslab;
    setElectricitySlab(eslab);

    int sload;
    std::cout << "Enter your Sanction Load -> " << std::endl;
    std::cin >> sload;
    setSanctionLoad(sload);
}

// Displays all the details entered by the user
// void Electricity::Display()
// {
//     std::cout << "You Enterede Previous Reading as -> " << this->previousReading << std::endl;
//     std::cout << "You Enterede Present Reading as -> " << this->presentReading << std::endl;
//     std::cout << "You Enterede Consumption as  -> " << this->consumption << std::endl;
//     std::cout << "You Enterede Sanction Load as  -> " << this->sanctionLoad << std::endl;
//     std::cout << "You Enterede Electricity Slab as -> " << this->electricitySlab << std::endl;
// }

// Calculating Electricity Bill
long Electricity::calculateElectricityBill()
{
    if (this->presentReading < previousReading)
        return 0;
    else
        return ((this->sanctionLoad * this->electricitySlab) + ((this->consumption * this->electricitySlab) / 100));
}
