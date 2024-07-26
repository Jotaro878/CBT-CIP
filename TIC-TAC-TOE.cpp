#include <iostream>
#include <vector>

const int ROWS = 3;
const int COLS = 3;

void drawBoard(const std::vector<std::vector<char> >& board) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << board[i][j] << " ";
            if (j < COLS - 1) {
                std::cout << "| ";
            }
        }
        std::cout << "\n";
        if (i < ROWS - 1) {
            for (int k = 0; k < COLS * 4 - 1; k++) {
                std::cout << "-";
            }
            std::cout << "\n";
        }
    }
}

void makeMove(std::vector<std::vector<char> >& board, char player, int row, int col) {
    if (row < 0 || row >= ROWS || col < 0 || col >= COLS) {
        std::cerr << "Invalid move! Try again.\n";
        return;
    }
    if (board[row][col] != ' ') {
        std::cerr << "Position already occupied! Try again.\n";
        return;
    }
    board[row][col] = player;
}

bool checkWin(const std::vector<std::vector<char> >& board, char player) {
    for (int i = 0; i < ROWS; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
    }
    for (int i = 0; i < COLS; i++) {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;
        }
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }
    return false;
}

int main() {
    std::vector<std::vector<char> > board(ROWS, std::vector<char>(COLS, ' '));
    char currentPlayer = 'X';

    while (true) {
        drawBoard(board);
        std::cout << "Player " << currentPlayer << ", enter your move (row col): ";
        int row, col;
        std::cin >> row >> col;
        makeMove(board, currentPlayer, row, col);
        if (checkWin(board, currentPlayer)) {
            drawBoard(board);
            std::cout << "Player " << currentPlayer << " wins!\n";
            break;
        }
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}