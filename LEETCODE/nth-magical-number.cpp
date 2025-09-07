class Solution {
public:
    const int mod = 1e9 + 7;

    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    long long lcm(int a, int b) {
        return a / gcd(a, b) * b;
    }

    int nthMagicalNumber(int n, int a, int b) {
        long long l = min(a, b);
        long long r = 1LL * n * l;
        long long lcmab = lcm(a, b);
        
        while (l < r) {
            long long mid = (l + r) >> 1;
            long long cnt = mid / a + mid / b - mid / lcmab;

            if (cnt < n) l = mid + 1;
            else r = mid;
        }

        return l % mod;
    }
};