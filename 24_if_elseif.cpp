/*Goal: learn if-else statements in C++
**The user guess in in the input.txt file
**Change the value to test each of the possible 
**code branches.*/

#include<iostream>

int main()
{
    int TARGET = 33;
    int guess;
    std::cout<<"Guess a number between 0 - 100\n";
    std::cin>>guess;
    
    std::cout<<"You guessed: "<<guess<<"\n";
    
    
    if(guess < TARGET)
    {
        std::cout<<"Your guess is too low.\n";
    }
    else if(guess > TARGET)
    {
        std::cout<<"Your guess is too high.\n";
    }
    else
    {
        std::cout<<"Yay! You guessed correctly.\n";
    }
    
    
    return 0;
}

/*
Guess a number between 0 - 100
You guessed: 21
Your guess is too low.
*/
