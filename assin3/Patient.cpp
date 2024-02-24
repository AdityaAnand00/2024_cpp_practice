#include <iostream>
#include <cstring>
#include "Patient.h"

// DEFAULT CONSTRUCTOR
Patient::Patient() : patientNumber(1)
{
    std::cout << "D C called" << std::endl;
    patientName = new char[20];
    strcpy(patientName, "new_user");
    for (int i = 0; i < 3; i++)
        temp[i] = 0.0f;
}
// PARAMETERIZED CONSTRUCTOR
Patient::Patient(const int pn, const char *name, const float tem[]) : patientNumber(pn)
{
    std::cout << "P C called !!" << std::endl;
    this->patientName = new char[strlen(name)+1];
    strcpy(patientName, name);
    for (int i = 0; i < 3; i++)
    {
        temp[i] = tem[i];
    }
}

// COPY CONSTRUCTOR
Patient::Patient(Patient &p)
{
    this->patientNumber = p.patientNumber;
    for (int i = 0; i < 3; i++)
        this->temp[i] = p.temp[i];

    this->patientName = new char[20];
    strcpy(this->patientName, p.patientName);
}

// DISPLAYING THE AVERAGE TEMPERATURE.
float Patient::calculateAverage()
{
    float avg = 0;
    for (int i = 0; i < 3; i++)
        avg += this->temp[i];

    avg = avg / 3.0;
    return avg;
}

// DISPLAYING ALL THE DATA
void Patient::display()
{
    std::cout << "Patient Number is -> " << this->patientNumber << std::endl;

    std::cout << "Patient Name is -> " << this->patientName << std::endl;

    for (int i = 0; i < 3; i++)
        std::cout << "Temperature " << i + 1 << " -> " << temp[i] << std::endl;
}

// OVERLOADING OPERATOR==
// a == b -> a.operator==(b)
bool Patient::operator==(Patient &p)
{
    if (strcmp(this->patientName, p.patientName) == 0)
        return true;
    else
        return false;
}

// OVERLOADING OPERATOR<<
// std::ostream& operator<<(std::ostream &obj, Patient &p)
// {
//     obj << "Patient Number is -> " << p.patientNumber << std::endl;

//     obj << "Patient Name is -> " << p.patientName << std::endl;

//     for (int i = 0; i < 3; i++)
//         obj << "Temperature " << i + 1 << " -> " << p.temp[i] << std::endl;

//     return obj;
// }
std::ostream &operator<<(std::ostream &os, const Patient &rhs) {
    os << "patientNumber: " << rhs.patientNumber
       << " patientName: " << rhs.patientName
       << " temp: " << rhs.temp;
    return os;
}

// OVERLOADING OPERATOR[]
char &Patient::operator[](int index)
{
    return patientName[index];
}

// OVERLOADING OPERATOR<
bool Patient::operator<(Patient &p)
{
    if (this->calculateAverage() < p.calculateAverage())
        return true;
    else
        return false;
}

// DESTRUCTOR OF THE CLAS
Patient::~Patient()
{
    std::cout << "Destructor Called" << std::endl;
    delete[] patientName;
}
