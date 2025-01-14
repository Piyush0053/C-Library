#include<bits/stdc++.h>
using namespace std;

int main(){

   string s= " 2-1 + 2 ";
   int ans=0;
   stack<int> st;

   int i=0;
   while (i<s.length()){   

    string ch= s[i];
    
    if(ch=="+" || ch=="-" || ch=="/" || ch=="*"){
        if(!st.empty()){
            

        }
    }   
    else{
        st.push(stoi(ch));
    }
    i++;

   }
   


}