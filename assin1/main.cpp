#include <iostream>
#include "p1.h"

int main()
{
    // Creating an object
    Electricity e1;
    // Asking user for all the required details
    e1.accept();
    // Displaying the User all the details he has filled
    // e1.Display();
    std::cout << e1 ;
    // cout.operator<<(e1) 
    // Calculating and displaying the Net electricity Bill he has to pay
    std::cout << "Your Estimated Electricity Bill is -> " << e1.calculateElectricityBill() << std::endl;
}
///g++ *.cpp && ./a.out
