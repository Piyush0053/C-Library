#include<bits/stdc++.h>
using namespace std;

int main(){

    string s="/home//foo/";
    int n= s.length();
    vector<string> st;

    for(int i=0;i<n;i++){
        string ch= s[i];

        if(ch=="/"){
            st.push_back(ch);
        }
        
    }



    return 0;
}
