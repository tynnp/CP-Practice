#include <iostream>
using namespace std;

struct SoMoi {
    int num;

    int tongChuSo() {
        int res = 0, tmp = num;
        while (tmp > 0) 
            res += tmp % 10,
            tmp /= 10;
        return res;
    }
};

istream& operator >> (istream &in, SoMoi &soMoi) {
    in >> soMoi.num;
    return in;
}

ostream& operator << (ostream &out, SoMoi soMoi) {
    out << "[SoMoi] " << soMoi.num;
    return out;
}

bool operator > (SoMoi a, SoMoi b) {
    return a.tongChuSo() > b.tongChuSo();
}

SoMoi operator + (SoMoi a, SoMoi b) {
    SoMoi res;
    res.num = a.tongChuSo() + b.tongChuSo();
    return res;
}

int operator + (SoMoi s, int n) {
    return n + s.tongChuSo();
}

bool operator == (SoMoi a, SoMoi b) {
    return a.num == b.num;
}

template<typename T>
struct Array {
    int size = 0;
    T data[1000];

    int tongDaySo() {
        int res = 0;
        for (int i = 0; i < size; i++)
            res = data[i] + res;
        return res;
    }
};

template<typename T>
istream& operator >> (istream &in, Array<T> &arr) {
    while (in >> arr.data[arr.size]) 
        arr.size++;
    return in;
}

template<typename T>
ostream& operator << (ostream &out, Array<T> arr) {
    T max = arr.data[0];
    int cnt = 1;

    for (int i = 1; i < arr.size; i++) {
        cnt += (max == arr.data[i]);
        if (arr.data[i] > max) 
            max = arr.data[i], cnt = 1;
    }

    out << max << endl;
    out << cnt << endl;
    return out;
}

template<typename T>
void check(char c) {
    Array<T> arr;
    cin >> arr;
    cout << arr;
    if (c == 'M') cout << "[SoMoi]";
    cout << arr.tongDaySo();
    return;

}

int main() {
    char c; 
    cin >> c;

    switch (c) {
        case 'N': check<int>('N'); break;
        case 'M': check<SoMoi>('M'); break;
    }

    return 0;
}