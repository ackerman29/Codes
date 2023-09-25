#include<bits/stdc++.h>
using namespace std;
const int N = 1e2;
vector<int> g[N];
bool vis[N];

// Function to perform DFS on a 2D grid
void dfs(int i, int j, vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    if (i < 0 || j < 0 || i >= n || j >= m || vis[i][j] || grid[i][j] == 0) {
        return;
    }

    vis[i][j] = true;

    // Explore the 4 adjacent cells
    dfs(i - 1, j, grid);
    dfs(i + 1, j, grid);
    dfs(i, j - 1, grid);
    dfs(i, j + 1, grid);
}

// Function to count the number of connected components in a 2D grid
int findCircleNum(vector<vector<int>>& isConnected) {
    int c = 0;
    int n = isConnected.size();
    int m = isConnected[0].size();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!vis[i][j] && isConnected[i][j] == 1) {
                dfs(i, j, isConnected);
                c++;
            }
        }
    }
    return c;
}

int main() {
    int n, m;
    cin >> n >> m;

    // Assuming you want to read a graph as input
    for (int i = 0; i < m; i++) {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    // Call your function to find the number of connected components
    int result = findCircleNum(g);

    cout << "Number of connected components: " << result << endl;

    return 0;
}
