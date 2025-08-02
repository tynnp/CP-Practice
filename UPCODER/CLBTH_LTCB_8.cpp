#include <iostream>
using namespace std;

int main() {
    double nd[7];
    
    for (int i = 0; i < 7; i++)
        cin >> nd[i];
        
    double minV = 999999, maxV = -99999999;
    
    for (int i = 0; i < 7; i++) {
        if (nd[i] < 10)
            cout << nd[i] << ' ';
        
        minV = min(minV, nd[i]);
        maxV = max(maxV, nd[i]);
    }
    
    cout << endl;
    cout << minV << endl;
    cout << maxV << endl;
}
