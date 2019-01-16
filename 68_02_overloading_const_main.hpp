/*Goal: create a class that has two 
*constructors; one that accepts
*input parameters and one that does
*not. 
*/

/*
In this quiz, you are to create a class that has four constructors:

* one that accepts no input parameters
* one that accepts a string name
* one that accepts an int license number
* one that accepts a string name and an int license number
The default values are:

* name = NA
* license = 0
*/

#include "main.hpp"

int main()
{
    Dog d1;
    Dog d2("Kali");
    Dog d3(12345);
    Dog d4("Sammy", 65432);
    
    cout<<d1.getName()<<" "<<d1.getLicense()<<"\n";
    cout<<d2.getName()<<" "<<d2.getLicense()<<"\n";
    cout<<d3.getName()<<" "<<d3.getLicense()<<"\n";
    cout<<d4.getName()<<" "<<d4.getLicense()<<"\n";
    return 0;
}

/*
NA 0
Kali 0
NA 12345
Sammy 65432
*/
