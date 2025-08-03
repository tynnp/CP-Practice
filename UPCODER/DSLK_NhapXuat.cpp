#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val): data(val), next(nullptr) {}
};

void add(Node* &head, int val) {
    Node* node = new Node(val);
    Node* cur = head;
    
    if (!head) {
        head = node;
        return;
    } 
    
    while (cur->next) 
        cur = cur->next;
    cur->next = node;
}

void print(Node* &head) {
    Node* cur = head;
    cout << "DSLK ban dau: ";
    
    while (cur) {
        cout << cur->data << ' ';
        cur = cur->next;
    }
}

int main() {
    int x;
    Node* head = nullptr;
    
    while (cin >> x && x != -1) 
        add(head, x);
    
    print(head);
    return 0;
}