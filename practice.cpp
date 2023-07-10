#include <iostream>
using namespace std;

int main(){
    int i, j;
    int *ip, *jp;
    i = 10;
    j = 20;
    ip = &i;
    jp = &j;
    cout << ip << endl << jp << endl << *ip << endl << *jp;
}