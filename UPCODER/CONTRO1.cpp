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

    int max() {
        Node* tmp = this->head;
        int max = tmp->data;

        while (tmp != nullptr) {
            if (tmp->data > max) 
                max = tmp->data;
            tmp = tmp->next;
        }

        return max;
    }

    int min() {
        Node* tmp = this->head;
        int min = tmp->data;

        while (tmp != nullptr) {
            if (tmp->data < min) 
                min = tmp->data;
            tmp = tmp->next;
        }

        return min;
    }

    void xuatViTriMax() {
        int max = this->max();
        Node* tmp = this->head;
        int index = 1;

        while (tmp != nullptr) {
            if (tmp->data == max) 
                cout << index << " ";
            tmp = tmp->next;
            index += 1;
        }

        cout << endl;
    }

    void xuatViTriMin() {
        int min = this->min();
        Node* tmp = this->head;
        int index = 1;

        while (tmp != nullptr) {
            if (tmp->data == min) 
                cout << index << " ";
            tmp = tmp->next;
            index += 1;
        }

        cout << endl;
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

    int x, n; 
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        list.add(x);
    }

    cout << list.max() << endl; 
    list.xuatViTriMax();

    cout << list.min() << endl; 
    list.xuatViTriMin();

    return 0;
}