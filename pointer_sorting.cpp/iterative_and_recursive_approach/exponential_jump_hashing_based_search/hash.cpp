#include <iostream>
using namespace std;

struct Node {
    int key;
    Node* next;
};

int hashFunction(int key) {
    return key % 10;
}

void insert(Node* table[], int key) {
    int index = hashFunction(key);
    Node* newNode = new Node{key, nullptr};
    
    for (Node* current = table[index]; current != nullptr; current = current->next) {
        if (current->next == nullptr) {
            current->next = newNode;
            return;
        }
    }
    
    table[index] = newNode;
}

bool search(Node* table[], int key) {
    int index = hashFunction(key);
    
    for (Node* current = table[index]; current != nullptr; current = current->next) {
        if (current->key == key) {
            return true;
        }
    }
    return false;
}

void remove(Node* table[], int key) {
    int index = hashFunction(key);
    
    Node* prev = nullptr;
    for (Node* current = table[index]; current != nullptr; current = current->next) {
        if (current->key == key) {
            if (prev == nullptr) {
                table[index] = current->next;
            } else {
                prev->next = current->next;
            }
            delete current;
            return;
        }
        prev = current;
    }
}

void display(Node* table[]) {
    for (int i = 0; i < 10; i++) {
        cout << "Index " << i << ": ";
        for (Node* current = table[i]; current != nullptr; current = current->next) {
            cout << current->key << " ";
        }
        cout << endl;
    }
}

int main() {
    Node* table[10] = {nullptr};
    
    insert(table, 10);
    insert(table, 20);
    insert(table, 15);
    insert(table, 7);
    
    display(table);
    
    cout << "Searching for 15: " << (search(table, 15) ? "Found" : "Not Found") << endl;
    cout << "Searching for 30: " << (search(table, 30) ? "Found" : "Not Found") << endl;
    
    remove(table, 15);
    cout << "After removing 15: " << endl;
    display(table);
    
    return 0;
}
