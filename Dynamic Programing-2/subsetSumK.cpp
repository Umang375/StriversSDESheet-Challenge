#include<bits/stdc++.h>
using namespace std;

bool canPartition(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i =0; i<n; i++){
            sum+=nums[i];
        }
        if(sum %2!=0){
            return 0;
        }
        sum/=2;
        vector<vector<int>>subs(n+1,vector<int>(sum+1,0));
        for(int i=0; i<=n; i++){
            subs[i][0] = 1;
        }

        for(int i =1; i<=n; i++){
            for(int j =0; j<=sum; j++){
                if(nums[i-1]<=j){
                    subs[i][j] = subs[i-1][j-nums[i-1]] || subs[i-1][j];
                }else{
                    subs[i][j] = subs[i-1][j];
                }
            }
        }
        if(subs[n][sum] == 0){
            return 0;
        }
        return 1;
    }