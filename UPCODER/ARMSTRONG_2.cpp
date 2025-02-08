#include <iostream>
using namespace std;

int main() {
    int a, b, sum, num, len;
    int n[10][9];
    bool check = true;

    for (int i = 0; i < 10; i++) {
        n[i][0] = 1;
        for (int j = 1; j <= 8; j++) 
            n[i][j] = n[i][j-1]*i;
    }

    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        int tmp = i;
        sum = 0, len = 0, num = i;

        while (tmp > 0) 
            len++, tmp /= 10;
        
        tmp = i;
        while (tmp > 0) {
            sum += n[tmp % 10][len];
            tmp /= 10;
            if (sum > i) {
                i -= i % 10, i += 9;
                break;
            }
        }

        if (sum == num) {
            cout << i << ' ';
            check = false;
        } 
    }

    if (check) cout << -1;
    return 0;
}