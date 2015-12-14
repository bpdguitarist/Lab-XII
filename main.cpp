//
//  Lab XII
//
//  Created by Edgar Esparza on 7/19/15.
//

#include <iostream>
using namespace::std;


const int NUM_ROWS = 10,
NUM_COLS = 20;

void fillRectangle ( char board[NUM_ROWS] [NUM_COLS] ,
                    int row, int col,
                    int width, int height, char fillChar );

void displayBoard ( const char board[NUM_ROWS] [NUM_COLS] );

int main ()
{
    char board[NUM_ROWS][NUM_COLS];
    
    fillRectangle(board,0,0,NUM_COLS,NUM_ROWS,'.');
    
    fillRectangle(board,2,2,6,2,'C');
    fillRectangle(board,4,2,3,4,'C');
    fillRectangle(board,6,5,3,2,'C');
    fillRectangle(board,4,10,3,1,'#');
    fillRectangle(board,3,16,1,3,'#');
    fillRectangle(board,3,11,1,3,'#');
    fillRectangle(board,4,15,3,1,'#');
    cout << endl;
    displayBoard(board);
    
    return 0;
}

void fillRectangle ( char board[NUM_ROWS][NUM_COLS],
                    int row, int col,
                    int width, int height, char fillChar )
{
    for(int r= row; r < row + height; ++r)
    {
        for(int c = col; c < col + width; ++c)
        {
            board[r][ c] = fillChar;
        }
    }
    
}

void displayBoard ( const char board[NUM_ROWS][NUM_COLS])

{
    for(int r = 0; r < NUM_ROWS; ++r)
    {
        for(int c = 0; c < NUM_COLS; ++c)
        {
            cout << board[r][c];
        }
        cout << endl;
    }
}
