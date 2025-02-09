#include <iostream>
#include <iomanip>
using namespace std;

struct HCN {
    double dai, rong;

    double chuVi() {
        return (dai + rong) * 2;
    }
};

istream& operator >> (istream &in, HCN &hcn) {
    in >> hcn.dai >> hcn.rong;
    return in;
} 

ostream& operator << (ostream &out, HCN hcn) {
    out << "[HCN] " << hcn.dai << "," << hcn.rong;
    return out;
}

bool operator < (HCN a, HCN b) {
    return a.chuVi() < b.chuVi();
}

double operator + (HCN a, double n) {
    return a.chuVi() + n;
}

bool operator == (HCN hcn, int n) {
    return true;
}

template <typename T>
struct Array {
    int size = 0;
    T data[1000];

    T min() {
        T res = data[0];
        for (int i = 1; i < size; i++)
            if (data[i] < res)
                res = data[i];
        return res;
    }

    double sum() {
        double res = 0;
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
void check(char c) {
    Array<T> arr;
    cin >> arr;
    cout << arr.min() << endl;
    if (c == 'H') cout << fixed << setprecision(1);
    cout << arr.sum();
}

int main() {
    char c; 
    cin >> c;
    
    switch (c) {
        case 'N': check<int>('N'); break;
        case 'H': check<HCN>('H'); break;
    }

    return 0;
}