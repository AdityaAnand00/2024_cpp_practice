#ifndef PATIENT_H
#define PATIENT_H

#include <iostream>

class Patient
{
private:
    int patientNumber;
    char *patientName;
    float temp[3];

public:
    // DEFAULT CONSTRUCTOR
    Patient();
    // PARAMETERIZED CONSTRUCTOR
    Patient(const int, const char *, const float[]);

    // COPY CONSTRUCTOR
    Patient(Patient &);

    // DISPLAYING THE AVERAGE TEMPERATURE.
    float calculateAverage();

    // DISPLAYING ALL THE DATA
    void display();

    // OVERLOADING OPERATOR==
    bool operator==(Patient & );

    // OVERLOADING OPERATOR<<
    // friend std::ostream &operator<<(std::ostream &, Patient &);

    // OVERLOADING OPERATOR[]
    char &operator[](int);

    // OVERLOADING OPERATOR<
    bool operator<(Patient &);

    // DESTRUCTOR OF THE CLAS
    ~Patient();

    friend std::ostream &operator<<(std::ostream &os, const Patient &rhs);
};



#endif // PATIENT_H
