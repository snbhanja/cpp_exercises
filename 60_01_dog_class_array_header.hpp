/*The header file for 60_01_dog_class_array.cpp*/

#include<iostream>
#include "60_01_dog_class_array.cpp"

using namespace std;

void printRoster(Dog roster[], int size);

void printRoster(Dog roster[], int size)
{
    for(int i=0;i<size;i++)
    {
        roster[i].printInfo();
        cout<<"\n\n";
    }
}
