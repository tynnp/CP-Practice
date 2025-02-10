#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    
    int n, x;
    vector<int> v;
    cin >> n;
   
    for (int i = 0; i < n; i++) {
	    cin >> x;
	    v.push_back(x);
    }

    cin >> n;
    for (int i = 0; i < n; i++) {
	    cin >> x;
	    vector<int>::iterator it = lower_bound(v.begin(), v.end(), x);

	    if (*it == x)
		    cout << "Yes " << (it - v.begin() + 1) << endl;
        else
		    cout << "No " << (it - v.begin() + 1) << endl;
    }

    return 0;
}