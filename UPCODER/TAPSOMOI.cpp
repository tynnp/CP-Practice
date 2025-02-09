#include <iostream>
#define endl '\n'
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

int main() {
    TapSoMoi TAP1, TAP2;
    cin >> TAP1 >> TAP2;
    cout << TAP1 << endl << TAP2 << endl;
    cout << (TAP1 < TAP2 ? "true\n" : "false\n");
    cout << TAP1 + TAP2 << endl;
    cout << ++TAP1;
    return 0;
}