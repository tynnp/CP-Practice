#include <bits/stdc++.h>
#define int long long
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr)
using namespace std;

const int MAXN = 2e5 + 5;
const int MOD = 1e9 + 7;
const int BUF_SZ = 1 << 15;

inline namespace Input {
    char buf[BUF_SZ];
    int pos;
    int len;
    
    char next_char() {
    	if (pos == len) {
    		pos = 0;
    		len = (int)fread(buf, 1, BUF_SZ, stdin);
    		
    		if (!len) 
    		    return EOF; 
    	}
    	
    	return buf[pos++];
    }

    int read_int() {
    	int x;
    	char ch;
    	int sgn = 1;
    	
    	while (!isdigit(ch = next_char())) 
    		if (ch == '-') 
    		    sgn *= -1; 
    	
    	x = ch - '0';
    	
    	while (isdigit(ch = next_char())) 
    	    x = x * 10 + (ch - '0'); 
    	    
    	return x * sgn;
    }
}  

inline namespace Output {
    char buf[BUF_SZ];
    int pos;

    void flush_out() {
    	fwrite(buf, 1, pos, stdout);
    	pos = 0;
    }

    void write_char(char c) {
    	if (pos == BUF_SZ) 
    	    flush_out(); 
    	buf[pos++] = c;
    }

    void write_int(int x) {
    	static char num_buf[100];
    	
    	if (x < 0) {
    		write_char('-');
    		x *= -1;
    	}
    	
    	int len = 0;
    	
    	for (; x >= 10; x /= 10) 
    	    num_buf[len++] = (char)('0' + (x % 10)); 
    	
    	write_char((char)('0' + x));
    	
    	while (len) 
    	    write_char(num_buf[--len]); 
    	    
    	write_char(' ');
    }

    void init_output() { 
        assert(atexit(flush_out) == 0); 
        
    }
}  

int n, a[MAXN], s[MAXN];

bool binary_search(int &x) {
    int l = n;
    int r = 2*n - 1;

    while (l <= r) {
        int mid = (l + r) >> 1;

        if (s[mid] == x)
            return true;

        if (s[mid] < x)
            l = mid + 1;
        else 
            r = mid - 1;
    }

    return false;
}

signed main() {
    fastIO;
    init_output();
    
    n = read_int();

    for (int i = 0; i < 2*n; i++) {
        a[i] = read_int();
        s[i] = a[i];
    }

    sort(s, s + 2*n);

    for (int i = 0; i < 2*n; i++) 
        if (binary_search(a[i]))
            write_int(a[i]);
    
    return 0;
}
