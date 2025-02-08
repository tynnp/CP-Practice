#include <iostream>
using namespace std;

template<typename T>
struct M1C {
    int size;
    T data[100];
    
    // int tong()
    T tong() {
        T res = data[0];
        for (int i = 1; i < size; i++)
            res += data[i];
        return res;
    }
    
    void nhap() {
        size = 0;
        
        while (cin >> data[size]) {
            size++;
        }
    }
    
    void xuat() {
        cout << tong();
    }
};

int main() {
    M1C<int> a;
    a.nhap();
    a.xuat();
    return 0;
}