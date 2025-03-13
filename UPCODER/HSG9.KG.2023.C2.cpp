#include <iostream>
using namespace std;

int n, cnt;
int sum, i;

int main() {
    cin >> n;

    for (int k = n; k >= 1; k--) {
        sum = k;
        i = 1;
        
        while (sum < n) {
            sum = sum + k + i;
            i++;
            
            if (sum == n) {
                cnt++;

                for (int j = 0; j < i; j++) 
                    cout << k + j << ' ';
                cout << endl;
            }
        }
    }
    
    if (cnt != 0)
        cout << "Co " << cnt << " cach chia so " << n;
    else 
        cout << "khong co cach chia nao";
    return 0;
}
