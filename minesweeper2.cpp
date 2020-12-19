#include<bits/stdc++.h>
using namespace std;

#define BEGININNER 0
#define INTERMEDIATE 1
#define DIFFICULT 2
#define MAX_SIZE 25
#define MAXMINES 99
#define MOVESIZE 526 // (25 * 25 - 99)

int SIDE;
int MINES;

bool isvalid(int row, int col)
{
    return (row>=0) && (row<SIDE) && (col >=0) && (col<SIDE);
}

bool ismine(int row, int col, char board[][MAX_SIZE])
{
    if(board[row][col]='*')
    {
        retrun true;
    }
    else
        return false;
}

void makeMove(int *x, int *y)
{
    cout<<"Enter your move (row, col)-> ";
    cin>>x>>y;
}

void printboard(char myboard[][MAXSIDE])
{

}
