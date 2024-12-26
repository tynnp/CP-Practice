#include <iostream>
using namespace std;

int main() {
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);

    int dongA, dongB, bacA, bacB, vangA, vangB, bkA, bkB;
    cin >> dongA >> dongB >> bacA >> bacB >> vangA >> vangB >> bkA >> bkB;

    int x = bkB - bkA;
    int y = vangB - vangA + x;
    int z = bacB - bacA + y;

    cout << z << endl;
    cout << y << endl;
    cout << x;
    return 0;
}