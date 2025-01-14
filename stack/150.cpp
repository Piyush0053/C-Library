// 150. Evaluate Reverse Polish Notation

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> tokens{"10","6","9","3","+","-11","*","/","*","17","+","5","+"};

    stack<int> st;

    int i=0;
    while(i<tokens.size()){
        string ch= tokens[i];
        if(ch=="+"){
            if(!st.empty()){
                int no1=st.top();
                st.pop();
                int no2=st.top();
                st.pop();
                st.push(no1+no2);
            }
        }
        else if(ch=="-"){
            if(!st.empty()){
                int no1=st.top();
                st.pop();
                int no2=st.top();
                st.pop();
                st.push(no1-no2);
            }
        }
        else if(ch=="*"){
            if(!st.empty()){
                int no1=st.top();
                st.pop();
                int no2=st.top();
                st.pop();
                st.push(no1*no2);
            }
        }
        else if(ch=="/"){
            if(!st.empty()){
                int no1=st.top();
                st.pop();
                int no2=st.top();
                st.pop();
                st.push(no2/no1);
            }
        }
        else{
            st.push(stoi(ch));
        }
        i++;
    }
    int ans= st.top();
    st.pop();
    cout<<"ans is"<<ans<<endl;


    return 0;
}