#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;
    int a[n], duong[n], am[n];
    int duongIndex = 0, amIndex = 0;

    for (int &x : a) {
        cin >> x;
        if (x < 0) am[amIndex++] = x;
        if (x > 0) duong[duongIndex++] = x;
    }

    for (int i = 0; i < amIndex; i++)
        cout << am[i] << " ";
    cout << endl;

    for (int i = 0; i < duongIndex; i++)
        cout << duong[i] << " ";

    return 0;
}