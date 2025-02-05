#include <bits/stdc++.h>
using namespace std;

template<typename T> 
struct Stack {
    T *data;
    int size;
    int capacity;
    
    ~Stack() {
        delete[] data;
    }
    
    void init(int n = 1000) {
        data = new T[n];
        size = -1;
        capacity = n;
    }
   
    void push(T element) {
        if (size < capacity - 1)
            data[++size] = element;
    }
   
    T top() {
        return data[size];
    }
   
    void pop() {
        if (size > -1)
            size--;
    }
    
    bool empty() {
        return size == -1;
    }
    
    bool full() {
        return size == capacity - 1;
    }
};

bool toanTu(string str) {
    char c = str[0];
    return c == '+' || c == '-' || c == '*' || c == '/';
}

int tinh(int a, int b, char c) {
    if (c == '+') return a + b;
    if (c == '-') return a - b;
    if (c == '*') return a * b;
    if (c == '/') return a / b;
} 

int main() {
    string str;
    Stack<int> s;
    s.init();
    
    while (cin >> str) {
        if (!toanTu(str)) 
            s.push(stoi(str));
        else {
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();
            s.push(tinh(a, b, str[0]));
        } 
    }
    
    cout << s.top();
    return 0;
}