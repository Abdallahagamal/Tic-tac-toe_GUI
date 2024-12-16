#ifndef _9x9X_O_H
#define _9x9X_O_H

#include "BoardGame_Classes.h"

template <typename T>
class X_O_Board :public Board<T> {
private:

    std::vector<std::vector<char>> vec;
    std::vector<std::vector<bool>> vec_av;
    std::vector<std::vector<bool>> vec_av2;
    std::vector<std::vector<bool>> vec3;
    bool d;
    int cc1 = 0;
    void settt(int x, int y) {
        for (int i = 0; i < vec_av2.size(); ++i) {
            for (int j = 0; j < vec_av2[i].size(); ++j) {
                vec_av2[i][j] = false;
            }
        }
        if ((x == 1 || x == 4 || x == 7) && (y == 1 || y == 4 || y == 7)) {
            if (vec_av[1][1])
                vec_av2[1][1] = true;

        }
        else if ((x == 1 || x == 4 || x == 7) && (y == 0 || y == 3 || y == 6)) {
            if (vec_av[1][0])
                vec_av2[1][0] = true;

        }
        else if ((x == 1 || x == 4 || x == 7) && (y == 2 || y == 5 || y == 8)) {
            if (vec_av[1][2])
                vec_av2[1][2] = true;

        }
        else if ((x == 0 || x == 3 || x == 6) && (y == 1 || y == 4 || y == 7)) {
            if (vec_av[0][1])
                vec_av2[0][1] = true;

        }
        else if ((x == 2 || x == 5 || x == 8) && (y == 1 || y == 4 || y == 7)) {
            if (vec_av[2][1])
                vec_av2[2][1] = true;

        }
        else if ((x == 0 || x == 3 || x == 6) && (y == 0 || y == 3 || y == 6)) {
            if (vec_av[0][0]) {
                vec_av2[0][0] = true;
            }

        }
        else if ((x == 0 || x == 3 || x == 6) && (y == 2 || y == 5 || y == 8)) {
            if (vec_av[0][2])
                vec_av2[0][2] = true;

        }
        else if ((x == 2 || x == 5 || x == 8) && (y == 0 || y == 3 || y == 6)) {
            if (vec_av[2][0])
                vec_av2[2][0] = true;

        }
        else if ((x == 2 || x == 5 || x == 8) && (y == 2 || y == 5 || y == 8)) {
            if (vec_av[2][2])
                vec_av2[2][2] = true;

        }

    }
    bool checkk(int x, int y) {
        if ((x == 3 || x == 4 || x == 5) && (y == 3 || y == 4 || y == 5)) {
            if (vec_av2[1][1])
                return true;
            else
                return false;

        }
        else if ((x == 3 || x == 4 || x == 5) && (y == 0 || y == 1 || y == 2)) {
            if (vec_av2[1][0])
                return true;
            else
                return false;

        }
        else if ((x == 3 || x == 4 || x == 5) && (y == 6 || y == 7 || y == 8)) {
            if (vec_av2[1][2])
                return true;
            else
                return false;

        }
        else if ((x == 0 || x == 1 || x == 2) && (y == 3 || y == 4 || y == 5)) {
            if (vec_av2[0][1])
                return true;
            else
                return false;

        }
        else if ((x == 6 || x == 7 || x == 8) && (y == 3 || y == 4 || y == 5)) {
            if (vec_av2[2][1])
                return true;
            else
                return false;

        }
        else if ((x == 0 || x == 1 || x == 2) && (y == 0 || y == 1 || y == 2)) {
            if (vec_av2[0][0])
                return true;
            else
                return false;

        }
        else if ((x == 0 || x == 1 || x == 2) && (y == 6 || y == 7 || y == 8)) {
            if (vec_av2[0][2])
                return true;
            else
                return false;

        }
        else if ((x == 6 || x == 7 || x == 8) && (y == 0 || y == 1 || y == 2)) {
            if (vec_av2[2][0])
                return true;
            else
                return false;

        }
        else if ((x == 6 || x == 7 || x == 8) && (y == 6 || y == 7 || y == 8)) {
            if (vec_av2[2][2] == true)
                return true;
            else
                return false;

        }
        else
            return false;
    }
    void ch2(int x, int y) {

        if ((x == 1 || x == 4 || x == 7) && (y == 1 || y == 4 || y == 7)) {
            d = (vec[1][1] != '0');
        }
        else if ((x == 1 || x == 4 || x == 7) && (y == 0 || y == 3 || y == 6)) {
            d = (vec[1][0] != '0');
        }
        else if ((x == 1 || x == 4 || x == 7) && (y == 2 || y == 5 || y == 8)) {
            d = (vec[1][2] != '0');
        }
        else if ((x == 0 || x == 3 || x == 6) && (y == 1 || y == 4 || y == 7)) {
            d = (vec[0][1] != '0');
        }
        else if ((x == 2 || x == 5 || x == 8) && (y == 1 || y == 4 || y == 7)) {
            d = (vec[2][1] != '0');
        }
        else if ((x == 0 || x == 3 || x == 6) && (y == 0 || y == 3 || y == 6)) {
            d = (vec[0][0] != '0');
        }
        else if ((x == 0 || x == 3 || x == 6) && (y == 2 || y == 5 || y == 8)) {
            d = (vec[0][2] != '0');
        }
        else if ((x == 2 || x == 5 || x == 8) && (y == 0 || y == 3 || y == 6)) {
            d = (vec[2][0] != '0');
        }
        else if ((x == 2 || x == 5 || x == 8) && (y == 2 || y == 5 || y == 8)) {
            d = (vec[2][2] != '0');
        }
    }
public:
    X_O_Board();
    bool update_board(int x, int y, T symbol);
    void display_board();
    bool is_win();
    bool is_draw();
    bool game_is_over();
    char showpanel(int xx, int yy);
    void win();
    std::string sboard(int x, int y);
    void reset_board() {
        for (int i = 0; i < this->rows; i++) {
            for (int j = 0; j < this->columns; j++) {
                this->board[i][j] = '0';
            }
        }
        for (int i = 0; i < vec_av2.size(); ++i) {
            for (int j = 0; j < vec_av2[i].size(); ++j) {
                vec_av2[i][j] = false;
            }
        }
        for (int i = 0; i < vec_av.size(); ++i) {
            for (int j = 0; j < vec_av[i].size(); ++j) {
                vec_av[i][j] = true;
            }
        }
        d = true;
        this->n_moves = 0;
    }
};


