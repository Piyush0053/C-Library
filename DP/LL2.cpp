#include <bits/stdc++.h>
using namespace std;
// COIN CHANGE PROBLEM

// BRUTE FORCE
int coinChange(vector<int>& coins, int amount){
    if(amount==0)return 0;

    if(amount<0){
        return INT_MAX;
    }

    int mini=INT_MAX;
    for(int i=0;i<coins.size();i++){
        int ans=coinChange(coins, amount-coins[i]);
        if(ans!=INT_MAX){
            mini=min(1+ans, mini);
        }
    }
    return mini;
}

// TopDown
int TopDown(vector<int>& coins, int amount,vector<int>& dp){
    if(amount==0)return 0;

    if(amount<0){
        return INT_MAX;
    }

    // step 3
    // check if answer already exists
    if(dp[amount]!=-1){
        return dp[amount];
    }
    int mini=INT_MAX;
    for(int i=0;i<coins.size();i++){
        int ans=TopDown(coins, amount-coins[i],dp);
        if(ans!=INT_MAX){
            mini=min(1+ans, mini);
        }
    }

    // Store the answer in the dp
    dp[amount]=mini;
    return mini;
}

int bottomUp(vector<int>& coins, int amount){
    vector<int> dp(amount+1, );
    dp[0]=0;

    if(amount<0){
        dp[amount] =INT_MAX;
    }

    int mini=INT_MAX;
    for(int i=0;i<coins.size();i++){
        int ans=
        if(ans!=INT_MAX){
            mini=min(1+ans, mini);
        }
    }
    return mini;
}

int main(){
    vector<int> coins{1,2,5};
    int amount=11;

    // Step1 : INitialise dp
    // vector<int> dp(amount+1, -1);
         int ans=0;
        // ans=TopDown(coins,amount,dp);

    // Bottom up
    ans= bottomUp(coins,amount);
    
    (ans!=INT_MAX)?cout<<ans: cout<<-1;

}