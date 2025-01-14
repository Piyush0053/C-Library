#include<bits/stdc++.h>
using namespace std;
int main(){

    int ans=0;
    unordered_map<char,int> mp;

    string s="aabb";
    int n= s.length();
    for(int i=0;i<n;i++){
        char ch= s[i];
        mp[ch]++;
        q.push(ch);
    }
    
    int i=0;
   while(i<n){
        char ch=s[i];
        if(mp[ch]>1){
            i++;
        }
        
        else{
            ans=i;
            break;
        }
    }
    if(i==n){
        ans=-1;
    }
    cout<<ans;

    return 0;
}