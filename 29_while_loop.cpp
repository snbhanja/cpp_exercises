/*Goal: understand the syntax of while loops*/

#include <iostream>

int main()
{
    int entry = 0;
    
    //with this while loop the condition is true
    //so the statements are executed
    while(entry <=5)
    {
        std::cout<<"incrementing entry = "<<entry<<"\n";
        entry++;
    }
    
    //with this while loop the condition is false
    //so the statements are not executed
    while(entry < 5)
    {
        std::cout<<"decrementing entry = "<<entry<<"\n";
        entry--;
    }
        
    return 0;
}

/*
incrementing entry = 0
incrementing entry = 1
incrementing entry = 2
incrementing entry = 3
incrementing entry = 4
incrementing entry = 5
*/
