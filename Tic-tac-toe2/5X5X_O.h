#ifndef  _5X5X_O_H
#define _5X5X_O_H

#include "BoardGame_Classes.h"


template <typename T>
class X_O_Board3 : public Board<T> {
private:
    int count = 1;
    int count_X = 0;
    int count_O = 0;
    bool winh(int i, int j);
    bool winv(int i, int j);
    bool win_right_diagonal(int i, int j);
    bool win_left_diagonal(int i, int j);
public:
    int currentX = 0, currentY = 0;
    X_O_Board3();
    bool update_board(int x, int y, T symbol);
    void display_board();
    bool is_win();
    bool is_draw();
    bool game_is_over();
    Board<T>* get_board() {
        return this;
    }

    void reset_board() {
        for (int i = 0; i < this->rows; i++) {
            for (int j = 0; j < this->columns; j++) {
                this->board[i][j] = '0';
            }
        }
        this->n_moves = 0;
    }
};

template <typename T>
class X_O_Random_Player3 : public RandomPlayer<T> {
public:
    X_O_Random_Player3(T symbol);
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
X_O_Board3<T>::X_O_Board3() {
    this->rows = this->columns = 5;
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
bool X_O_Board3<T>::winh(int i, int j) {
    if (this->count == 3) {
        if (this->board[i][j] == 'X') {
            count_X++;
        }
        else if (this->board[i][j] == 'O') {
            count_O++;
        }
        return true;
    }
    if (j<columns-1 && this->board[i][j] == this->board[i][j + 1]) {
        this->count++;
        if (winh(i, j + 1)) {  // Continue recursion
            return true;
        }
        this->count--;  // Backtrack
    }
    return false;  // No win condition met
}

template <typename T>
bool X_O_Board3<T>::winv(int i, int j) {
    if (this->count == 3) {
        if (this->board[i][j] == 'X') {
            count_X++;
        }
        else if (this->board[i][j] == 'O') {
            count_O++;
        }
        return true;
    }
    if (i < rows-1 && this->board[i][j] == this->board[i + 1][j]) {
        this->count++;
        if (winv(i + 1, j)) {  // Continue recursion
            return true;
        }
        this->count--;  // Backtrack
    }
    return false;  // No win condition met
}

template <typename T>
bool X_O_Board3<T>::win_right_diagonal(int i, int j) {
    if (this->count == 3) {
        if (this->board[i][j] == 'X') {
            count_X++;
        }
        else if (this->board[i][j] == 'O') {
            count_O++;
        }
        return true;
    }
    if (i < rows-1 && j < this->columns-1 && this->board[i][j] == this->board[i + 1][j + 1]) {
        this->count++;
        if (win_right_diagonal(i + 1, j + 1)) {  // Continue recursion
            return true;
        }
        this->count--;  // Backtrack
    }
    return false;  // No win condition met
}

template <typename T>
bool X_O_Board3<T>::win_left_diagonal(int i, int j) {
    if (this->count == 3) {
        if (this->board[i][j] == 'X') {
            count_X++;
        }
        else if (this->board[i][j] == 'O') {
            count_O++;
        }
        return true;
    }
    if (i < rows-1 && j > 0 && this->board[i][j] == this->board[i + 1][j - 1]) {
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
bool X_O_Board3<T>::is_win() {
    if (this->n_moves == 24) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                count = 1;
                // for each valied
                winh(i, j);
                count = 1;
                winv(i, j);
                count = 1;
                win_right_diagonal(i, j);
                count = 1;
                win_left_diagonal(i, j);

            }
        }
        if (count_X > count_O) {
            return true;
        }
    }
	return false;
}
template <typename T>
bool X_O_Board3<T>::update_board(int x, int y, T mark) {
	if (this->board[x][y] == '0') {
        this->board[x][y] = toupper(mark);
        this->n_moves++;
        return true;
	}
    return false;
}


// Display the board and the pieces on it
template <typename T>
void X_O_Board3<T>::display_board() {

}

// Returns true if there is any winner
// Return true if 9 moves are done and no winner
template <typename T>
bool X_O_Board3<T>::is_draw() {
    if(count_X==count_O && this->n_moves==24)
        return true;
	return false;
}

template <typename T>
bool X_O_Board3<T>::game_is_over() {
    return true;
}

//--------------------------------------

// Constructor for X_O_Random_Player
template <typename T>
X_O_Random_Player3<T>::X_O_Random_Player3(T symbol) : RandomPlayer<T>(symbol) {
    this->dimension = 5;
    this->name = "Random Computer Player";
    srand(static_cast<unsigned int>(time(0)));  // Seed the random number generator
}

template <typename T>
void X_O_Random_Player3<T>::getmove(int& x, int& y) {
    x = rand() % this->dimension;  // Random number between 0 and 2
    y = rand() % this->dimension;
}
























#endif