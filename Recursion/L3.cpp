#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(int n ,int x, int y , int z){
    if(n==0)return 0;
    if(n<0)return INT_MIN;
    

        int a= solve(n-x , x, y, z)+1;
    
    
       int b= solve(n-y , x, y, z)+1;
         int c=   solve(n-z , x, y, z)+1;

    

    int ans= max(a, max(b,c));
    return ans;
}

        void solve(vector<int>& arr , int sum ,int& maxi ,int i){
            if(i>=arr.size()){
                maxi = max(sum, maxi);
                return;
            }

            // include

            solve(arr, sum+arr[i],maxi, i+2);
            // exclude

            solve(arr, sum, maxi, i+1);
        }

int main(){

    // int n=7;
    // int x,y,z;
    // x=5;
    // y=2;
    // z=2;


    // int ans = solve(n,x,y,z);

    // if(ans<0){
    //     ans=0;
    // }
    // cout <<ans;


// 
// Maximum sum of NOn -adjacent __valarray_destroy_elements

vector<int> arr{2,1,4,9};
int i=0;
int maxi = INT_MIN;
int sum=0;

solve(arr, sum, maxi, i);
cout<<maxi;


    return 0;
}