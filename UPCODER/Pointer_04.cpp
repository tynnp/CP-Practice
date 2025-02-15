#include <iostream>
using namespace std;

void find(int *a, int *b) {
    if (*a > *b) 
        cout << *a << " is the maximum number";
    else 
        cout << *b << " is the maximum number";
}

int main() {
    int a, b;
    cin >> a >> b;
    find(&a, &b);
    return 0;
}