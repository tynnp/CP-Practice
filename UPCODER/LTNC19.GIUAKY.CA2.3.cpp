#include <iostream>
using namespace std;

struct SoLaMa {
    string kt[11] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X"};
    int val;
};

template<typename T>
struct Array {
    int size = 0;
    T data[100];
    T getMax();
    T getMin();
    int getSum();
};

istream &operator >> (istream &in, SoLaMa &slm);
ostream &operator << (ostream &out, SoLaMa slm);
bool operator < (SoLaMa a, SoLaMa b);
int operator + (SoLaMa a, SoLaMa b);
int operator + (SoLaMa slm, int x);

template<typename T>
istream &operator >> (istream &in, Array<T> &arr);

template<typename T>
ostream &operator << (ostream &out, Array<T> arr);

int main() {
    char c;
    Array<int> a;
    Array<SoLaMa> b; 

    while (cin >> c) {
        if (c == 'N') cin >> a;
        if (c == 'L') cin >> b;
    }

    cout << a << endl << b;
    return 0;
}

istream &operator >> (istream &in, SoLaMa &slm) {
    string s;
    in >> s;
    
    for (int i = 1; i <= 10; i++)
        if (slm.kt[i] == s) 
            slm.val = i;
    
    return in;
}

ostream &operator << (ostream &out, SoLaMa slm) {
    out << slm.val;
    return out;
}

bool operator < (SoLaMa a, SoLaMa b) {
    return a.kt[a.val] < b.kt[b.val];
}

int operator + (SoLaMa a, SoLaMa b) {
    return a.val + b.val;
}

int operator + (SoLaMa slm, int x) {
    return slm.val + x;
}

template<typename T>
istream &operator >> (istream &in, Array<T> &arr) {
    in >> arr.data[arr.size];
    arr.size += 1;
    return in;
}

template<typename T>
ostream &operator << (ostream &out, Array<T> arr) {
    if (arr.size == 0) {
        out << "khong co\nkhong co";
        return out;
    }

    out << arr.getMin() << endl;
    out << arr.getSum();
    return out;
}

template<typename T>
T Array<T>::getMax() {
    T res = data[0];
    for (int i = 1; i < size; i++)
        if (res < data[i])
            res = data[i];
    return res;
}
 
template<typename T>
T Array<T>::getMin() {
    T res = data[0];
    for (int i = 1; i < size; i++)
        if (data[i] < res)
            res = data[i];
    return res;
}

template<typename T>
int Array<T>::getSum() {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum = data[i] + sum;
    return sum;
}