#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void find(string s, char c ,int i, int& ans){
    if(i<0)return;
    // ians=0;
    if(s[i]==c){
        
        
        ans=i;
        return;
    }
    find(s,c,i-1,ans);
    
}

int main(){
    string s ="abcefgd";
    int i=s.size()-1;
    int ans =-1;
    char c='d';
     find(s,c,i,ans);
   cout<<ans;

    return 0;
}