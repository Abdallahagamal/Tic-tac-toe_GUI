#ifndef _numX_O_H
#define _numX_O_H

#include "BoardGame_Classes.h"

template <typename T>
class X_O_Board5 :public Board<T> {
public:
    X_O_Board5();
    bool update_board(int x, int y, T symbol);
    void display_board();
    bool is_win();
    bool is_draw();
    bool game_is_over();
    void reset_board() {
        for (int i = 0; i < this->rows; i++) {
            for (int j = 0; j < this->columns; j++) {
                this->board[i][j] = 0;
            }
        }
        this->n_moves = 0;
    }
};

template <typename T>
class X_O_Random_Player5 : public RandomPlayer<T> {
public:
    X_O_Random_Player5(T symbol);
    void getmove(int& x, int& y);
	vector<int>numbers{ 1,2,3,4,5,6,7,8,9 };
    int selectedNumber;
    int numberIndex;
    void del_vec(int numberIndex) {
        numbers.erase(numbers.begin() + numberIndex);
    }
	void reset_vec() {
		this->numbers = { 1,2,3,4,5,6,7,8,9 };
	}
    bool valid = true;

};
//--------------------------------------- IMPLEMENTATION

#include <iostream>
#include <iomanip>
#include <cctype>  // for toupper()

using namespace std;

// Constructor for X_O_Board
template <typename T>
X_O_Board5<T>::X_O_Board5() {
    this->rows = 3;
    this->columns = 3;
    this->board = new char* [this->rows];
    for (int i = 0; i < this->rows; i++) {
        this->board[i] = new char[this->columns];
        for (int j = 0; j < this->columns; j++) {
            this->board[i][j] = 0;
        }
    }
    this->n_moves = 0;
}

template <typename T>
bool X_O_Board5<T>::update_board(int x, int y, T number) {
    // Only update if move is valid
    if ((x < this->rows && y < this->columns && this->board[x][y] == 0)) {
        this->board[x][y] = number;
        this->n_moves++;
        return true;
    }
    return false;
}

// Returns true if there is any winner
template <typename T>
bool X_O_Board5<T>::is_win() {
    for (size_t i = 0; i < 3; i++) {
        // check rows
        if (this->board[i][0] + this->board[i][1] + this->board[i][2] == 15) {
            return true;
        }
        // check columns
        if (this->board[0][i] + this->board[1][i] + this->board[2][i] == 15) {
            return true;
        }
    }
    // check diagonals
    if ((this->board[0][0] + this->board[1][1] + this->board[2][2]) == 15) {
        return true;
    }
    if ((this->board[0][2] + this->board[1][1] + this->board[2][0] )== 15) {
        return true;
    }
    return false;
}

template <typename T>
bool X_O_Board5<T>::is_draw() {
    if (this->n_moves == this->rows * this->columns && !is_win()) {
        return true;
    }
    return false;
}

template <typename T>
bool X_O_Board5<T>::game_is_over() {
    return is_win() || is_draw();
}

template <typename T>
void X_O_Board5<T>::display_board() {
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


// Constructor for X_O_Random_Player
template <typename T>
X_O_Random_Player5<T>::X_O_Random_Player5(T symbol) : RandomPlayer<T>(symbol) {
    this->dimension = 3;
    this->name = "Random Computer Player";
    srand(static_cast<unsigned int>(time(0)));

}

template <typename T>
void X_O_Random_Player5<T>::getmove(int& x, int& y) {
	
    numberIndex = rand() % numbers.size();
    selectedNumber = numbers[numberIndex];
    if (valid) {
        while (true) {
            if (selectedNumber % 2 != 0) {
                break;
            }
            else
            {
                numberIndex = rand() % numbers.size();
                selectedNumber = numbers[numberIndex];
            }
        }
    }
    else {
        while (true) {
            if (selectedNumber % 2 == 0) {
                break;
            }
            else
            {
                numberIndex = rand() % numbers.size();
                selectedNumber = numbers[numberIndex];
            }
        }
    }
    x = rand() % this->dimension;
    y = rand() % this->dimension;
       
    

}

#endif
