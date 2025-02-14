#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int n) {
        data = n;
        next = nullptr;
    }
};

struct LinkedList {
    Node* head;
    LinkedList(): head(nullptr) {}

    bool check(int n) {
        Node *cur = head;

        while (cur != nullptr) {
            if (cur->data == n) 
                return true;
            cur = cur->next;
        }

        return false;
    }

    void add(int n) {
        if (check(n)) return;
        Node *node = new Node(n);
        
        if (head == nullptr) {
            head = node;
            return;
        }

        Node *cur = head;
        while (cur->next != nullptr)
            cur = cur->next;
        cur->next = node;
    }

    void print() {
        Node *cur = head;
        
        while (cur != nullptr) {
            cout << cur->data << " ";
            cur = cur->next;
        }
    }
};

int main() {
    int x;
    LinkedList list;

    while (cin >> x)
        list.add(x);

    list.print();
    return 0;
}