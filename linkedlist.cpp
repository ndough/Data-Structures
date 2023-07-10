#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

class LinkedList {
    private:
        Node *head;
    public:
        LinkedList(): head(nullptr){};

        ~LinkedList() {
            Node* current = head;
            while (current != nullptr){
                Node *next = current->next;
                delete current;
                current = next;
            }
        }

        void insertAfter(int searchData, int newData){
            Node* current = head;
            while (current != nullptr){
                if (current->data = searchData){
                    Node* temp = new Node;
                    temp->data= newData;
                    temp->next=current->next;
                    current->next = temp;
                    return;
                }
                current = current->next;
            }
        }

        void deleteNode (int deleteData){
            Node* current = head;
            Node* prev = nullptr;
            while (current != nullptr){
                if (current->data == deleteData){
                    if(prev == nullptr){
                        head = current->next;
                    }
                    else{
                    prev->next = current->next;
                    }
                    delete current;
                }
                prev = current;
                current = current->next;
                return;
            }
        }


};

int main(){

    return 0;
}