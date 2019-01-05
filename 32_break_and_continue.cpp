/*Goal: understand the break and conitnue statements*/

#include<iostream>


int main()
{
    int a = 0;
    while(a < 5)
    {
        std::cout<<"a = "<<a<<"\n";       
        a++;
        if(a == 3)
            break;
    }
    std::cout<<"The first statement after the first while loop\n\n";
    
    
    while(a < 15)
    {
        a++;
        if(a == 10)
        {
            std::cout<<"\tWhen a=10, go back to the top of the loop";
            std::cout<<"\n\tThis means a=10 is skipped.\n";
            continue;
        }
        std::cout<<"After continue a = "<<a<<"\n";           
    }
    return 0;
}

/*
a = 0
a = 1
a = 2
The first statement after the first while loop

After continue a = 4
After continue a = 5
After continue a = 6
After continue a = 7
After continue a = 8
After continue a = 9
	When a=10, go back to the top of the loop
	This means a=10 is skipped.
After continue a = 11
After continue a = 12
After continue a = 13
After continue a = 14
After continue a = 15

*/
