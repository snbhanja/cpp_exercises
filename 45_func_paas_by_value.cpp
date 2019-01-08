/*The program is changed to return 
**the modified variable 'a'
**
**P.S. This is a totally silly program. Why write a function, 
**with all the function overhead, to increment a variable?
**Silly!
*/

#include<iostream>

int increment(int input);
int main()
{
    int a = 34;
    std::cout<<"Before the function call a = "<<a<<"\n";
    a = increment(a);
    std::cout<<"After the function call a = "<<a<<"\n";
    return 0;
}
int increment(int input)
{
    input++;
    std::cout<<"In the function call a = "<<input<<"\n";
    return input;
}

/*
Before the function call a = 34
In the function call a = 35
After the function call a = 35
*/
