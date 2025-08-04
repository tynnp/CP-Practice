#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    int hh = n / 3600;
    int mm = (n % 3600) / 60;
    int ss = n % 60;

    cout << setfill('0') << setw(2) << hh << ":";
    cout << setfill('0') << setw(2) << mm << ":";
    cout << setfill('0') << setw(2) << ss;

    return 0;
}