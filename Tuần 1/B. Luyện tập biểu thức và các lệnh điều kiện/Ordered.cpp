#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, y, z;
    cin >> x >> y >> z;
    bool b = false;
    if ((x < y && y < z) || (x > y && y > z)) b = true;
    cout << boolalpha << b;
}