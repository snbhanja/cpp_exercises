/*Goal: understand the switch statement in C++
**This example does not use a break statement between 
**the possibilities, which means all menu items below the selected
**one are executed. 
*/


#include<iostream>

int main()
{
    char menuItem;
    std::cout<<"Choose your holiday package:\n";
    std::cout<<"L: luxury package\nS: standard package\n";
    std::cout<<"B: basic package ";
    
    std::cin>>menuItem;
    std::cout<<menuItem<<"\n";
        std::cout<<"The "<<menuItem<<" package includes:\n";
    
    switch(menuItem)
    {
        case 'L': 
        {
            std::cout<<"\tSpa Day\n";
            std::cout<<"\tSailboat Tour\n";
        }
        case 'S':
        {
            std::cout<<"\tCity Tour\n";
            std::cout<<"\tComplimentary Happy Hour\n";  
        }
        case 'B':
        {
            std::cout<<"\tAirport Transfers\n";
            std::cout<<"\tComplimentary Breakfast\n"; 
            break;
        }
        default:
            std::cout<<"Please select the L,S,B package.\n";
    }
    return 0;
}

/*If you select L
Choose your holiday package:
L: luxury package
S: standard package
B: basic package L
The L package includes:
	Spa Day
	Sailboat Tour
	City Tour
	Complimentary Happy Hour
	Airport Transfers
	Complimentary Breakfast
*/
