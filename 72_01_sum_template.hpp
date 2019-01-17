#include<iostream>

//Our generic function
template <typename T>  //tell the compiler we are using a template
//use addresses of the variables in the delcaration of the function


T sumTwo(T  a,T  b)
{
    //Note  that the sum is a variable type T. This means whatever 
    //variable type is passed in
   //will become the variable type for sum.
    T  sum;
    sum = a + b;
    return sum;
}
