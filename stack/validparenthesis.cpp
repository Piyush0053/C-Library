#include <bits/stdc++.h> 

using namespace std;
int main()
{
    string s="((s+v)*b)";
    stack<char> st;

    for(int i=0;i<s.length();i++){

        char ch=s[i];

        if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/'){

            st.push(ch);

        }

        else{

            if(ch==')'){

                bool isRedundant=true;

                while(st.top()!='('){

                    char top=st.top();

                    if (top == '+' || top == '-' || top == '*' || top == '/') {

                      isRedundant = false;

                    }

                    st.pop();

                }

                if(isRedundant==true){

                    cout<<"true";
                    return 0;

                }

                st.pop();

            }

        }

    }

    cout<<"false";
    return 0;
}