#include <bits/stdc++.h>
using namespace std;

double sum(int n) {
	if (n == 0) return 1.0 / 2;
	return (2.0 * n + 1) / (2.0 * n + 2) + sum(n - 1);
}
int main() {
	int n;
	cin >> n;
	cout << setprecision(3) << fixed << sum(n);
}