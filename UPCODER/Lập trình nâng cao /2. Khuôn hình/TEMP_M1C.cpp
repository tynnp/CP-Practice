#include <iostream>
using namespace std;

template<typename T>
struct M1C {
    int size;
    T items[100];
    
    // int tong()
    T tong() {
        T res = items[0];
        for (int i = 1; i < size; i++)
            res += items[i];
        return res;
    }
    
    void nhap() {
        size = 0;
        
        while (cin >> items[size]) {
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