template <typename T>
class X_O_Random_Player8 : public RandomPlayer<T> {
public:
    X_O_Random_Player8(T symbol);
    void getmove(int& x, int& y);
};





//--------------------------------------- IMPLEMENTATION

#include <iostream>
#include <iomanip>
#include <cctype>  // for toupper()


// Constructor for X_O_Board
template <typename T>
X_O_Board<T>::X_O_Board() : vec(3, std::vector<char>(3, '0')),
vec_av(3, std::vector<bool>(3, true)),
vec_av2(3, std::vector<bool>(3, false)),
d(true) {
    //load();
    this->rows = this->columns = 9;
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
bool X_O_Board<T>::update_board(int x, int y, T mark) {
    if (this->board[x][y] == '0') {
        if (!d) {
            if (checkk(x, y)) {
                if (cc1 > 0) {
                    ch2(x, y);
                }
                this->board[x][y] = mark;
                settt(x, y);
                this->n_moves++;
                return true;
            }
            else
                return false;
        }
        else
        {
            this->board[x][y] = mark;
            settt(x, y);
            d = false;
            cc1++;
            this->n_moves++;
            return true;
        }

    }

}

// Display the board and the pieces on it
template <typename T>
void X_O_Board<T>::display_board() {
    for (int i = 0; i < this->rows; i++) {
        std::cout << "\n| ";
        for (int j = 0; j < this->columns; j++) {
            std::cout << "(" << i << "," << j << ")";
            std::cout << setw(2) << this->board[i][j] << " |";
        }
        std::cout << "\n-----------------------------";
    }
    std::cout << endl;
}

template <typename T>
void X_O_Board<T>::win() {
    for (int i = 0; i <= 6; i += 3) {
        for (int j = 0; j <= 6; j += 3) {
            for (int k = 0; k < 3; k++) {
                // Check rows in the 3x3 grid
                if (this->board[i + k][j] == this->board[i + k][j + 1] &&
                    this->board[i + k][j + 1] == this->board[i + k][j + 2] &&
                    this->board[i + k][j] != '0') {
                    this->vec[i / 3][j / 3] = this->board[i + k][j];
					vec_av[i / 3][j / 3] = false;
                }
                // Check columns in the 3x3 grid
                if (this->board[i][j + k] == this->board[i + 1][j + k] &&
                    this->board[i + 1][j + k] == this->board[i + 2][j + k] &&
                    this->board[i][j + k] != '0') {
                    this->vec[i / 3][j / 3] = this->board[i][j + k];
					vec_av[i / 3][j / 3] = false;
                }
            }
            // Check diagonals within the 3x3 grid
            if (this->board[i][j] == this->board[i + 1][j + 1] &&
                this->board[i + 1][j + 1] == this->board[i + 2][j + 2] &&
                this->board[i][j] != '0') {
                this->vec[i / 3][j / 3] = this->board[i][j];
				vec_av[i / 3][j / 3] = false;

            }
            if (this->board[i][j + 2] == this->board[i + 1][j + 1] &&
                this->board[i + 1][j + 1] == this->board[i + 2][j] &&
                this->board[i][j + 2] != '0') {
                this->vec[i / 3][j / 3] = this->board[i][j + 2];
				vec_av[i / 3][j / 3] = false;
            }
        }
    }
}

// Returns true if there is any winner
template <typename T>
bool X_O_Board<T>::is_win() {
    win();
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if ((this->vec[i][0] == this->vec[i][1] && this->vec[i][1] == this->vec[i][2] && this->vec[i][0] != '0') ||
            (this->vec[0][i] == this->vec[1][i] && this->vec[1][i] == this->vec[2][i] && this->vec[0][i] != '0')) {
            return true;
        }
    }

    // Check diagonals
    if ((this->vec[0][0] == this->vec[1][1] && this->vec[1][1] == this->vec[2][2] && this->vec[0][0] != '0') ||
        (this->vec[0][2] == this->vec[1][1] && this->vec[1][1] == this->vec[2][0] && this->vec[0][2] != '0')) {
        return true;
    }

    return false;
}

