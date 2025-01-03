
#ifndef _MinMaxPlayer1_H
#define _MinMaxPlayer1_H

#include "BoardGame_Classes.h"

template <typename T>
class X_O_MinMax_Player : public Player<T> {
public:
    X_O_MinMax_Player(T symbol);

    void getmove(int& x, int& y) override;
	void set_Symbol(T symbol) {
		this->symbol = symbol;
	}
	void set_board(Board<T>* board) {
		this->boardPtr = board;
	}
	void reset() {
        this->boardPtr = nullptr;
        delete this->boardPtr;
	}
private:
    int calculateMinMax(T s, bool isMaximizing);
    std::pair<int, int> getBestMove();
};







//--------------------------------------- IMPLEMENTATION

#include <limits>
#include <algorithm> // For std::max and std::min
using namespace std;
// Constructor for the templated class
template <typename T>
X_O_MinMax_Player<T>::X_O_MinMax_Player(T symbol) : Player<T>(symbol) {
    this->name = "AI Player";
}

// Method to get the best move for the player
template <typename T>
void X_O_MinMax_Player<T>::getmove(int& x, int& y) {
    std::pair<int, int> bestMove = getBestMove();
    x = bestMove.first;
    y = bestMove.second;
}

// Minimax algorithm to evaluate the board
template <typename T>
int X_O_MinMax_Player<T>::calculateMinMax(T s, bool isMaximizing) {
    if (this->boardPtr->is_win()) {
        return isMaximizing ? -1 : 1;
    }
    else if (this->boardPtr->is_draw()) {
        return 0;
    }

    int bestValue = isMaximizing ? -1000 : 1000;
    T opponentSymbol = (s == 'X') ? 'O' : 'X';

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (this->boardPtr->update_board(i, j, s)) {
                int value = calculateMinMax(opponentSymbol, !isMaximizing);
                this->boardPtr->update_board(i, j, '0'); // Undo move

                if (isMaximizing) {
                    if (value > bestValue) {
                        bestValue = value;
                    }
                }
                else {
                    if (value < bestValue) {
                        bestValue = value;
                    }
                }

            }
        }
    }

    return bestValue;
}

// Find the best move using the minimax algorithm
template <typename T>
std::pair<int, int> X_O_MinMax_Player<T>::getBestMove() {
    int bestValue = -1000;
    std::pair<int, int> bestMove = { -1, -1 };
    T opponentSymbol = (this->symbol == 'X') ? 'O' : 'X';

    // First, check if we can win in the next move
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (this->boardPtr->update_board(i, j, this->symbol)) {
                if (this->boardPtr->is_win()) {
                    this->boardPtr->update_board(i, j, '0'); // Undo move
                    return { i, j }; // Winning move found
                }
                this->boardPtr->update_board(i, j, '0'); // Undo move
            }
        }
    }

    // Second, check if the opponent can win in their next move and block them
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (this->boardPtr->update_board(i, j, opponentSymbol)) {
                if (this->boardPtr->is_win()) {
                    this->boardPtr->update_board(i, j, '0'); // Undo move
                    return { i, j }; // Block opponent's winning move
                }
                this->boardPtr->update_board(i, j, '0'); // Undo move
            }
        }
    }

    // If no immediate win or block, use MinMax to find the best move
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (this->boardPtr->update_board(i, j, this->symbol)) {
                int moveValue = calculateMinMax(this->symbol, false);
                this->boardPtr->update_board(i, j, '0'); // Undo move

                if (moveValue >= bestValue) {
                    bestMove = { i, j };
                    bestValue = moveValue;
                }
            }
        }
    }

    return bestMove;
}
















#endif //_MINMAXPLAYER_H