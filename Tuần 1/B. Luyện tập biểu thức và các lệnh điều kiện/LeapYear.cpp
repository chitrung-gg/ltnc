#include <bits/stdc++.h>
using namespace std;

int main() {
    long long y;
    cin >> y;
    if (y % 100 == 0 && y % 400 == 0) cout << "true";
    else if (y % 4 == 0 && y % 100 != 0) cout << "true";
    else cout << "false";
    return 0;
}