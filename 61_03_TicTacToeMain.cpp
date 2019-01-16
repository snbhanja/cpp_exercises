/*Goal: Practice creating classes and functions. 
**Create a program that allows two users to 
**play a 4x4 tic-tac-toe game. 
*/

#include "TicTacToeClasses.cpp"
#include "TicTacToeFunctions.cpp"

int main()
{
    Board gameBoard;
    string nameX;
    string nameO;
    
    int tieGame = 0;
    char gameWinner = 'z';
    int numTurns = 0;
    
    //get the names of the players
    getUserNames(nameX, nameO);
    
    //the game is played for 8 turns maximum
    while(numTurns < 8)
    {
        //print a board that has the postions numbered
        printTheBoard(gameBoard);
        //ask player x where they want to put an 'x'
        printUserPrompt(nameX, 'x');
        //check that the input is a valid position and that
        //it has not already been taken
        checkResponse(gameBoard, 'x');
        //check to see if player 'x' has four in a row somewhere on the board
        gameWinner = gameBoard.determineWinner();
        
        //if player 'x' has won, end the game
        if(gameWinner != 'z')
        {
            printTheBoard(gameBoard);
            writeTheBoard(gameBoard);
            printGameWinner(gameBoard, nameX, nameO);
            break;
        }
        //Now do the same for player 'o'
        //print a board that has the postions numbered
        printTheBoard(gameBoard);
        writeTheBoard(gameBoard);
        //ask player x where they want to put an 'o'
        printUserPrompt(nameO, 'o');
        //check that the input is a valid position and that
        //it has not already been taken
        checkResponse(gameBoard, 'o');

        printTheBoard(gameBoard);
        writeTheBoard(gameBoard);
        //check to see if player 'o' has four in a row somewhere on the board
        gameWinner = gameBoard.determineWinner();
        //if player 'o' has won, end the game
        if(gameWinner != 'z')
        {
            printTheBoard(gameBoard);
            writeTheBoard(gameBoard);
            printGameWinner(gameBoard, nameX, nameO);
            break;
        }
        numTurns++;
    }
    //if there is no winner at this point, the game is a tie
    if(numTurns >= 8)
        cout<<"Tie game.\n\n";
    return 0;
}


/*Input:-
Catherine
John
0
4
1
12
2
13
3
14
*/

/*Output:-
Name of user to be 'x' :Name of user to be 'o' :|0: |1: |2: |3: |
|4: |5: |6: |7: |
|8: |9: |10:|11:|
|12:|13:|14:|15:|



|_|_|_|_|
|_|_|_|_|
|_|_|_|_|
|_|_|_|_|



Catherine where would you like to place an x?: 

 where would you like to place an x?: Enter an integer between 0 and 15: |0: |1: |2: |3: |
|4: |5: |6: |7: |
|8: |9: |10:|11:|
|12:|13:|14:|15:|



|x|_|_|_|
|_|_|_|_|
|_|_|_|_|
|_|_|_|_|





|x|_|_|_|
|_|_|_|_|
|_|_|_|_|
|_|_|_|_|



John where would you like to place an o?: 

 where would you like to place an o?: Enter an integer between 0 and 15: |0: |1: |2: |3: |
|4: |5: |6: |7: |
|8: |9: |10:|11:|
|12:|13:|14:|15:|



|x|_|_|_|
|o|_|_|_|
|_|_|_|_|
|_|_|_|_|





|x|_|_|_|
|o|_|_|_|
|_|_|_|_|
|_|_|_|_|



|0: |1: |2: |3: |
|4: |5: |6: |7: |
|8: |9: |10:|11:|
|12:|13:|14:|15:|



|x|_|_|_|
|o|_|_|_|
|_|_|_|_|
|_|_|_|_|



Catherine where would you like to place an x?: 

 where would you like to place an x?: Enter an integer between 0 and 15: |0: |1: |2: |3: |
|4: |5: |6: |7: |
|8: |9: |10:|11:|
|12:|13:|14:|15:|



|x|x|_|_|
|o|_|_|_|
|_|_|_|_|
|_|_|_|_|





|x|x|_|_|
|o|_|_|_|
|_|_|_|_|
|_|_|_|_|



John where would you like to place an o?: 

 where would you like to place an o?: Enter an integer between 0 and 15: |0: |1: |2: |3: |
|4: |5: |6: |7: |
|8: |9: |10:|11:|
|12:|13:|14:|15:|



|x|x|_|_|
|o|_|_|_|
|_|_|_|_|
|o|_|_|_|





|x|x|_|_|
|o|_|_|_|
|_|_|_|_|
|o|_|_|_|



|0: |1: |2: |3: |
|4: |5: |6: |7: |
|8: |9: |10:|11:|
|12:|13:|14:|15:|



|x|x|_|_|
|o|_|_|_|
|_|_|_|_|
|o|_|_|_|



Catherine where would you like to place an x?: 

 where would you like to place an x?: Enter an integer between 0 and 15: |0: |1: |2: |3: |
|4: |5: |6: |7: |
|8: |9: |10:|11:|
|12:|13:|14:|15:|



|x|x|x|_|
|o|_|_|_|
|_|_|_|_|
|o|_|_|_|





|x|x|x|_|
|o|_|_|_|
|_|_|_|_|
|o|_|_|_|



John where would you like to place an o?: 

 where would you like to place an o?: Enter an integer between 0 and 15: |0: |1: |2: |3: |
|4: |5: |6: |7: |
|8: |9: |10:|11:|
|12:|13:|14:|15:|



|x|x|x|_|
|o|_|_|_|
|_|_|_|_|
|o|o|_|_|





|x|x|x|_|
|o|_|_|_|
|_|_|_|_|
|o|o|_|_|



|0: |1: |2: |3: |
|4: |5: |6: |7: |
|8: |9: |10:|11:|
|12:|13:|14:|15:|



|x|x|x|_|
|o|_|_|_|
|_|_|_|_|
|o|o|_|_|



Catherine where would you like to place an x?: 

 where would you like to place an x?: Enter an integer between 0 and 15: |0: |1: |2: |3: |
|4: |5: |6: |7: |
|8: |9: |10:|11:|
|12:|13:|14:|15:|



|x|x|x|x|
|o|_|_|_|
|_|_|_|_|
|o|o|_|_|





|x|x|x|x|
|o|_|_|_|
|_|_|_|_|
|o|o|_|_|



Congrats Catherine you won!

*/
