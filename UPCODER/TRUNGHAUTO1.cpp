#include <bits/stdc++.h>
using namespace std;

template<typename T> 
struct Stack {
    T *data;
    int idx;
    int capa;
    
    ~Stack() {
        delete[] data;
    }
    
    void init(int n = 1000) {
        data = new T[n];
        idx = -1;
        capa = n;
    }
   
    void push(T element) {
        if (idx < capa - 1)
            data[++idx] = element;
    }
   
    T top() {
        return data[idx];
    }
   
    void pop() {
        if (idx > -1)
            idx--;
    }
    
    bool empty() {
        return idx == -1;
    }
    
    bool full() {
        return idx == capa - 1;
    }
};

int priority(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;
}

int main() {
    char c;
    Stack<char> s;
    s.init();
    
    while (cin >> c) {
        if (isalnum(c)) cout << c << " ";
        else if (c == '(') s.push(c);
        
        else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                cout << s.top() << " ";
                s.pop();
            }
            
            if (!s.empty()) s.pop();
        }
        
        else {
            while (!s.empty() && priority(s.top()) >= priority(c)) {
                cout << s.top() << " ";
                s.pop();
            }
            s.push(c);
        }
    }
    
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    
    return 0;
}