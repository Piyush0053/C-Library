#include <bits/stdc++.h>
using namespace std;

int solve(int capacity,int n, int weight[], int value[]){
    // base case-- if only 1 element is present

    if(n==0){
        if(weight[0]<=capacity){
            return value[0];
        }else{
            return 0;
        }
    }

    int include=0;
    if(weight[n]<=capacity){
        include= value[n]+ solve(capacity-weight[n], n-1, weight, value);
    }
    int exclude= 0+solve(capacity, n-1, weight, value);

    int ans= max(include, exclude);
    return ans;
}

int topdown(const vector<int>& val, const vector<int>& wt, int n, int capacity, vector<vector<int>>& dp) {
    if (n < 0) { // Fix: Correct base case
        return 0;
    }
    if (dp[n][capacity] != -1) {
        return dp[n][capacity];
    }

    int include = 0;
    if (wt[n] <= capacity) {
        include = val[n] + topdown(val, wt, n - 1, capacity - wt[n], dp); // Fix: Corrected argument order
    }
    int exclude = topdown(val, wt, n - 1, capacity, dp);

    dp[n][capacity] = max(include, exclude);
    return dp[n][capacity];
}

int main(){

    int capacity=9;
    
    int weight[]={7, 5, 1, 9, 7};
    int value[]={3, 7, 5, 9, 4};

    // int ans= solve(capacity, n, weight, value);

    // // Step 1-- initialise dp
    int n = val.size();
    
    // Becauest there is change in the value in the index of n and the capacity
    vector<vector<int>> dp(n, vector<int>(capacity + 1, -1));
    return topdown(val, wt, n - 1, capacity, dp);

    cout<<ans;

}