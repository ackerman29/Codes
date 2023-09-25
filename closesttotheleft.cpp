#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[], int k, int n) {
    int l = 0;
    int h = n - 1;
    int result = n+1; 

    while (l <= h) {
        int mid = l + (h - l) / 2;

        if (k <= a[mid]) {
            result = mid + 1;
             
            h = mid - 1; 
            l = mid + 1; 
        }
    }

    return result;
}

int main() {
    int n, kn;
    cin >> n >> kn;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int k[kn];

    for (int i = 0; i < kn; i++) {
        cin >> k[i];
    }

    for (int i = 0; i < kn; i++) {
        int result = binarySearch(a, k[i], n);
        cout << result << endl;
    }

    return 0;
}
