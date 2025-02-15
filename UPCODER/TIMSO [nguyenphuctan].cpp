#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 100; i <= 999; i++) {
        int a = i/100;
        int b = i/10 % 10;
        int c = i % 10;
        int d = a * 1000 + b * 100 + c;
        
        if (c - b == 3 && c - a == 6 && d - i == 2250)
            cout << i;
    }
    
    return 0;
}