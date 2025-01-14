#include <bits/stdc++.h>
using namespace std;


int main() {
    
    string s= "snapchat";
    unordered_map<char, char> m;
    char j='z';
    for(char i='a';i<='z';i++){
        m[i]=j;
        j--;
    }

    for(int i=0;i<s.size();i++){
        s[i]=m[s[i]];
    }
    cout<<s;
    return 0;
}