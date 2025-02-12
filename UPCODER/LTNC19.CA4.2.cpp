#include <iostream>
using namespace std;

struct Time {
    int gio, phut, giay;

    int timestamp() {
        return gio*3600 + phut*60 + giay;
    }
};

istream &operator >> (istream &in, Time &t) {
    in >> t.gio >> t.phut >> t.giay;
    return in;
}

ostream &operator << (ostream &out, Time t) {
    out << t.gio << ":" << t.phut << ":" << t.giay;
    return out;
} 

bool operator < (Time a, Time b) {
    return a.timestamp() < b.timestamp();
}

Time operator + (Time a, Time b) {
    Time res;
    res.gio = a.gio + b.gio;
    res.phut = a.phut + b.phut;
    res.giay = a.giay + b.giay;
    return res;
}

int operator + (Time t, int n) {
    return t.timestamp() + n;
}

template<typename T>
struct Array {
    int size = 0;
    T values[100];

    T maxElement() {
        T res = values[0];
        for (int i = 1; i < size; i++)  
            if (res < values[i]) res = values[i];
        return res;
    }

    int sumElement() {
        int res = values[0] + 0;
        for (int i = 1; i < size; i++)  
            res = values[i] + res;
        return res;
    }

    bool empty() {
        return size == 0;
    }
};

template<typename T>
istream &operator >> (istream &in, Array<T> &arr) {
    in >> arr.values[arr.size++]; 
    return in;
}

int main() {
    char c;
    Array<int> arrInt;
    Array<Time> arrTime;

    while (cin >> c) {
        switch (c) {
            case 'N': cin >> arrInt; break;
            case 'T': cin >> arrTime; break;
        }
    }

    if (arrTime.empty()) cout << "khong co\nkhong co";
    else cout << arrTime.maxElement() << endl << arrTime.sumElement();

    cout << endl;
    if (arrInt.empty()) cout << "khong co\nkhong co";
    else cout << arrInt.maxElement() << endl << arrInt.sumElement();

    return 0;
}