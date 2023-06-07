#include <bits/stdc++.h> 
using namespace std;

int pathSum(vector<vector<int>>& grid, int m , int n , vector<vector<int>>& dp){
        if(n==0 && m==0){
            return grid[n][m];
        }
        if(n<0 || m<0){
            return 1e9;
        }
        if(dp[n][m] != -1){
            return dp[n][m];
        }
        int up = grid[n][m] + pathSum(grid,m,n-1,dp);
        int left = grid[n][m] + pathSum(grid,m-1,n,dp);
        return dp[n][m] = min(up,left);
    }

int minSumPath(vector<vector<int>> &grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>>dp(n, vector<int>(m,-1));
    return pathSum(grid,m-1,n-1,dp);
}