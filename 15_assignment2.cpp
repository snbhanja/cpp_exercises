/*
Exercise from lesson 2. "Compilation and Execution"
*/

#include <iostream>
#include <stdio.h>

int main()
{
    int userInput = 0;
    int maxNumber = 0;
    int minNumber = 100;
    int sumTotal = 0;
    float average = 0;
    
    //get the numbers from the user
    for(int i = 0; i < 15; i++)
    {
        std::cout << "Enter a number: ";
        scanf("%d", &userInput);
        std::cout << userInput << "\n";
        
        if(userInput > maxNumber)
        {//the biggest number entered so far is the max number
            maxNumber = userInput;
        }
        if(userInput < minNumber)
        {//the lowest number entered so far is the min number
            minNumber = userInput;
        }
        sumTotal = sumTotal + userInput;
    }
    std::cout << "Maximum number = " << maxNumber << "\n";
    std::cout << "Minimum number = " << minNumber << "\n";
    average = sumTotal / 15;
    std::cout << "Average = " << average << "\n";
    return 0;
}

/*The output as below,
Enter a number: 123
Enter a number: 2
Enter a number: 34
Enter a number: 6
Enter a number: 57
Enter a number: 9
Enter a number: 876
Enter a number: 90
Enter a number: 11
Enter a number: 23
Enter a number: 876
Enter a number: 4
Enter a number: 13
Enter a number: 87
Enter a number: 66
Maximum number = 876
Minimum number = 2
Average = 151
*/
