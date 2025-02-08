#include <iostream>
using namespace std;

int main() {
    string n;    
    int sum, len, a[10][10];

    for (int j = 0; j <= 9; j++)
        a[1][j] = j;

    for (int i = 2; i <= 9; i++) 
        for (int j = 0; j <= 9; j++)
            a[i][j] = a[i-1][j] * j;


    while (cin >> n) {
        sum = 0;
        len = n.length();
        for (int i = 0; i < len; i++)
            sum += a[len][n[i]-48];
        cout << (sum == stoi(n) ? "YES\n" : "NO\n");
    }

    return 0;
}