#include <iostream>
using namespace std;

int main() {
    int ngay, thang, nam;
    cin >> ngay >> thang >> nam;
    
    if (thang == 1 || thang == 2) {
        thang += 12;
        nam--;
    }

    int n = (ngay + 2 * thang + (3 * (thang + 1)) / 5 + nam + (nam / 4)) % 7;
    
    
    switch (n) {
        case 0: cout << "Chu nhat"; break;
        case 1: cout << "Thu 2"; break;
        case 2: cout << "Thu 3"; break;
        case 3: cout << "Thu 4"; break;
        case 4: cout << "Thu 5"; break;
        case 5: cout << "Thu 6"; break;
        case 6: cout << "Thu 7"; break;
    }

    return 0;
}