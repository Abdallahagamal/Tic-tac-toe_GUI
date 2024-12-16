
#ifndef _4x4X_O2_H
#define _4x4X_O2_H

#include "BoardGame_Classes.h"

template <typename T>
class X_O_Board2 :public Board<T> {
public:
    X_O_Board2();
    bool update_board(int x, int y, T symbol);
    void display_board();
    bool is_win();
    bool is_draw();
    bool game_is_over();
    void reset_board() {
        for (int i = 0; i < this->rows; i++) {
            for (int j = 0; j < this->columns; j++) {
                this->board[i][j] = '0';
            }
        }
        this->n_moves = 0;
    }
    bool is_column_full(int column);
    int get_first_empty_row(int column);
};



template <typename T>
class X_O_Random_Player2 : public RandomPlayer<T> {
public:
    X_O_Random_Player2(T symbol);
    void getmove(int& x, int& y);
};





//--------------------------------------- IMPLEMENTATION

#include <iostream>
#include <iomanip>
#include <cctype>  // for toupper()

using namespace std;

// Constructor for X_O_Board
template <typename T>
X_O_Board2<T>::X_O_Board2() {
    this->rows = 6;
    this->columns = 7;
    this->board = new char* [this->rows];
    for (int i = 0; i < this->rows; i++) {
        this->board[i] = new char[this->columns];
        for (int j = 0; j < this->columns; j++) {
            this->board[i][j] = '0';
        }
    }
    this->n_moves = 0;
}

template <typename T>
bool X_O_Board2<T>::update_board(int x, int y, T mark) {
    // Only update if move is valid
    if ((x < this->rows) && (y < this->columns) && (this->board[x][y] == '0')) {

        while (true)
        {
            if (x == 5)
            {
                this->board[x][y] = toupper(mark);
                n_moves++;
                return true;

            }

            if (this->board[x + 1][y] == '0')
            {
                return false;

            }

            this->board[x][y] = toupper(mark);
            n_moves++;
            return true;
        }
    }


    return false;
}

// Returns true if there is any winner
template <typename T>
bool X_O_Board2<T>::is_win() {
    // to check rows we will make a for loop at all od rows and columns-4 why -4 ? cuz if we have 4 x or o in 4 difrrent columns the game i=end by win
    for (int i = 0; i < this->rows; i++) {
        for (int j = 0; j <= this->columns - 4; j++) {
            if (this->board[i][j] != '0' && this->board[i][j] == this->board[i][j + 1] && this->board[i][j] == this->board[i][j + 2] && this->board[i][j] == this->board[i][j + 3]) {
                return true;
            }
        }
    }
    //check the columns 
    for (int i = 0; i <= this->rows - 4; i++) {
        for (int j = 0; j < this->columns; j++) {
            if (this->board[i][j] != '0' && this->board[i][j] == this->board[i + 1][j] && this->board[i][j] == this->board[i + 2][j] && this->board[i][j] == this->board[i + 3][j]) {
                return true;
            }
        }
    }
    //check diagonal
    for (int i = 0; i <= this->rows - 4; i++) {
        for (int j = 0; j <= this->columns-4; j++) {
            if (this->board[i][j] != '0' && this->board[i][j] == this->board[i + 1][j + 1] && this->board[i][j] == this->board[i + 2][j + 2] && this->board[i][j] == this->board[i + 3][j + 3]) {
                return true;
            }
        }
    }
    for (int i = 3; i < this->rows; i++) { // Start from row 3 (index 3)
        for (int j = 0; j < this->columns - 3; j++) { // Ensure j+3 is within bounds
            if (this->board[i][j] != '0' &&
                this->board[i][j] == this->board[i - 1][j + 1] &&
                this->board[i][j] == this->board[i - 2][j + 2] &&
                this->board[i][j] == this->board[i - 3][j + 3]) {
                return true; // Diagonal found
            }
        }
    }
    return false;
}


template <typename T>
bool X_O_Board2<T>::is_draw() {
    if (this->n_moves == this->rows * this->columns && !is_win())
    {
        return true;
    }
    return false;
}

template <typename T>
void X_O_Board2<T>::display_board() {
    for (int i = 0; i < this->rows; i++) {
        cout << "\n| ";
        for (int j = 0; j < this->columns; j++) {
            cout << "(" << i << "," << j << ")";
            cout << setw(2) << this->board[i][j] << " |";
        }
        cout << "\n-----------------------------";
    }
    cout << endl;
}

template <typename T>
bool X_O_Board2<T>::game_is_over() {
    return is_win() || is_draw();
}
template <typename T>
bool X_O_Board2<T>::is_column_full(int column) {
    return this->board[0][column] != '0';
}
template <typename T>
int X_O_Board2<T>::get_first_empty_row(int column) {
    for (int i = this->rows - 1; i >= 0; i--) {
        if (this->board[i][column] == '0') {
            return i;
        }
    }
    return -1;
}
template <typename T>
X_O_Random_Player2<T>::X_O_Random_Player2(T symbol) : RandomPlayer<T>(symbol) {
    this->dimension = 7;
    this->name = "Random Computer Player";
    srand(static_cast<unsigned int>(time(0)));  // Seed the random number generator
}

template <typename T>
void X_O_Random_Player2<T>::getmove(int& x, int& y) {
    
    x = rand() % this->dimension;//check if the column is not full
    y = rand() % this->dimension;

}
#endif 

