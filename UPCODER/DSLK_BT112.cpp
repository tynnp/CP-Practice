#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int n) : data(n), next(nullptr) {}
};

struct LinkedList {
    Node* head;
    LinkedList() : head(nullptr) {}


    void add(int n) {
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
    

    void remDup() {
        Node *cur = head;
        while (cur != nullptr && cur->next != nullptr) {
            if (cur->data == cur->next->data) {
                Node *dup = cur->next;
                cur->next = dup->next;
                delete dup;
            }
            else {
                cur = cur->next;
            }
        }
    }
    
    void print() {
        Node *cur = head;
        while (cur != nullptr) {
            cout << cur->data << " ";
            cur = cur->next;
        }
    }

    ~LinkedList() {
        while (head != nullptr) {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    int x, n;
    LinkedList list;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        list.add(x);
    }
    
    list.remDup();
    list.print();
    
    return 0;
}
