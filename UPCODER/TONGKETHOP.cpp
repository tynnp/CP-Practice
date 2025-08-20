#include <iostream>
#include <cmath>
using namespace std;

bool snt(int n) {
	for (int i = 2; i*i <= n; i++)
		if (n % i == 0) return false;
	return n > 1;
}

bool scp(int n) {
	return ((int) sqrt(n) == sqrt(n));
}

int main() {
	int n; 
    cin >> n;
    
	int ans = 0, a[n];
	for (int& x : a) cin >> x;
	
	bool check = false;
	int cp = 0;
	for (int x : a) {
		if (snt(x) && !check) 
			ans += x, check = true;
		if (scp(x)) cp = x;
	}
	
	cout << (!check ? -1 : ans + cp);
}