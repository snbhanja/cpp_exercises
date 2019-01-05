/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/

#include <iostream>

int main()
{
    float input;
    float sum = 0;

    for(int i=0;i<5;i++)
    {
        std::cout<<"What is the next number?\n";
        std::cin>>input;
        sum = sum + input;
    }//end of for loop

    std::cout<<"Sum = "<<sum<<"\n";
    std::cout<<"Average = "<<sum/5<<"\n";
    return 0;
}


/*
What is the next number?
6
What is the next number?
97
What is the next number?
8
What is the next number?
8
What is the next number?
9
Sum = 128
Average = 25.6
*/
