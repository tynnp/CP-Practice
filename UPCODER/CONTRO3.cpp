#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int n): data(n), next(nullptr) {}
};

struct Linkedlist {
    Node* head;
    Linkedlist(): head(nullptr) {}

    void add(int n) {
        Node* node = new Node(n);

        if (this->head == nullptr) {
            this->head = node;
            return;
        }

        Node* tmp = this->head;
        while (tmp->next != nullptr)
            tmp = tmp->next;
        tmp->next = node;
    }

    int size() {
        int cnt = 0;
        Node* tmp = this->head;
        while (tmp != nullptr) 
            cnt += 1,
            tmp = tmp->next;
        return cnt;
    }

    void insert(int a, int k) {
        Node* node = new Node(a);
        Node* tmp = this->head;
        int index = 1;

        if (k > this->size() + 1) return;

        if (k == 1) {
            node->next = this->head;
            this->head = node;
            return;
        }

        while (tmp != nullptr && index != k-1) {
            index += 1;
            tmp = tmp->next;
        }

        if (tmp != nullptr) {
            node->next = tmp->next;
            tmp->next = node;
        }
    }

    void print() {
        Node* tmp = this->head;
        while (tmp != nullptr) {
            cout << tmp->data << " ";
            tmp = tmp->next;
        }
    }

    ~Linkedlist() {
        Node* tmp = this->head;
        Node* next;

        while (tmp != nullptr) {
            next = tmp->next;
            delete tmp;
            tmp = next;
        }

        this->head = nullptr;
    }
}; 

int main() {
    Linkedlist list;
    int x, n, a, k;
    cin >> n >> a >> k;

    for (int i = 0; i < n; i++) {
        cin >> x;
        list.add(x);
    }

    list.insert(a, k);
    cout << list.size() << endl;
    list.print();
    return 0;
}