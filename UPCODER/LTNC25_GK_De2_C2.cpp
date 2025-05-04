#include <iostream>
#include <iomanip>
using namespace std;

struct SinhVien {
    string maSo;
    double diemTB;
};

struct Node {
    SinhVien data;
    Node* next;
};

Node* creNode(SinhVien p) {
    Node* node = new Node();
    node->data = p;
    node->next = NULL;
    return node;
}

void add(Node*& head, SinhVien p) {
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
        cout << "{" << cur->data.maSo << " - " << cur->data.diemTB << "}\n";
        cur = cur->next;
    }
}

SinhVien getMin(Node*& head) {
    Node* cur = head;
    SinhVien res = cur->data;
    cur = cur->next;
    
    while (cur != NULL) {
        if (res.diemTB > cur->data.diemTB)
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
    double diemTB;
    Node* head = NULL;
    
    cin >> n;
    while (n--) {
        cin >> maSo >> diemTB;
        SinhVien p;
        p.maSo = maSo;
        p.diemTB = diemTB;
        add(head, p);
    }
    
    cin >> maSo;
    erase(head, maSo);
    
    SinhVien spGiaMax = getMin(head);
    cout << fixed << setprecision(2);
    cout << "{" << spGiaMax.maSo << " - " << spGiaMax.diemTB << "}\n";
    print(head);
    return 0;
}