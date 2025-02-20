#include <bits/stdc++.h>
using namespace std;

// Normal approach
int fib(int n){
    if(n==1||n==0){
        return n;
    }
    int ans=fib(n-1 )+fib(n-2);
    return ans;
}


// Using Dp
// Top Down Approach
int topdownSolve(int n, vector<int>& dp){
    if(n==1||n==0){
        return n;
    }

    if(dp[n]!=-1){
        return dp[n];
    }

     dp[n]=topdownSolve(n-1,dp)+topdownSolve(n-2,dp);
    return dp[n];
}

// bottom UP Approach

int bottomUP(int n){
    // create dp array
    vector<int> dp(n+1, -1);

    dp[0]=0;
    if(n==0)return dp[0];
    dp[1]=1;

    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
        return dp[n];
}


int main(){
    // 1 fibonacci using DP

    int n=6;     //size,initial element 
    // int ans= fib(n);
    // cout<<ans;
    // vector<int> dp(n+1,-1);
    // int ans=topdownSolve(n,dp);
    int ans=bottomUP(n);
    cout<<ans;

}