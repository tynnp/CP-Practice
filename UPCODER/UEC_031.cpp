#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int hh, mm, ss, x;
    cin >> hh >> mm >> ss >> x;
    
    ss += x;

    if (ss >= 60) {
        mm += ss / 60;
        ss = ss % 60;
    }

    if (mm >= 60) {
        hh += mm / 60;
        mm = mm % 60;
    }

    if (hh >= 24) {
        hh = hh % 24;
    }

    cout << setfill('0') << setw(2) << hh << ":"
         << setfill('0') << setw(2) << mm << ":"
         << setfill('0') << setw(2) << ss;

    return 0;
}
