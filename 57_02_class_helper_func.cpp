/*Goal: look at helper functions in classes*/
/*
Classes can have member functions that do more than just set or get data values. These helper functions can perform tasks that are often requested or are easier to perform in the class itself. 

For example:
Let's say we have a class that tracks the grades a student receives in a course. We can create a member function that calculates the average.
*/
#include "main.hpp"

int main()
{
    Student s1;
    s1.setId(3232);
    s1.setGrade(0,85);
    s1.setGrade(1, 80);
    s1.setGrade(2,98);
    s1.setGrade(3,65);
    s1.setGrade(4,90);
    s1.printInfo();
    cout<<"avg = "<<s1.getAvg();
    return 0;
}
