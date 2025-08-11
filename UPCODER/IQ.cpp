#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long n;
    vector<long long> v;

    while (cin >> n) 
        v.push_back(n);
    sort(v.begin(), v.end());

    double dtb = 0;
    for (int i = 1; i < v.size() - 1; i++)
        dtb += v[i];

    cout << dtb / (v.size() - 2);
    return 0;
}