// Return true if 9 moves are done and no winner
template <typename T>
bool X_O_Board<T>::is_draw() {
    return (this->n_moves == 81 && !is_win());
}

template <typename T>
bool X_O_Board<T>::game_is_over() {
    return is_win() || is_draw();
}

template <typename T>
char X_O_Board<T>::showpanel(int x, int y) {
    //load();
    if ((x == 3 || x == 4 || x == 5) && (y == 3 || y == 4 || y == 5)) {
        return vec[1][1];
    }
    else if ((x == 3 || x == 4 || x == 5) && (y == 0 || y == 1 || y == 2)) {
        return vec[1][0];
    }
    else if ((x == 3 || x == 4 || x == 5) && (y == 6 || y == 7 || y == 8)) {

        return vec[1][2];
    }
    else if ((x == 0 || x == 1 || x == 2) && (y == 3 || y == 4 || y == 5)) {
        return vec[0][1];

    }
    else if ((x == 6 || x == 7 || x == 8) && (y == 3 || y == 4 || y == 5)) {
        return vec[2][1];

    }
    else if ((x == 0 || x == 1 || x == 2) && (y == 0 || y == 1 || y == 2)) {
        return vec[0][0];
    }
    else if ((x == 0 || x == 1 || x == 2) && (y == 6 || y == 7 || y == 8)) {
        return vec[0][2];

    }
    else if ((x == 6 || x == 7 || x == 8) && (y == 0 || y == 1 || y == 2)) {
        return vec[2][0];

    }
    else if ((x == 6 || x == 7 || x == 8) && (y == 6 || y == 7 || y == 8)) {
        return vec[2][2];
    }

}
template <typename T>
std::string X_O_Board<T>::sboard(int x, int y) {
    return std::string(1, this->board[x][y]);

}

//--------------------------------------



// Constructor for X_O_Random_Player
template <typename T>
X_O_Random_Player8<T>::X_O_Random_Player8(T symbol) : RandomPlayer<T>(symbol) {
    this->dimension = 9;
    this->name = "Random Computer Player";
    srand(static_cast<unsigned int>(time(0)));  // Seed the random number generator
}

template <typename T>
void X_O_Random_Player8<T>::getmove(int& x, int& y) {
    x = rand() % this->dimension;  // Random number between 0 and 2
    y = rand() % this->dimension;
}






#endif //9x9X_O_H