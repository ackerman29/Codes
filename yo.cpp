#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        
        // Initialize the sum to 0
        long long sum = 0;

        // Calculate the sum of all numbers from 1 to x
        for (long long i = 1; i <= x; i++) {
            sum += i;
        }

        // Subtract the sum of powers of 2 from the total sum
        for (long long i = 1; i<= x; i*=2) {
        	
            sum -=2*i;
        
    }


        cout << sum << endl;
    }

    return 0;
}
