#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<bool> vt(10000, false);
    vector<int> res;

    int n, x, max = -1, min = 8000;
    cin >> n;

    while (n--) {
        cin >> x;
        vt[x] = true;
        if (max < x) max = x;
        if (min > x) min = x;
    }

    for (int i = min; i <= max; i++) 
        if (!vt[i]) 
            res.push_back(i);
    
    if (!res.empty()) {
        cout << "Yes" << endl;
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
    } else 
        cout << "No";

    return 0;
}