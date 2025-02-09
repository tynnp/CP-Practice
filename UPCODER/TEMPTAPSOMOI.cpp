#include <iostream>
using namespace std;

class TapSoMoi {
private:
    int x, y, z, t;
    
public:
    TapSoMoi() {
        x = 0; 
        y = 0; 
        z = 0; 
        t = 0;
    }

    TapSoMoi(int a, int b, int c, int d) {
        x = a;
        y = b;
        z = c;
        t = d;
    }

    friend istream& operator >> (istream &in, TapSoMoi &tsm) {
        in >> tsm.x >> tsm.y >> tsm.z >> tsm.t;
        return in;
    }

    friend ostream& operator << (ostream &out, TapSoMoi tsm) {
        out << "[TapSoMoi] " << tsm.x << ";" << tsm.y << ";" << tsm.z << ";" << tsm.t;
        return out;
    }

    TapSoMoi operator + (TapSoMoi other) {
        TapSoMoi res;
        res.x = x + other.x;
        res.y = y + other.y;
        res.z = z + other.z;
        res.t = t + other.t;
        return res;
    }

    bool operator < (TapSoMoi other) {
        int n = x + y + z + t;
        int m = other.x + other.y + other.z + other.t;
        return n < m;
    }

    TapSoMoi& operator = (const TapSoMoi &other) {
        x = other.x;
        y = other.y;
        z = other.z;
        t = other.t;
        return *this;
    }

    TapSoMoi& operator++() {
        ++x;
        ++t;
        return *this;
    }
};

template<typename T>
class Array {
public:
    int size = 0;
    T values[1000];

    friend istream& operator >> (istream &in, Array &arr) {
        T n; 
        while (cin >> n) 
            arr.values[arr.size++] = n;
        return in;
    }

    T tongDaySo() {
        T res = values[0];
        for (int i = 1; i < size; i++)
            res = values[i] + res;
        return res;
    }

    friend ostream& operator << (ostream &out, Array arr) {
        T max = arr.values[0];

        for (int i = 1; i < arr.size; i++) 
            if (max < arr.values[i]) 
                max = arr.values[i];

        out << max << endl;
        return out;
    }
};

int main() {
    char c; 
    cin >> c;
    Array<int> arrInt;
    Array<TapSoMoi> arrTapSoMoi;

    if (c == 'A') {
        cin >> arrInt;
        cout << arrInt;
        cout << arrInt.tongDaySo();

    } 
    
    if (c == 'B') {
        cin >> arrTapSoMoi;
        cout << arrTapSoMoi;
        cout << arrTapSoMoi.tongDaySo();
    }

    return 0;
}