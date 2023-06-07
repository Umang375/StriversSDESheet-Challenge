#include<bits/stdc++.h>
using namespace std;

int dp[201][201];
    
    int solve(int e, int f){
        
        if(f==1 || f==0){
            return f;
        }
        
        if(e==1) return f;
        
        if(dp[e][f] != -1){
            return dp[e][f];
        }
        int tires = INT_MAX;
        
        for(int i=1; i<=f; i++){
            int temp = 1 + max(solve(e-1,i-1), solve(e, f-i));
            
            tires = min(tires, temp);
        }
        return dp[e][f]=tires;
    }
    
    int eggDrop(int n, int k) 
    {
        memset(dp, -1 , sizeof dp);
        int ans = solve(n,k);
        return ans;
    }