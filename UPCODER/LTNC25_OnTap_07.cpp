#include <iostream>
#include <iomanip>
using namespace std;

template<typename T>
void timMax() {
    T x, y, z;
    cin >> x >> y >> z;

    T ans = x;
    if (ans < y) ans = y;
    if (ans < z) ans = z;

    cout << fixed << setprecision(2);
    cout << ans;
}

int main() {
    char kt;
    cin >> kt;

    if (kt == 'a')  
        timMax<int>();

    if (kt == 'b') 
        timMax<double>();
    
    if (kt == 'c')
        timMax<char>();

    return 0;
}