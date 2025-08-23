#include <bits/stdc++.h>
using namespace std;

int n, x[100];
bool visited[100];

void print() {
    for (int i = 1; i <= n; i++) 
        cout << x[i];
    cout << endl;
}

void Try(int i) {
    for (int j = 1; j <= n; j++) {
        if (!visited[j] && (i == 1 || abs(j - x[i - 1]) != 1)) {
            x[i] = j;
            visited[j] = true;

            if (i == n) print();
            else Try(i + 1);

            visited[j] = false;
        }
    }
}

int main() {
    cin >> n;
    Try(1);
    return 0;
}