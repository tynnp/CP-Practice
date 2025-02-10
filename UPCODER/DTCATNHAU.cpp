#include <bits/stdc++.h>
using namespace std;

const double E = 1e-9;

struct Diem {
    double x, y;
};

istream &operator >> (istream &in, Diem &d) {
    in >> d.x >> d.y;
    return in;
}

double huong(Diem a, Diem b, Diem c) {
    return (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
}

bool duongThang(Diem a, Diem b, Diem c) {
    return (c.x <= max(a.x, b.x) + E && c.x >= min(a.x, b.x) - E &&
            c.y <= max(a.y, b.y) + E && c.y >= min(a.y, b.y) - E);
}

bool catNhau(Diem a, Diem b, Diem c, Diem d) {
    double o1 = huong(a, b, c);
    double o2 = huong(a, b, d);
    double o3 = huong(c, d, a);
    double o4 = huong(c, d, b);

    if (o1 * o2 < -E && o3 * o4 < -E)
        return true;

    if (fabs(o1) < E && duongThang(a, b, c)) return true;
    if (fabs(o2) < E && duongThang(a, b, d)) return true;
    if (fabs(o3) < E && duongThang(c, d, a)) return true;
    if (fabs(o4) < E && duongThang(c, d, b)) return true;
    
    return false;
}

int main() {
    Diem a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << (catNhau(a, b, c, d) ? "yes" : "no");
    return 0;
}