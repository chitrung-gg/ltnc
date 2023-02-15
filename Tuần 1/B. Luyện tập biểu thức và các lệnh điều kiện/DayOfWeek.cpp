#include <bits/stdc++.h>
using namespace std;

int main() {
    int d, m, y;
    cin >> d >> m >> y;
    if (m == 1) {
        m = 13;
        y--;
    }
    if (m == 2) {
        m = 14;
        y--;
    }
    int n = (d + 13 * (m + 1) / 5 + y % 100 + (y % 100) / 4 + (y / 100) / 4 + 5 * (y / 100)) % 7;
    switch(n) {
        case 0: 
            cout << "Saturday";
            break;
        case 1:
            cout << "Sunday";
            break;
        case 2:
            cout << "Monday";
            break;
        case 3:
            cout << "Tuesday";
            break;
        case 4:
            cout << "Wednesday";
            break;
        case 5:
            cout << "Thursday";
            break;
        case 6: 
            cout << "Friday";
            break;
    }
    return 0;
}