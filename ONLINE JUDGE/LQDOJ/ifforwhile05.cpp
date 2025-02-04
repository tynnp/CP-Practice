#include <iostream>
using namespace std;

int main() {
    double s1, t1, s2, t2;
    cin >> s1 >> t1 >> s2 >> t2;
    if (s1 / t1 > s2 / t2)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}