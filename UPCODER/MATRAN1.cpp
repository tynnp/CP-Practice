#include <bits/stdc++.h>
using namespace std;
 
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define rFOR(i, a, b) for (int i = (a) - 1; i >= (b); i--)
 
int main() {
    int n; 
    cin >> n; 
    int arr[n][n]; 

    FOR(i, 0, n) FOR(j, 0, n) cin >> arr[i][j];

    int sum = 0;
    FOR(i, 0, n) sum += arr[i][i];
    FOR(i, 0, n) sum += arr[i][n-1-i];
    cout << sum;
    
    return 0;
}