#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, v;
    cin >> n >> v;
    set<int> ok;
    int c = 0;

    while (n--) {
        int k;
        cin >> k;
        int s[k];

        for (int i = 0; i < k; i++) { 
            cin >> s[i];
            if (s[i] < v) {
                c++;
                ok.insert(k);  
            }
        }
    }

    cout << c << endl;
    for (auto it : ok) {
        cout << it << " ";
    }

    return 0;
}
