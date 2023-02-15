#include <bits/stdc++.h>
using namespace std;

long long gcd (long long x, long long y) {
    if (x == 0 || y == 0) return x + y;
    while (x != y) {
        if (x > y) x -= y;
        else y -= x;
    }
    return x;
}

int main() {
    long long x, y;
    cin >> x >> y;
    cout << (x * y) / gcd(x, y);
}