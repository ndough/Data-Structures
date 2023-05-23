#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int number, row, column, sum;
    sum = 0;

    cout << "How many row" << endl;
    cin >> row;
    cout << "How many column" << endl;
    cin >> column;

    int ** p = new int* [row];

    for (int i=0; i < row; i++){
    p[i] = new int [column];
    }
    
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            cout <<"input" <<endl;
            cin >> number;
            sum += number;
        }
    }

    cout << sum;

}