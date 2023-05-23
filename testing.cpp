#include <iostream>
#include <cmath>
using namespace std;

class Student {
    string stored;

    public: 
        string get_name(){
            return stored;
        }
            Student();

        Student(string inputName){
            this->stored = inputName;
        };
};

int main(){

    string name;

    Student* student1 = new Student("Sophie");
    cout << student1->get_name();

}