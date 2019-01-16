/*Goal: more practice with classes*/

/*Goal: more practice with classes*/

#include "59_01_claas_array.hpp"

int main()
{
    const int SIZE= 3;
    //Create a course of students
    Student course1[SIZE];
    //Each array element is a Student type
    //so it has access to the members of Student
    course1[0].setId(1000);
    course1[1].setId(1111);
    course1[2].setId(2222);

    course1[0].setGrade(0,83);
    course1[1].setGrade(0,95);
    course1[2].setGrade(0,72);

    course1[0].setGrade(1,87);
    course1[1].setGrade(1,52);
    course1[2].setGrade(1,70);

    course1[0].setGrade(2,90);
    course1[1].setGrade(2,85);
    course1[2].setGrade(2,82);
    
    for(int i=0;i<SIZE;i++)
    {
        course1[i].printInfo();
        cout<<"\n\n";
    }
    
    
    return 0;
}

/*
1000
83 87 90 0 0 

1111
95 52 85 0 0 

2222
72 70 82 0 0 



*/
