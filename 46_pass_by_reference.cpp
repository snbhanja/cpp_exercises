/*Goal: Learn to pass variables by reference. 
**Once we learn this, we can modify variables in functions,
**and the change will be available outside the scope of the 
**modification.
*/

#include<iostream>

void increment(int &input); //Note the addition of '&'

int main()
{
    int a = 34;
    std::cout<<"Before the function call a = "<<a<<"\n";
    increment(a);
    std::cout<<"After the function call a = "<<a<<"\n";
    return 0;
}
void increment(int &input)//Note the addition of '&'
{
    input++; //**Note the LACK OF THE addition of '&'**
    std::cout<<"In the function call a = "<<input<<"\n";
}

/*
Before the function call a = 34
In the function call a = 35
After the function call a = 35
*/
