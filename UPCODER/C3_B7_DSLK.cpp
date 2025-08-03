#include <iostream>
#include <sstream>
using namespace std;

class Poly;

class Node {
private:
    friend class Poly;
    int c, e;
    Node* next;

public:
    Node(int c, int e) : c(c), e(e), next(nullptr) {}
};

class Poly {
private:
    Node* head;

public:
    Poly() : head(nullptr) {}

    void push_back(int c, int e) {
        if (c == 0) return;
        Node* n = new Node(c, e);

        if (!head || head->e < e) {
            n->next = head;
            head = n;
            return;
        } 
        
        Node* cur = head;
        Node* prev = nullptr;

        while (cur && cur->e > e) {
            prev = cur;
            cur = cur->next;
        }

        if (cur && cur->e == e) {
            cur->c += c;
            delete n;

            if (cur->c == 0) {
                if (prev) prev->next = cur->next;
                else head = cur->next;
                delete cur;
            }

        } else {
            n->next = cur;
            if (prev) prev->next = n;
            else head = n;
        }
    }

    void print(string end="") {
        Node* cur = head;
        bool first = true;

        while (cur) {
            if (!first && cur->c > 0) cout << "+";

            if (cur->e == 0) {
                cout << cur->c;
            } else {
                if (cur->c == -1) cout << "-";
                else if (cur->c != 1) cout << cur->c;
                cout << "x";
                if (cur->e != 1) cout << "^" << cur->e;
            }

            first = false;
            cur = cur->next;
        }

        if (first) cout << "0";
        cout << end;
    }

    Poly deriv() {
        Poly res;
        Node* cur = head;

        while (cur) {
            if (cur->e != 0)
                res.push_back(cur->c * cur->e, cur->e - 1);
            cur = cur->next;
        }

        return res;
    }

    int eval(int x) {
        int s = 0;
        Node* cur = head;

        while (cur) {
            int p = 1;

            for (int i = 0; i < cur->e; i++)
                p *= x;

            s += cur->c * p;
            cur = cur->next;
        }

        return s;
    }

    Poly add(Poly o) {
        Poly res;
        Node* cur = head;

        while (cur) {
            res.push_back(cur->c, cur->e);
            cur = cur->next;
        }

        cur = o.head;
        while (cur) {
            res.push_back(cur->c, cur->e);
            cur = cur->next;
        }

        return res;
    }
};

int main() {
    Poly F1, F2;
    string s;
    int c, e, x;

    getline(cin, s);
    stringstream ss(s);
    while (ss >> c >> e)
        F1.push_back(c, e);

    getline(cin, s);
    ss.clear();
    ss = stringstream(s);

    while (ss >> c >> e)
        F2.push_back(c, e);

    cin >> x;

    Poly F3 = F1.add(F2);
    Poly dF3 = F3.deriv();

    F1.print(" ");
    F2.print("\n"); 
    dF3.print("\n"); 
    cout << F3.eval(x) << endl;
    F3.print();

    return 0;
}