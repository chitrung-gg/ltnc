#include <bits/stdc++.h>
using namespace std;

long long tong (long long a) {
    long long sum = 0;
    while (a) {
        sum += a % 10;
        a /= 10;
    }
    return sum;
} 

int main() {
    long long a;
    cin >> a;
    cout << tong(a);
}