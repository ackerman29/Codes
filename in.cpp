#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> &A, int B) {
    int sum = 0;
    for (int i = 0; i < A.size(); i++) {
        sum += A[i];
    }
    int j = A.size() - B - 1;
    int i = 0;
    int sum1 = 0;
    for (int k = i; k <= j; k++) {
        sum1 += A[k];
    }
    int mini = sum1;
    i++;
    j++;
    while (j < A.size()) {
        sum1 += (A[j] - A[i - 1]);
        mini = min(mini, sum1);
        i++;
        j++;
    }
    return (sum - mini);
}

int main() {
    vector<int> A;
    int B;
    
    // Input vector A
    int n;
    cout << "Enter the size of vector A: ";
    cin >> n;
    cout << "Enter " << n << " elements for vector A: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        A.push_back(num);
    }
    
    // Input integer B
    cout << "Enter the value of B: ";
    cin >> B;

    int result = solve(A, B);
    cout << "Result: " << result << endl;
    return 0;
}
