#include <bits/stdc++.h>
using namespace std;

long long gcd (long long a, long long b) {
    if (a < 0 && b < 0) {
        a *= (-1);
        b *= (-1);
    }
    else if (a < 0 && b > 0) a *= (-1);
    else if (a > 0 && b < 0) b *= (-1);
    if (a == 0 || b == 0) return a + b;
    while (a != b) {
        if (a > b) a -= b;
        else b -= a;
    }
    return a;
} 

int main() {

    long long a, b;
    cin >> a >> b;
    
    long long t = gcd(a, b);
    if (b == 0) {
        cout << "INVALID";
        return 0;
    }
    else if (a % b == 0) cout << a / b;
    else {
        a = a / t;
        b = b / t;
        if (a > 0 && b < 0) {
            a = a * (-1);
            b = b * (-1);
        }
        cout << a << " " << b;
    }
}