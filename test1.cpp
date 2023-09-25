#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    while (n--) {
        int x;
        int min_e = INT_MAX; // Initialize min_e with a large value
        
        cin >> x;
        int s[x], e[x];
        
        for (int i = 0; i < x; i++) {
            cin >> s[i] >> e[i];
            
            if (e[i] < min_e) {
                min_e = e[i]; // Update min_e with the new minimum
            }
        }
        
        if (s[0] == min_e && e[0] == min_e) {
            cout << -1 << endl;
        } else {
            cout << e[0] + 1 << endl;
        }
    }
    
    return 0;
}
