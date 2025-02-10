#include <bits/stdc++.h>
using namespace std;

bool square(int n) {
    return sqrt(n) == (int) sqrt(n);
}

struct Node {
    int data;
    Node* next;

    Node(int val): data(val), next(nullptr) {};
};

struct List {
    Node* head;
    List(): head(nullptr) {};

    ~List() {
        while (head != nullptr) {
            Node* del = head;
            head = head->next;
            delete del;
        }
    }

    void add(int val) {
        Node* node = new Node(val);

        if (head == nullptr) {
            head = node;
            return;
        }

        Node* cur = head;
        while (cur->next != nullptr)
            cur = cur->next;
        cur->next = node;
    }

    void rem(int val) {
        if (head == nullptr)
            return;

        if (head->data == val) {
            Node* del = head;
            head = head->next;
            delete del;
            return;
        }

        Node* prev = head;
        Node* cur = head->next;

        while (cur != nullptr) {
            if (cur->data == val) {
                prev->next = cur->next;
                delete cur;
                return;  
                
            }

            prev = cur;
            cur = cur->next;
        }
    }

    void remSqua() {
        while (head != nullptr && square(head->data)) {
            Node* del = head;
            head = head->next;
            delete del;
        }

        Node* cur = head;
        while (cur != nullptr && cur->next != nullptr) {
            if (square(cur->next->data)) {
                Node* del = cur->next;
                cur->next = cur->next->next;
                delete del;
                continue;
            } 
            
            cur = cur->next;
        }
    }

    int sumSquare() {
        Node* cur = head;
        int res = 0;

        while (cur != nullptr) {
            if (square(cur->data))
                res += cur->data;
            cur = cur->next;
        }

        return res;
    }

    void print() {
        Node* cur = head;

        while (cur != nullptr) {
            cout << cur->data << ' ';
            cur = cur->next;
        }
    }
};

int main() {
    int n, x;
    List list;

    cin >> n;
    while (n--) {
        cin >> x;
        list.add(x);
    }

    cout << list.sumSquare() << endl;
    list.remSqua();
    list.print();

    return 0;
}#include <bits/stdc++.h>
using namespace std;

bool square(int n) {
    return sqrt(n) == (int) sqrt(n);
}

struct Node {
    int data;
    Node* next;

    Node(int val): data(val), next(nullptr) {};
};

struct List {
    Node* head;
    List(): head(nullptr) {};

    ~List() {
        while (head != nullptr) {
            Node* del = head;
            head = head->next;
            delete del;
        }
    }

    void add(int val) {
        Node* node = new Node(val);

        if (head == nullptr) {
            head = node;
            return;
        }

        Node* cur = head;
        while (cur->next != nullptr)
            cur = cur->next;
        cur->next = node;
    }

    void rem(int val) {
        if (head == nullptr)
            return;

        if (head->data == val) {
            Node* del = head;
            head = head->next;
            delete del;
            return;
        }

        Node* prev = head;
        Node* cur = head->next;

        while (cur != nullptr) {
            if (cur->data == val) {
                prev->next = cur->next;
                delete cur;
                return;  
                
            }

            prev = cur;
            cur = cur->next;
        }
    }

    void remSqua() {
        while (head != nullptr && square(head->data)) {
            Node* del = head;
            head = head->next;
            delete del;
        }

        Node* cur = head;
        while (cur != nullptr && cur->next != nullptr) {
            if (square(cur->next->data)) {
                Node* del = cur->next;
                cur->next = cur->next->next;
                delete del;
                continue;
            } 
            
            cur = cur->next;
        }
    }

    int sumSquare() {
        Node* cur = head;
        int res = 0;

        while (cur != nullptr) {
            if (square(cur->data))
                res += cur->data;
            cur = cur->next;
        }

        return res;
    }

    void print() {
        Node* cur = head;

        while (cur != nullptr) {
            cout << cur->data << ' ';
            cur = cur->next;
        }
    }
};

int main() {
    int n, x;
    List list;

    cin >> n;
    while (n--) {
        cin >> x;
        list.add(x);
    }

    cout << list.sumSquare() << endl;
    list.remSqua();
    list.print();

    return 0;
}