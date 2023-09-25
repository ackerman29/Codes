#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int sum = 0;
    int k[n];

    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }

    int c = 0;

    for (int i = 0; i <= n; i++) { // Changed the loop limit to n+1
        if (sum <= x) {
            c++;
        }

        if (i < n) { // Avoid accessing k[n] which is out of bounds
            sum += k[i];
        }
    }

    cout << c << endl;
    return 0;
}
