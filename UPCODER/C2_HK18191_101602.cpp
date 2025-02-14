#include <bits/stdc++.h>
using namespace std;

bool check(char a, char b, char type) {
    if (type == 'A') return a > b;
    if (type == 'D') return a < b;
}

void sort(char a[], int n, int type) {
    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 && check(a[j-1], a[j], type)) {
            swap(a[j-1], a[j]);
            j--;
        }
    }
}

int main() {
    char type;
    int n;
    cin >> type >> n;
    
    char a[n];
    for (char &c : a) cin >> c;
    
    sort(a, n, type);
    for (char c : a) cout << c << " ";
    return 0;
}