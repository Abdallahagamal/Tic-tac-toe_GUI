#ifndef pyramidX_O_H
#define pyramidX_O_H

#include "BoardGame_Classes.h"

template <typename T>
class X_O_Board1 :public Board<T> {
public:
    X_O_Board1();
    bool update_board(int x, int y, T symbol);
    void display_board();
    bool is_win();
    bool is_draw();
    bool game_is_over();
    void del_vec(int x, int y, std::vector<std::string> vec);
};

template <typename T>
class X_O_Random_Player1 : public RandomPlayer<T> {
public:
    std::vector<std::string> vec = { "02", "11", "12", "13", "20", "21", "22", "23", "24" };
    X_O_Random_Player1(T symbol);
    void getmove(int& x, int& y);
    std::vector<string>& X_O_Random_Player1<T>::get_vec() {
        return this->vec;
    }
};





//--------------------------------------- IMPLEMENTATION

#include <iostream>
#include <iomanip>
#include <cctype>  // for toupper()
#include <random>
#include <algorithm>
using namespace std;

// Constructor for X_O_Board1
template <typename T>
X_O_Board1<T>::X_O_Board1() {
    this->rows = 3;
    this->columns = 5;
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
void X_O_Board1<T>::del_vec(int x, int y,std::vector<std::string> vec) {
    std::string z = to_string(x) + to_string(y);
    auto it = std::find(vec.begin(), vec.end(), z);
    vec.erase(it);
}


template <typename T>
bool X_O_Board1<T>::update_board(int x, int y, T mark) {
    if (this->board[x][y] == '0') {
        this->board[x][y] = toupper(mark);
        this->n_moves++;
        return true;
    }
    return false;

}

// Display the board and the pieces on it
template <typename T>
void X_O_Board1<T>::display_board() {
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

// Returns true if there is any winner
template <typename T>
bool X_O_Board1<T>::is_win() {
    for (int j = 0; j < 3; j++) {
        if ((this->board[2][j] == this->board[2][j + 1] && this->board[2][j + 1] == this->board[2][j + 2] && this->board[2][j] != '0')) {
            return true;
        }
    }

    if ((this->board[1][2] == this->board[1][1] && this->board[1][2] == this->board[1][3] && this->board[1][1] != '0') ||
        (this->board[0][2] == this->board[1][1] && this->board[1][1] == this->board[2][0] && this->board[0][2] != '0') ||
        (this->board[0][2] == this->board[1][3] && this->board[1][3] == this->board[2][4] && this->board[0][2] != '0') ||
        (this->board[0][2] == this->board[1][2] && this->board[1][2] == this->board[2][2] && this->board[0][2] != '0')) {
        return true;
    }

    return false;
}

// Return true if 9 moves are done and no winner
template <typename T>
bool X_O_Board1<T>::is_draw() {
    return (this->n_moves == 9 && !is_win());
}

template <typename T>
bool X_O_Board1<T>::game_is_over() {
    return is_win() || is_draw();
}

//--------------------------------------


// Constructor for X_O_Random_Player

template <typename T>
X_O_Random_Player1<T>::X_O_Random_Player1(T symbol) : RandomPlayer<T>(symbol) {
    this->name = "Random Computer Player";
    srand(static_cast<unsigned int>(time(0)));  // Seed the random number generator
}

template <typename T>
void X_O_Random_Player1<T>::getmove(int& x, int& y) {

    std::random_device vecc;
    std::mt19937 gen(vecc());
    std::uniform_int_distribution<> dis(0, vec.size() - 1);

    // Generate a random index
    int random_index = dis(gen);

    // Choose a random element
    std::string random_choice = vec[random_index];

    x = random_choice[0]-'0';

    y = random_choice[1]-'0';
    vec.erase(vec.begin() + random_index);
}






#endif //pyramidX_O_H