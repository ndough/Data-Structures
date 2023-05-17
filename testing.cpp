#include <iostream>
#include <cmath>
using namespace std;


int main(){
    string *p;
    p = new string[10];
    

    for (int i =0; i < 10; i++){
    *(p++) = '1';
    }

    p -= 10;

    for (int i =0; i < 10; i++){
    cout << *(p++);
    }

}