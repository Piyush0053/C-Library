#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// bool checksort(vector<int>& str , int& n , int i){
//     if(i==n-1)return true;

//     if(str[i]>str[i+1])return false;

//     else{
//         return checksort(str, n,i+1);
//     }
// }

// int findkey(vector<int>& v, int s , int e, int& key){
//     if(s>e)return -1;

//     int mid=s+(e-e)/2;
//     if(v[mid]==key)return mid;

//     if(v[mid]>key)return findkey(v, s, mid-1, key);
//     else{
//         return findkey(v,mid+1, e,key);
//     }

// }

void subse(string s , string output ,int i){
     
    if(i>=s.length()){
        cout<<output<<endl;
        return;
    }

    // exclude
    return subse(s, output, i+1);
    // includde

    output.push_back(s[i]);
    return subse(s, output,i+1);


}


int solve(vector<int>& arr ,int target){
    if(target==0)return 0;
    if(target<0)return INT_MAX;

    int mini= INT_MAX;
   
    for(int i=0;i<arr.size();i++){
        int ans = solve(arr, target-arr[i]);
        if(ans!=INT_MAX){
            mini =min(ans+1 ,mini);
        }
    }
    return mini;

}


int solve(int n, int x, int y, int z ){
    if(n==0)return 0;
    if(n<0)return INT_MIN;

    int a =solve(n-x,x,y,z )+1;
    int b =solve(n-y,x,y,z )+1;
    int c =solve(n-z,x,y,z )+1;

    int ans = max(a, max(b,c));
    return ans;
}

int main(){

    int n=7;
    int x=5;
    int y=2;
    int z=2;

    int ans =solve(n, x ,y , z);
    cout<<"ans is "<<ans;


    // vector<int> arr{1,2};
    
    // int target =5;
    // int ans = solve(arr, target);
    // cout<<ans;



//     string s= "abc";
//     string output="";
//  int i=0;
//     subse(s, output,i);
    

    // vector<int> v{10,23,45,67,89};
    // int n= v.size();
    // int s=0;
    // int e= n-1;
    // int key= 89;
    // int ans = findkey(v,s,e, key);

    // cout<<ans;

    return 0;
}