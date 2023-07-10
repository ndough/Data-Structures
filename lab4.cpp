#include <iostream>
using namespace std;

int binary(int n)
{
    for (int i = 0; i < n; i++)
    {
        return 0;
    }

    if (n > 1)
    {
        binary(n-1);
        return 10 * n - 1;
        return 10 * n - 1 + 1;
    }
}

int main()
{
    binary(3);
}

struct Car {
    int year;
    string brand;
    double price;
};

class CarRecord {
    Car carInventory[100];
    int size = 0;

    public:
    void addCar (int year, string brand, double price);
    void printAll ();
};

void CarRecord::addCar(int year, string brand, double price){
    carInventory[size].year = year;
    carInventory[size].brand = brand;
    carInventory[size].price = price;
}

void CarRecord::printAll (){
    for (int i = 0; i < size; i++){
        cout << carInventory[i].year;
    }
}