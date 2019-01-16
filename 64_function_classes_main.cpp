/*GOAL: Practice writing and calling functions

*/

#include <iostream>
#include <stdio.h>
#include "64_function_classes_main.h"

const int CLASS_SIZE = 6;

int main()
{
    Student studentsInClass[CLASS_SIZE];
    CourseEnrollment course1;

    static int studentNumber = 1000;
    int grade;
    int userInput;

    //asign student id to each student
    for(int i = 0; i < CLASS_SIZE; i++)
    {
        studentsInClass[i].setStudentID(studentNumber);
        studentNumber++;
    }

    //for(int i = 0; i < CLASS_SIZE; i++)
    //{
    //    std::cout<<"student #"<<i<<" has studentID #"<<studentsInClass[i].getStudentID()<<"\n\n";
    //}

    //assign grades to all students
    for(int i = 0; i <CLASS_SIZE; i++)
    {
      for(int j = 0; j <10 ; j++)
        {
            scanf("%d", &grade);
            studentsInClass[i].setGrade(j,grade);
        }  
    }

    //print out all students grades
    for(int i = 0; i < CLASS_SIZE; i++)
    {
        studentsInClass[i].printGrades();
        std::cout<<"\nMin grade = "<<studentsInClass[i].getMin()<<"\n";
        std::cout<<"Max grade = "<<studentsInClass[i].getMax()<<"\n";
        std::cout<<"Grade Average = "<<studentsInClass[i].getAverageGrade()<<"\n\n";
    }

    course1.addStudents(studentsInClass);

    int *allGrades;
    allGrades = course1.getAllGrades();
    allGrades = course1.sortAllGrades();
    std::cout<<"ALLGRADES\n";
    std::cout<<"Lowest grade for entire course = "<<course1.getMinGrade()<<"\n";
    std::cout<<"Highest grade for entire course = "<<course1.getMaxGrade()<<"\n";
    std::cout<<"Avg grade for entire course = "<<course1.getAvgGrade()<<"\n";
    return 0;
}


/*Input
91 92 85 58 87 75 89 97 79 65
88 72 81 94 90 61 72 75 68 77
75 49 87 79 65 64 62 51 44 70
81 72 85 78 77 75 79 87 69 55
88 62 71 74 80 71 62 85 68 87
75 89 97 79 65 48 72 61 64 90
*/


/*
StudentID = 1000
	91
	92
	85
	58
	87
	75
	89
	97
	79
	65

Min grade = 97
Max grade = 58
Grade Average = 81.8

StudentID = 1001
	88
	72
	81
	94
	90
	61
	72
	75
	68
	77

Min grade = 94
Max grade = 61
Grade Average = 77.8

StudentID = 1002
	75
	49
	87
	79
	65
	64
	62
	51
	44
	70

Min grade = 87
Max grade = 44
Grade Average = 64.6

StudentID = 1003
	81
	72
	85
	78
	77
	75
	79
	87
	69
	55

Min grade = 87
Max grade = 55
Grade Average = 75.8

StudentID = 1004
	88
	62
	71
	74
	80
	71
	62
	85
	68
	87

Min grade = 88
Max grade = 62
Grade Average = 74.8

StudentID = 1005
	75
	89
	97
	79
	65
	48
	72
	61
	64
	90

Min grade = 97
Max grade = 48
Grade Average = 74

ALLGRADES
Lowest grade for entire course = 44
Highest grade for entire course = 97
Avg grade for entire course = 74

*/
