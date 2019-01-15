/*
For this program, I have created a class called 'Gameboard'. 

Gameboard has a private member 'gameSpace[4][4]' that is a 4x4 array that accepts a char for each of the 16 positions.

The class has four public members that are functions and a constructor:

* the constructor sets each value of gameSpace to the char value '-'
* each position to be set with a single char
* each position can be read individually
* printInfo will print gameSpace as a 4x4 matrix
* the helper function 'fourInRow' checks every row, looking for four 'x's. When it finds four x's in the same row, 
   it returns a '1', otherwise it returns a '0'.
You will need to complete the class Gameboard.
*/



#include "58_01_matrix_4_x_4.hpp"


int main()
{
    Gameboard game1;
    game1.setGameSpace(0,0,'x');
    game1.setGameSpace(0,1,'x');
    game1.setGameSpace(0,2,'x');
    game1.setGameSpace(0,3,'y');
    game1.setGameSpace(1,0,'x');
    game1.setGameSpace(2,0,'x');
    game1.setGameSpace(3,0,'x');
    game1.setGameSpace(3,1,'x');
    game1.setGameSpace(3,2,'x');
    game1.setGameSpace(3,3,'x');

    if(game1.fourInRow() == 1)
    {
        cout<<"X got four in a row!\n\n";
    }
    else
    {
        cout<<"X did not get four in a row :(\n\n";
    }
    game1.printInfo();
    return 0;
}

/*
X got four in a row!

    
xxxy
x---
x---
xxxx
*/
