#include <iostream>
using namespace std;

const int MAX = 1e6 + 5;
int x, n, spf[MAX];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 1; i < MAX; i++) 
        spf[i] = i; 
    
    for (int i = 2; i * i < MAX; i++) {
        if (spf[i] == i) { 
            for (int j = i * i; j < MAX; j += i) {
                if (spf[j] > i)
                    spf[j] = i;
            }
        }
    }
    
    cin >> n;
    while(n--) {
        cin >> x;
        bool first = true;

        while(x != 1){
            int f = spf[x];

            if(!first)
                cout << "x";

            cout << f;
            first = false;
            x /= f;
        }

        cout << "\n";
    }
    
    return 0;
}