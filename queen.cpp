#include <iostream>
using namespace std;
#define N 8

void printSol(int board[N][N]){
    for(int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout<< board[i][j] << " ";
        }
        cout << endl;
    }
}

bool validity(int board[N][N], int row, int col){
    for (int i = 0; i < col; i++){
        if(board[row][i]){
            return false;
        }
    }
    for (int i = row, j = col; i >=0 && j>=0; i--, j--){
        if(board[i][j]){
            return false;
        }
    }
    for (int i=row, j=col; i < N && j >= 0; i++, j--){
        if(board[i][j]){
            return false;
        }
    }
    return true;
}

bool solve(int board[N][N], int col){
    if (col >= N){
        return true;
    }
    for (int i = 0; i < N; i++){
        if (validity(board, i, col)){
            board[i][col] = 1;
            if (solve(board, col +1)){
                return true;
            }
            board[i][col] = 0;
        }
    }
    return false;
}

bool checkSol (){
    int board[N][N] = {
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0}
    };

    if(solve(board, 0) == false){
        cout << "not slay";
    }

    printSol(board);
    return true;
}

int main(){
    checkSol();
    return 0;
}



