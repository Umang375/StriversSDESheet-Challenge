//NUmber of the ways to make the sum using the given coins(CN)

// vector<vector<long long int>>ways(N+1, vector<long long int>(sum+1,0));
//         for (long long int i =0; i<=N ; i++){
//             ways[i][0]=1;
//         }
        
//         for(long long int i =1; i<=N; i++){
//             for(long long int j=1; j<=sum; j++){
//                 if(coin[i-1]<=j){
//                     ways[i][j] = ways[i-1][j] + ways[i][j-coin[i-1]];
//                 }else{
//                     ways[i][j] = ways[i-1][j];
//                 }
//             }
//         }
//         return ways[N][sum];


//Minimum number of coins to make the sum using the given coins(Leetcode)
// int m = coins.size();
//         vector<vector<int>> minc(m+1 ,vector<int>(amount+1,0));
//         for(int i=0 ; i<=amount; i++){
// 	        minc[0][i] = INT_MAX-1;
// 	    }

//         for(int i =1; i<=m; i++){
//             for(int j = 1; j<=amount; j++){
//                 if(coins[i-1]<=j){
//                     minc[i][j] = min(minc[i][j-coins[i-1]]+1, minc[i-1][j]);
//                 }else{
//                     minc[i][j] = minc[i-1][j];
//                 }
//             }
//         }

//         if(minc[m][amount] == INT_MAX-1){
//             return -1;
//         }
//         return minc[m][amount];