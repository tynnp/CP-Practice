#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    t %= 86400;
    
    int h = t / 3600;
    t %= 3600;
    int m = t / 60;
    int s = t % 60;
    
    string p;
    int H;

    if (h == 0) {
        H = 12;
        p = "AM";

    } else if (h < 12) {
        H = h;
        p = "AM";

    } else if (h == 12) {
        H = 12;
        p = "PM";

    } else {
        H = h - 12;
        p = "PM";
    }
    
    cout << setfill('0') << setw(2) << H << ":"
         << setfill('0') << setw(2) << m << ":"
         << setfill('0') << setw(2) << s << " " << p;
    
    return 0;
}
