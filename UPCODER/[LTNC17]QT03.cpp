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

struct List {
    Node *head;

    List() {
        head = nullptr;
    }

    ~List() {
        while (head != nullptr) {
            Node* del = head;
            head = head->next;
            delete del;
        }
    }

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

    void erase(int n) {
        Node *cur = head;

        while (head->data == n) {
            Node *del = head;
            head = head->next;
            delete del;
        }

        while (cur->next != nullptr) {
            if (cur->next->data == n) {
                Node *del = cur->next;
                cur->next = cur->next->next;
                delete del;
                continue;
            } 

            cur = cur->next;
        }
    }

    int size() {
        int cnt = 0;
        Node *cur = head;
        while (cur != nullptr) 
            cnt++, cur = cur->next;
        return cnt;
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
    int n, k, x;
    List list;
    cin >> n >> k;

    while (n--) {
        cin >> x;
        list.add(x);
    }

    list.erase(k);
    cout << list.size() << endl;
    list.print();

    return 0;
}