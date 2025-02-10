#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> cur;

void Try(int n, int x, int N) {
    if (n == 0) {  
        cout << N << "=";

        for (size_t i = 0; i < cur.size(); i++) {
            cout << cur[i];
            if (i < cur.size() - 1)
                cout << "+";
        }

        cout << "\n";
        return;
    }

    for (int i = x; i <= n; i++) {
        cur.push_back(i);
        Try(n - i, i, N);
        cur.pop_back();  
    }
}

int main(){
    cin >> n;
    Try(n, 1, n);
    return 0;
}
