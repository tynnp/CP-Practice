#include <bits/stdc++.h>
using namespace std;

struct Set {
    int size;
    int *data;
    
    Set(int size) {
        this->size = 0;
        data = new int[size];
    }
    
    ~Set() {
        delete[] data;
    }
    
    bool checkOf(int n) {
        for (int i = 0; i < size; i++)
            if (data[i] == n)
                return true;
        return false;
    }
    
    void sort() {
        for (int i = 1; i < size; i++) {
            int j = i;
            while (j > 0 && data[j-1] > data[j]) {
                swap(data[j-1], data[j]);
                j--;
            }
        }
    }
    
    void print() {
        for (int i = 0; i < size; i++)
            cout << data[i] << " ";
    }
    
    bool insert(int n) {
        if (!checkOf(n)) {
            data[size++] = n;
            this->sort();
            return true;
        } else return false;
    }
}; 

int main() {
    int x, n;
    cin >> n;
    Set s(n);
    
    while (cin >> x) 
        s.insert(x);
    s.print();

    return 0;
}