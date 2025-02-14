#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int64_t sort(int64_t x) {
    string s = to_string(x);
    sort(s.begin(), s.end());
    return stoll(s);
}

int main(){
    int64_t n;
    cin >> n;
    
    vector<int64_t> A(32, 0);
    A[1] = 1;
    for (int i = 2; i <= 31; i++){
        int64_t t = A[i - 1] * 2;
        A[i] = sort(t);
    }
    
    if(n <= 25) {
        cout << A[n];
    } else {
        int pos = (n - 25) % 6; 
        cout << A[25 + pos];
    }
    
    return 0;
}