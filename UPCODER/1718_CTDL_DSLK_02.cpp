#include <iostream>
#include <cmath>
using namespace std;

struct Node {
    int data;
    Node* next;
};

bool soNguyenTo(int);
bool soChinhPhuong(int);
bool soHoanChinh(int);
void themNut(Node*&, int);
void daySoNguyenTo(Node*, Node*&);
void daySoChinhPhuong(Node*, Node*&);
void daySoHoanChinh(Node*, Node*&);
void inDanhSach(Node*);
void inNguocDanhSach(Node*);

int main() {
    int n; 
    Node* list = nullptr;
    while (cin >> n) themNut(list, n);
    Node* listNT = nullptr;
    Node* listCP = nullptr;
    Node* listHC = nullptr;
    daySoNguyenTo(list, listNT);
    daySoChinhPhuong(list, listCP);
    daySoHoanChinh(list, listHC);
    return 0;
}

bool soNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

bool soChinhPhuong(int n) {
    return ((int) sqrt(n)*sqrt(n) == n);
}

bool soHoanChinh(int n) {
    int res = 0;
    for (int i = 1; i <= n/2; i++) 
        if (n % i == 0) res += i;
    return (res == n);
}

void themNut(Node*& head, int n) {
    Node* node = new Node;
    node->data = n;
    node->next = nullptr;

    if (head == nullptr) {
        head = node;
        return;
    }

    Node* last = head;
    while (last->next != nullptr) 
        last = last->next;
    last->next = node;
}

void daySoNguyenTo(Node* head, Node*& list) {
    while (head != nullptr) {
        if (soNguyenTo(head->data)) 
            themNut(list, head->data);
        head = head->next;
    } inDanhSach(list); cout << endl;
}

void daySoChinhPhuong(Node* head, Node*& list) {
    while (head != nullptr) {
        if (soChinhPhuong(head->data))
            themNut(list, head->data);
        head = head->next;
    } inDanhSach(list); cout << endl;
}

void daySoHoanChinh(Node* head, Node*& list) {
    while (head != nullptr) {
        if (soHoanChinh(head->data))
            themNut(list, head->data);
        head = head->next;
    } inDanhSach(list);
}

void inDanhSach(Node* head) {
    if (head == nullptr) {
        cout << "NULL";
        return;
    }

    bool check = false;
    while (head != nullptr) {
        if (check) cout << " ";
            cout << head->data; 
        head = head->next; check = true;
    }
}

void inNguocDanhSach(Node* head) {
    if (head == nullptr) {
        cout << "NULL";
        return;
    }

    Node* prev = nullptr;
    Node* cur = head;
    Node* next = nullptr;

    while (cur != nullptr) {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }

    bool check = false;
    while (prev != nullptr) {
        if (check) cout << " ";
        cout << prev->data;
        prev = prev->next; check = true;
    }
}