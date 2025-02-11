#include <iostream>
#include <iomanip>
using namespace std;

class HCN {
private:
    double dai, rong;

public:
    HCN() {
        dai = rong = 0;
    }

    HCN(double dai, double rong) {
        this->dai = dai;
        this->rong = rong;
    }

    HCN(const HCN &other) {
        dai = other.dai;
        rong = other.rong;
    }

    friend istream& operator >> (istream &in, HCN &hcn) {
        in >> hcn.dai >> hcn.rong;
        return in;
    } 

    friend ostream& operator << (ostream &out, HCN hcn) {
        out << "[HCN] " << hcn.dai << "," << hcn.rong;
        return out;
    }

    double chuVi() {
        return (dai + rong) * 2;
    }

    bool operator < (HCN other) {
        return chuVi() < other.chuVi();
    }

    double operator + (double n) {
        return chuVi() + n;
    }
};

bool operator == (HCN hcn, int n) {
    return true;
}

template <typename T>
class Array {
private:
    int size = 0;
    T data[1000];

public:
    friend istream& operator >> (istream &in, Array &arr) {
        T n; 
        while (in >> n)
            arr.data[arr.size++] = n;
        return in;
    }

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
void check(char c) {
    Array<T> arr;
    cin >> arr;
    cout << arr.min() << endl;
    if (c == 'H') cout << fixed << setprecision(1);
    cout << arr.sum();
    return;
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