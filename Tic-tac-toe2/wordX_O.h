#ifndef _wordX_O_H
#define _wordX_O_H

#include "BoardGame_Classes.h"
#include <set>
#include <vector>
using namespace std;

template <typename T>
class X_O_Board4 :public Board<T> {
private:
    set<string>WORDS;
    bool chekk(const string& word);
public:
    X_O_Board4();
    bool update_board(int x, int y, T symbol);
    void display_board();
    bool is_win();
    bool is_draw();
    bool game_is_over();

};



template <typename T>
class X_O_Random_Player4 : public RandomPlayer<T> {
    vector<char> letters;
public:
    X_O_Random_Player4(T symbol);
    void getmove(int& x, int& y);

};





//--------------------------------------- IMPLEMENTATION

#include <iostream>
#include <iomanip>
#include <cctype>  // for toupper()
#include <fstream>
using namespace std;

template <typename T>
bool X_O_Board4<T>::chekk(const string& word) {
    return WORDS.find(word) != WORDS.end();
}


template <typename T>
X_O_Board4<T>::X_O_Board4() {
    this->rows = this->columns = 3;
    this->board = new char* [this->rows];
    for (int i = 0; i < this->rows; i++) {
        this->board[i] = new char[this->columns];
        for (int j = 0; j < this->columns; j++) {
            this->board[i][j] = '0';
        }
    }

    this->n_moves = 0;

    ifstream words_file("dic.txt");
    if (!words_file) {
        exit(1);
    }

    string x;
    while (words_file >> x) {
        WORDS.insert(x);
    }
    words_file.close();

}

template <typename T>
bool X_O_Board4<T>::update_board(int x, int y, T mark) {
    if (this->board[x][y] == '0') {
        this->board[x][y] = toupper(mark);
        this->n_moves++;
        return true;
    }
    return false;
}

template <typename T>
void X_O_Board4<T>::display_board() {
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
bool X_O_Board4<T>::is_win() {
    string x;
    for (int i = 0; i < this->rows; i++) {
        x.clear();
        for (int j = 0; j < this->columns; j++) {
            if (this->board[i][j] != '0') {
                x += this->board[i][j];
            }
        }
        if (chekk(x)) {
            return true;
        }
    }
    for (int j = 0; j < this->columns; j++) {
        x.clear();
        for (int i = 0; i < this->rows; i++) {
            if (this->board[i][j] != '0') {
                x += this->board[i][j];
            }
        }
        if (chekk(x)) {
            return true;
        }
    }

    // Check diagonals
    x.clear();
    x += this->board[0][0];
    x += this->board[1][1];
    x += this->board[2][2];
    if (chekk(x)) {
        return true;
    }

    x.clear();
    x += this->board[0][2];
    x += this->board[1][1];
    x += this->board[2][0];
    if (chekk(x)) {
        return true;
    }

    return false;
}

template <typename T>
bool X_O_Board4<T>::is_draw() {
    return (this->n_moves == 9 && !is_win());
}

template <typename T>
bool X_O_Board4<T>::game_is_over() {
    return is_win() || is_draw();
}

//--------------------------------------

template <typename T>
X_O_Random_Player4<T>::X_O_Random_Player4(T symbol) : RandomPlayer<T>(symbol) {
    this->dimension = 3;
    this->name = "Random Computer Player";
    srand(static_cast<unsigned int>(time(0)));  // Seed the random number generator

    this->letters = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M','N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
}



template <typename T>

void X_O_Random_Player4<T>::getmove(int& x, int& y) {
    int z;
    x = rand() % 3;
    y = rand() % 3;
    z = rand() % this->letters.size();
    this->symbol = this->letters[z];
}


#endif //_3X3X_O_H

