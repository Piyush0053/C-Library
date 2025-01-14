#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="()(()";
    stack<char> st;
    int count=0;

    int i=0;
    while (i<s.length())
    {
        char ch=s[i];
        if(ch!=')'){
            st.push(ch);
        }
        else{
            if(!st.empty()){
                char uparWala= st.top();
                if(uparWala=='(' && ch==')'){
                    count=count+2;
                    st.pop();
                }
            }
        }
        i++;
    }
    cout<<count;
    
}