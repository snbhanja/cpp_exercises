/*Goal: Practice array manipulation in C++.
 **The user will input 40 integers.
 **Put them into an array. Then print the array in the order the numbers were
 **entered. Then print in reverse order. Then sort the array in ascending order
 **and print it.
 */

 #include <iostream>
 #include <stdio.h>

 int main()
 {
     int userInput[40];

     //Enter the numbers into an array called userInput
     for(int i = 0; i < 40; i++)
     {
         scanf("%d", &userInput[i]);
     }
     //print the array
     std::cout<<"\nThe array\n";
     for(int i = 0; i < 40; i++)
     {
         std::cout << userInput[i] <<" ";
     }
     //print the array in reverse order
     std::cout<<"\n\nThe array in reverse order\n";
     for(int i = 39; i >= 0; i--)
     {
         std::cout << userInput[i] <<" ";
     }
     //sorting the array
      for(int i = 0; i < 40; i++)
     {
         for(int j = 0; j < 39 - i; j++)
             {
                 if(userInput[j] > userInput[j + 1])
                 {
                     int temp;
                     temp=userInput[j];
                     userInput[j]=userInput[j + 1];
                     userInput[j + 1]=temp;
                 }
             }
     }
std::cout<<"\n\nThe array sorted\n";
    for(int i = 0; i< 40; i++)
{
    std::cout << userInput[i] <<" ";
}
return 0;
}

/*
1 2 3 4 5 21 34 56 22 11 33 55 77 35 64 74 75 75 345 2 21 32 45 67  32 45 24 34 45 56 67 78 89 90 21 23 24 35 46 56

The array
1 2 3 4 5 21 34 56 22 11 33 55 77 35 64 74 75 75 345 2 21 32 45 67 32 45 24 34 45 56 67 78 89 90 21 23 24 35 46 56

The array in reverse order
56 46 35 24 23 21 90 89 78 67 56 45 34 24 45 32 67 45 32 21 2 345 75 75 74 64 35 77 55 33 11 22 56 34 21 5 4 3 2 1

The array sorted
1 2 2 3 4 5 11 21 21 21 22 23 24 24 32 32 33 34 34 35 35 45 45 45 46 55 56 56 56 64 67 67 74 75 75 77 78 89 90 345
*/
