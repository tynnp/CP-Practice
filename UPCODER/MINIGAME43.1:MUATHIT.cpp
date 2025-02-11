#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int64_t a2kg[4];
    int64_t a1kg[3];
    
    int64_t Q, H, S, D, N;
    cin >> Q >> H >> S >> D >> N;

    a2kg[0] = Q*8; a1kg[0] = Q*4;
    a2kg[1] = H*4; a1kg[1] = H*2;
    a2kg[2] = S*2; a1kg[2] = S;
    a2kg[3] = D;

    int64_t min2kg = *min_element(a2kg, a2kg + 4);
    int64_t min1kg = *min_element(a1kg, a1kg + 3);

    cout << N / 2 * min2kg + N % 2 * min1kg;
    return 0;
}