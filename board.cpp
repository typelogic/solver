#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main(int argc, char *argv[])
{
    // board has 8 list, where each list
    // has 8 members
    char board[8][8] = {
        {'r','n','b','q','k','b','n','r'},
        {'p','p','p','p','p','p','p','p'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'P','P','P','P','P','P','P','P'},
        {'R','N','B','Q','K','B','N','R'},
    };

    // e2e4
    board[6][4] = '.';
    board[4][4] = 'P';

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << board[i][j] << flush;
            this_thread::sleep_for(chrono::milliseconds(100));
        }
        cout << endl;
    }

    return 0;
}
