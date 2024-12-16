#ifndef  _4X4X_O_H
#define _4X4X_O_H

#include "BoardGame_Classes.h"

int currentXc = 0, currentYc = 0;
template <typename T>
class X_O_Board7 : public Board<T> {
private:
    int count = 1;
    bool winh(int i, int j);
    bool winv(int i, int j);
    bool win_right_diagonal(int i, int j);
	bool win_left_diagonal(int i, int j);
public:
    int currentX = currentXc, currentY = currentYc;
    X_O_Board7();
    bool update_board(int x, int y, T symbol);
    void display_board();
    bool is_win();
    bool is_draw();
    bool game_is_over();
    std::string display_the_availableGame(int currentX, int currentY);
    void reset_board() {
        for (int i = 0; i < this->rows; i++) {
            for (int j = 0; j < this->columns; j++) {
                this->board[i][j] = '0';
            }
        }
        this->board[0][0] = 'O';
        this->board[0][1] = 'X';
        this->board[0][2] = 'O';
        this->board[0][3] = 'X';
        this->board[3][0] = 'X';
        this->board[3][1] = 'O';
        this->board[3][2] = 'X';
        this->board[3][3] = 'O';
        this->n_moves = 0;
    }

};

template <typename T>
class X_O_Random_Player7 : public RandomPlayer<T> {
public:
    X_O_Random_Player7(T symbol);
    void getmove(int& x, int& y);
};

//--------------------------------------- IMPLEMENTATION

#include <iostream>
#include <iomanip>
#include <cctype>  // for toupper()
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

// Constructor for X_O_Board
template <typename T>
X_O_Board7<T>::X_O_Board7() {
    this->rows = this->columns = 4;
    this->board = new char* [this->rows];
    for (int i = 0; i < this->rows; i++) {
        this->board[i] = new char[this->columns];
        for (int j = 0; j < this->columns; j++) {
            this->board[i][j] = '0';
        }
    }
    this->board[0][0] = 'O';
    this->board[0][1] = 'X';
    this->board[0][2] = 'O';
    this->board[0][3] = 'X';
    this->board[3][0] = 'X';
    this->board[3][1] = 'O';
    this->board[3][2] = 'X';
    this->board[3][3] = 'O';
    /*34an no7t el defult bta3 el l3ba*/
    this->n_moves = 0;
}

template <typename T>
bool X_O_Board7<T>::winh(int i, int j) {
    if (this->count == 3) {
        return true;
    }
    if (j < 3 && this->board[i][j] == this->board[i][j + 1]) {
        this->count++;
        if (winh(i, j + 1)) {  // Continue recursion
            return true;
        }
        this->count--;  // Backtrack
    }
    return false;  // No win condition met
}

template <typename T>
bool X_O_Board7<T>::winv(int i, int j) {
    if (this->count == 3) {
        return true;
    }
    if (i < 3 && this->board[i][j] == this->board[i + 1][j]) {
        this->count++;
        if (winv(i + 1, j)) {  // Continue recursion
            return true;
        }
        this->count--;  // Backtrack
    }
    return false;  // No win condition met
}

template <typename T>
bool X_O_Board7<T>::win_right_diagonal(int i, int j) {
    if (this->count == 3) {
        return true;
    }
    if (i < 3 && j < 3 && this->board[i][j] == this->board[i + 1][j + 1]) {
        this->count++;
        if (win_right_diagonal(i + 1, j + 1)) {  // Continue recursion
            return true;
        }
        this->count--;  // Backtrack
    }
    return false;  // No win condition met
}

template <typename T>
bool X_O_Board7<T>::win_left_diagonal(int i, int j) {
    if (this->count == 3) {
        return true;
    }
    if (i < 3 && j > 0 && this->board[i][j] == this->board[i + 1][j - 1]) {
        this->count++;
        if (win_left_diagonal(i + 1, j - 1)) {  // Continue recursion
            return true;
        }
        this->count--;  // Backtrack
    }
    return false;  // No win condition met
}

