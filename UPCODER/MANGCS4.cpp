#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m; 
    cin >> n >> m;
    int arr[n*m];

    for (int i = 0; i < n*m; i++)
        cin >> arr[i];

    sort(arr, arr + n*m);
    int idx = 0;

    for (int i = 0; i < n; i++) {
        int cnt = idx;

        if (i % 2 == 0) {
            for (int j = cnt; j < cnt + m; j++) {
                cout << arr[j] << " ";
                idx++;
            }
            cout << endl;

        } else {
            for (int j = cnt + m - 1; j >= cnt; j--) {
                cout << arr[j] << " ";
                idx++;
            }
            cout << endl;
        }
    }

    return 0;
}