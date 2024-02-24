#include <iostream>
#include <cstring>
#include "Patient.h"


int main()
{
    
    float temp[3] = {98.3f , 87.5f ,45.4f} ; 
    char* name = new char[50]; 
    std::cout << "Enter Patient Name" ;
    std:: cin >> name ; 
    
    // creating a object 
    //-> parameterized constr 
    //-> display()
    //calculate average()
    Patient p1(2 , name ,temp) ; 
    p1.display() ; 
    std::cout<< p1.calculateAverage() <<std::endl;
    std::cout<<std::endl;

    // // checkign DEEP COPY CONStRUCTOR 
    Patient p2(p1) ; 
    p2.display() ; 

    std::cout << p1 << p2 ;
    //  cout << p2 

    // CHECKING OPERATOR==
    char* name2 = new char[50]; 
    strcpy(name, "John") ; 
    float temp2[3] = {90.3f , 78.5f ,30.5f} ; 
    Patient p3(3 , name2 ,temp2) ; 
    std::cout<< p3.calculateAverage() <<std::endl;
    std::cout<<std::endl;
    bool isEqual = (p2  == p3) ; 
    if(isEqual)
    {
        std::cout<< "Names of both objects are same"<< std::endl ;
    }else{
        std::cout<<"Names of both objects are NOT same" << std::endl ;
    }

    // CHECKING OPERATOR[]
     std::cout<<p1[0] << std::endl ; 
     std::cout<<"Before ->" << p1[1] <<  std::endl ; 
     p1[1] = 'z' ;  
     std::cout<<"After ->" << p1[1] <<  std::endl ; 

     // CHECKING OPERATOR<< 
    std::cout << p1 << std::endl ; 

    // CHECKING OF OPERATOR<
    
    if(p1 < p3)
    {
        std::cout << "Average temp of p1 is less  than p3" << std::endl ;  
    }else{
        std::cout << "Average temp of p1 is greater than or equal to p3" << std::endl ;  
    }
}