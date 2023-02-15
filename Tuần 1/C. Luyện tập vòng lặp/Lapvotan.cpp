#include <bits/stdc++.h>
using namespace std;
 
int main() {											
    while (true) {
        int n;
        cin >> n;
        if (n == -1) {
            cout << "Bye";
            return 0;
        }
        if (n % 5 == 0 && n >= 0) cout << n / 5;
        else cout << -1;
        cout << endl;
 
    }
}
 