#include <iostream>
using namespace std;

struct PhanSo {
    int tu, mau;
};

istream &operator >> (istream &in, PhanSo &p) {
    in >> p.tu >> p.mau;
    return in;
}

ostream &operator << (ostream &out, PhanSo p) {
    out << p.tu << '/' << p.mau;
    return out;
}

bool operator < (PhanSo a, PhanSo b) {
    return a.tu * b.mau < a.mau * b.tu;
}

template<typename T>
struct Array {
    int size = 0;
    T items[100];
    
    T timMin() {
        T res = items[0];
        for (int i = 1; i < size; i++)
            if (items[i] < res)
                res = items[i];
        return res;
    }
};

template<typename T>
istream &operator >> (istream &in, Array<T> &arr) {
    in >> arr.items[arr.size];
    arr.size++;
    return in;
}

template<typename T> 
ostream &operator << (ostream &out, Array<T> arr) {
    if (arr.size == 0) {
        out << "khong co";
    } else {
        out << arr.timMin();
    }
}

int main() {
    char kt;
    Array<int> a;
    Array<float> b;
    Array<PhanSo> c;
    
    while (cin >> kt) {
        if (kt == 'a') cin >> a;
        if (kt == 'b') cin >> b;
        if (kt == 'c') cin >> c;
    }
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    
    return 0;
}





