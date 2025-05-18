#include <iostream>
#include <algorithm>
using namespace std;

bool cp(int n) {
    return sqrt(n) == (int) sqrt(n);
}

int main() {
    int x;
    vector<int> v;
    
    while (cin >> x) 
        v.push_back(x);

    cout << count_if(v.begin(), v.end(), cp);
    return 0;
}