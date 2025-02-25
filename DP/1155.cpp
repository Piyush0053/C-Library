// 1155. Number of Dice Rolls With Target Sum

#include <bits/stdc++.h>
using namespace std;


        int MOD=1000000007;
    // Using Recursion
        int solve(int n, int k, int target){
        if(n<0)return 0;
            if(n==0 && target==0)return 1; 
            if(n==0 && target!=0)return 0; 
            if(n!=0 && target==0)return 0; 
    
    
             int ans=0;
              for(int i=1;i<=k;i++){
                 ans=ans+numRollsToTarget(n-1, k, target-i);
              }  
              return ans;}
    
        // SolveUsingMem
    
        int topDown(int n, int k , int target, vector<vector<int>>& dp){
            if(n<0)return 0;
            if(n==0 && target==0)return 1; 
            if(n==0 && target!=0)return 0; 
            if(n!=0 && target==0)return 0; 
    
            if(dp[n][target]!=-1){
                return dp[n][target];
            }
    
             int ans=0;
              for(int i=1;i<=k;i++){
                if(target-i>=0){
                    ans=(ans%MOD+topDown(n-1, k, target-i, dp)%MOD)%MOD;}
              }  
              dp[n][target]=ans;
              return dp[n][target];
        }
    
        int bottomUp(int n, int k, int target){
            vector<vector<int>> dp(n+1, vector<int>(target+1, 0));
    
            dp[0][0]=1;
    
            // for loops
    
            for(int index=1;index<=n;index++){
                for(int t=1;t<=target;t++ ){
                    int ans=0;
                    for(int i=1;i<=k;i++){
                        if(t-i>=0){
                            ans=(ans%MOD+(dp[index-1][t-i])%MOD)%MOD;}
                    }  
                    dp[index][t]=ans;
                   
                }
            }
             return dp[n][target];
        }

        int main(){

        
        int n, int k, int target;
          
            // return solve(n,k, target);
    
            // step1 
            // vector<vector<int>> dp(n+1, vector<int>(target+1, -1));
            // return topDown(n, k, target, dp);
            return bottomUp(n, k, target);
       
    
        
    }