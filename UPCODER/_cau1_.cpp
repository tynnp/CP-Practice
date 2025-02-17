#include <bits/stdc++.h>
using namespace std;

int main() {
	float x, n, b = 1, ans = 0;
	
	cin >> x >> n;
	
	for (int i = 1; i <= n; i++) {
		b *= i; 
		ans += pow(x, i) / b;
	}
	
	cout << fixed << setprecision(3) << ans;
	return 0;
}