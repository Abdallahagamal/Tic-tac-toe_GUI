#ifndef MisereX_O_H
#define MisereX_O_H

#include "BoardGame_Classes.h"

template <typename T>
class X_O_Board6 :public Board<T> {
public:
    X_O_Board6();
    bool update_board(int x, int y, T symbol);
    void display_board();
    bool is_win();
    bool is_draw();
    bool game_is_over();
};


template <typename T>
class X_O_Random_Player6 : public RandomPlayer<T> {
public:
    X_O_Random_Player6(T symbol);
    void getmove(int& x, int& y);
};





//--------------------------------------- IMPLEMENTATION

#include <iostream>
#include <iomanip>
#include <cctype>  // for toupper()
#include <random>
#include <algorithm>
using namespace std;

// Constructor for X_O_Board6
template <typename T>
X_O_Board6<T>::X_O_Board6() {
    this->rows = 3;
    this->columns = 3;
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
bool X_O_Board6<T>::update_board(int x, int y, T mark) {
    if (this->board[x][y] == '0') {
        this->board[x][y] = toupper(mark);
        this->n_moves++;
        return true;
    }
    return false;

}

// Display the board and the pieces on it
template <typename T>
void X_O_Board6<T>::display_board() {
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
bool X_O_Board6<T>::is_win() {
    // Check rows
    for (int i = 0; i < 3; ++i) {
        if (this->board[i][0] != '0' && this->board[i][0] == this->board[i][1] && this->board[i][1] == this->board[i][2]) {
            return true; // loser in row
        }
    }

    // Check columns
    for (int j = 0; j < 3; ++j) {
        if (this->board[0][j] != '0' && this->board[0][j] == this->board[1][j] && this->board[1][j] == this->board[2][j]) {
            return true; // loser in column
        }
    }

    // Check diagonals
    if ((this->board[0][0] != '0' && this->board[0][0] == this->board[1][1] && this->board[1][1] == this->board[2][2]) ||
        (this->board[0][2] != '0' && this->board[0][2] == this->board[1][1] && this->board[1][1] == this->board[2][0])) {
        return true;
    }

    // No winner found
    return false;
}

// Return true if 9 moves are done and no winner
template <typename T>
bool X_O_Board6<T>::is_draw() {
    return (this->n_moves == 9 && !is_win());
}

template <typename T>
bool X_O_Board6<T>::game_is_over() {
    return is_win() || is_draw();
}

//--------------------------------------

// Constructor for X_O_Random_Player
template <typename T>
X_O_Random_Player6<T>::X_O_Random_Player6(T symbol) : RandomPlayer<T>(symbol) {
    this->dimension = 3;
    this->name = "Random Computer Player";
    srand(static_cast<unsigned int>(time(0)));  // Seed the random number generator
}

template <typename T>
void X_O_Random_Player6<T>::getmove(int& x, int& y) {
    x = rand() % this->dimension;  // Random number between 0 and 2
    y = rand() % this->dimension;
}






#endif //pyramidX_O_H