#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    long long n;
    vector<long long> v;

    cin >> n;
    int max = -9999999, max2 = -9999999;
    while (cin >> n) v.push_back(n);
    
    for (int i = 0; i < v.size(); i++) 
        if (max < v[i]) max = v[i];

    for (int i = 0; i < v.size(); i++)
        if (max2 < v[i] && v[i] < max) 
            max2 = v[i];

    cout << max2 << " " << max;
    return 0;
}