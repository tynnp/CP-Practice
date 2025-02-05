#include <iostream>
using namespace std;

int main() {
    int max = -10e6;
    int min = 10e6;
    int tmp;

    while (cin >> tmp) {
        if (max < tmp) max = tmp;
        if (min > tmp) min = tmp;
    }

    cout << min << endl;
    cout << max << endl;
    cout << min + max;

    return 0;
}