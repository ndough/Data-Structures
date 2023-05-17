#include <iostream>
#include <cmath>
#define MAX 500
using namespace std;


int main(){
    // string input;
    // int *pointer;
    // pointer = new int; 

    // cout << "input number please";
    // cin >> input;

    // if (input.size() > 500) {
    //     cin >> input;
    // }

    // int arraySize = input.size();

    // *pointer = arraySize;

    // cout << *pointer;

    // delete pointer;
    // pointer = NULL;

    char textArray[MAX];

    char *str = textArray; //points to first character in array

    int count = 0;
    string input;

    cin >> textArray;

    // while (*(str++) != '\0'){
    //     count++;
    // }

    for (int i = 0; *(str++) != '\0'; i++){
        count++;
    }

    cout << count;
}