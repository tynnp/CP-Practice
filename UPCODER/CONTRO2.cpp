#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int n): data(n), next(nullptr) {}
};

struct LinkedList {
    Node* head;

    LinkedList(): head(nullptr) {}

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

    void remove(int n) {
        Node* tmp = this->head;

        while (tmp != nullptr && tmp->data == n) {
            this->head = tmp->next;
            Node* nodeToRemove = tmp;
            tmp = tmp->next;
            delete nodeToRemove;
        }

        while (tmp != nullptr && tmp->next != nullptr) {
            if (tmp->next->data == n) {
                Node* nodeToRemove = tmp->next;
                tmp->next = tmp->next->next;
                delete nodeToRemove;
            } else tmp = tmp->next;
        }
    }

    int length() {
        Node* tmp = this->head;
        int length = 0;

        while (tmp != nullptr) {
            length += 1;
            tmp = tmp->next;
        }

        return length;
    }

    void xuatDanhSach() {
        Node* tmp = this->head;
        while (tmp != nullptr) {
            cout << tmp->data << " ";
            tmp = tmp->next;
        }
    }

    ~LinkedList() {
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
    LinkedList list;
    int x, n, k; 
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> x;
        list.add(x);
    }

    list.remove(k);
    cout << list.length() << endl;
    list.xuatDanhSach();

    return 0;
}