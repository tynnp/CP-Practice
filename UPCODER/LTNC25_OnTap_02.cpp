#include <iostream>
#include <iomanip>
using namespace std;

struct ToaDo {
    double x, y;
};

istream &operator >> (istream &in, ToaDo &td) {
    in >> td.x >> td.y;
    return in;
}

ostream &operator << (ostream &out, ToaDo td) {
    out << fixed << setprecision(2);
    out << '(' << td.x << ", " << td.y << ')';
    return out;
}

int main() {
    ToaDo td;
    cin >> td;
    cout << td;
    return 0;
}