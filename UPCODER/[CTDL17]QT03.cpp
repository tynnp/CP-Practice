#include <iostream>
using namespace std;

struct Node {
    char data;
    Node* next;
    Node(char c): data(c), next(nullptr) {} 
};

struct List {
    Node* head;
    List(): head(nullptr) {}

    void add(char c) {
        Node* node = new Node(c);
        Node* cur = this->head;

        if (cur == nullptr) {
            this->head = node;
            return;
        }

        while (cur->next != nullptr)
            cur = cur->next;
        cur->next = node;
    }

    void full() {
        if (this->head->data != 'A') {
            Node* dau = new Node('A');
            this->head = dau;
        }

        Node* cur = this->head;
        while (cur->next != nullptr) 
            cur = cur->next;
        
        if (cur->data != 'Z') {
            Node* cuoi = new Node('Z');
            cur->next = cuoi;
        }

        while (cur != nullptr && cur->next != nullptr) {
            if (cur->data != cur->next->data-1) {
                Node* node = new Node(cur->data+1);
                node->next = cur->next;
                cur->next = node;
            }
            cur = cur->next;
        }
    }

    void print() {
        Node* cur = this->head;

        while (cur != nullptr) {
            cout << cur->data;
            cur = cur->next;
        }
        
        cout << endl;
    }
};

int main() {
    List list;
    int n;
    char c;
    cin >> n;

    while (n--) {
        cin >> c;
        list.add(c);
    }

    list.print();
    list.full();
    list.print();
    return 0;
}