// Returns true if there is any winner
template <typename T>
bool X_O_Board7<T>::is_win() {
    for (int i = 0; i < 4; ++i) {
        if (this->board[i][0] != '0' && this->board[i][0] == this->board[i][1] && this->board[i][1] == this->board[i][2] || this->board[i][1] != '0' && this->board[i][1] == this->board[i][2] && this->board[i][2] == this->board[i][3]) {
            return true; // Winner in row
        }
    }

    // Check columns
    for (int j = 0; j < 4; ++j) {
        if (this->board[0][j] != '0' && this->board[0][j] == this->board[1][j] && this->board[1][j] == this->board[2][j] || this->board[1][j] != '0' && this->board[1][j] == this->board[2][j] && this->board[2][j] == this->board[3][j]) {
            return true; // Winner in column
        }
    }

    // Check main diagonal
    // Check main diagonal
    if (this->board[0][0] != '0' && this->board[0][0] == this->board[1][1] && this->board[1][1] == this->board[2][2]
        || this->board[1][1] != '0' && this->board[1][1] == this->board[2][2] && this->board[2][2] == this->board[3][3]
        || this->board[0][1] != '0' && this->board[0][1] == this->board[1][2] && this->board[1][2] == this->board[2][3]
        || this->board[1][0] != '0' && this->board[1][0] == this->board[2][1] && this->board[2][1] == this->board[3][2]) {
        return true; // Winner in main diagonal
    }

    // Check anti-diagonal
    if (this->board[0][3] != '0' && this->board[0][3] == this->board[1][2] && this->board[1][2] == this->board[2][1]
        || this->board[1][2] != '0' && this->board[1][2] == this->board[2][1] && this->board[2][1] == this->board[3][0]
        || this->board[0][2] != '0' && this->board[0][2] == this->board[1][1] && this->board[1][1] == this->board[2][0]
        || this->board[1][3] != '0' && this->board[1][3] == this->board[2][2] && this->board[2][2] == this->board[3][1]) {
        return true; // Winner in anti-diagonal
    }

    // No winner found
    return false;
}
template <typename T>
bool X_O_Board7<T>::update_board(int x, int y, T mark) {
    
    // Only update if move is valid
    // the board will ubdate if and only if x,y make the mark to move only 1 index not 2 
    // and will ubdate if x,y make the mark move only virtcal or horizontal
    if (x >= 0 && x < this->rows && y >= 0 && y < this->columns && (this->board[x][y] == '0' /*to check if the index is empty*/) && ((abs(x - currentX) + abs(y - currentY)) == 1)) {
        this->board[currentX][currentY] = '0';//to remove mark from the old index
        this->board[x][y] = toupper(mark);  //to put the new mark on the new index
        
        return true;
    }
    else return false;
	
}

template <typename T>
std::string X_O_Board7<T>::display_the_availableGame(int currentX, int currentY)//the function will take two parameters currX,currY
{
    //we will check left ,right,dowen,and up if this available to play on this index or not 

    //right check
    std::string kk = "";
    //up check
    if (currentX - 1 >= 0 && this->board[currentX - 1][currentY] == '0')
    {
        //now we will check up so we will change in currX
        kk =kk+ std::to_string(currentX - 1) + std::to_string(currentY);
    }
    if (currentY + 1 < this->columns && this->board[currentX][currentY + 1] == '0')
    {
        //when we check right side we will change in columns  .'. we will check currentY
        kk =kk + std::to_string(currentX) + std::to_string(currentY + 1);
    }

    //left check
    if (currentY - 1 >= 0 && this->board[currentX][currentY - 1] == '0')
    {
        //the same theory
        kk = kk + std::to_string(currentX) + std::to_string(currentY - 1);
    }
    
    //dowen check
    if (currentX + 1 < this->rows && this->board[currentX + 1][currentY] == '0')
    {
        kk = kk + std::to_string(currentX + 1) + std::to_string(currentY);
    }

    return kk;
}
// Display the board and the pieces on it
template <typename T>
void X_O_Board7<T>::display_board() {
   
}

// Returns true if there is any winner
// Return true if 9 moves are done and no winner
template <typename T>
bool X_O_Board7<T>::is_draw() {
	return true;
}

template <typename T>
bool X_O_Board7<T>::game_is_over() {
    return true;
}

//--------------------------------------







template <typename T>
X_O_Random_Player7<T>::X_O_Random_Player7(T symbol) : RandomPlayer<T>(symbol) {
    this->dimension = 4;
    this->name = "Random Computer Player";
    srand(static_cast<unsigned int>(time(0)));

}

template <typename T>
void X_O_Random_Player7<T>::getmove(int& x, int& y) {
    int directionOf_x [4] = {0,0,-1,1};
    int directionOf_y[4] = {-1,1,0,0};
    int rndmnumber;
    while (true)
    {
        rndmnumber = rand() % 4;
        int newx = x + directionOf_x[rndmnumber];
        int newy = y + directionOf_y[rndmnumber];
        if (newx >= 0 && newx < this->dimension && newy >= 0 && newy < this->dimension)
        {
            y = newy;
            x = newx;
            break;
        }
    }



}

















#endif