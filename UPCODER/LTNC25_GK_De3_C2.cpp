#include <iostream>
#include <iomanip>
using namespace std;

struct NhanVien {
    string maSo;
    double heSoLuong;
};

struct Node {
    NhanVien data;
    Node* next;
};

Node* creNode(NhanVien p) {
    Node* node = new Node();
    node->data = p;
    node->next = NULL;
    return node;
}

void add(Node*& head, NhanVien p) {
    Node* node = creNode(p);
    
    if (head == NULL) {
        head = node;
        return;
    }
    
    Node* cur = head;
    while (cur->next != NULL)
        cur = cur->next;
    cur->next = node;
}

void print(Node*& head) {
    Node* cur = head;
    
    while (cur != NULL) {
        cout << fixed << setprecision(2);
        cout << "{" << cur->data.maSo << " - " << cur->data.heSoLuong << "}\n";
        cur = cur->next;
    }
}

NhanVien getMax(Node*& head) {
    Node* cur = head;
    NhanVien res = cur->data;
    cur = cur->next;
    
    while (cur != NULL) {
        if (res.heSoLuong < cur->data.heSoLuong)
            res = cur->data;
        cur = cur->next;
    }
    
    return res;
}

void erase(Node*& head, string maSo) {
    Node* cur = head;
    Node* prev = NULL;

    while (cur != NULL) {
        if (cur->data.maSo == maSo) {
            if (prev == NULL) 
                head = cur->next;
            else 
                prev->next = cur->next;
            delete cur; 
            return;    
        }
        prev = cur;
        cur = cur->next;
    }
}

int main() {
    int n;
    string maSo;
    double heSoLuong;
    Node* head = NULL;
    
    cin >> n;
    while (n--) {
        cin >> maSo >> heSoLuong;
        NhanVien p;
        p.maSo = maSo;
        p.heSoLuong = heSoLuong;
        add(head, p);
    }
    
    cin >> maSo;
    erase(head, maSo);
    
    NhanVien spGiaMax = getMax(head);
    cout << fixed << setprecision(2);
    cout << "{" << spGiaMax.maSo << " - " << spGiaMax.heSoLuong << "}\n";
    print(head);
    return 0;
}