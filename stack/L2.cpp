#include<bits/stdc++.h>
using namespace std;
// insert at bottom
    // (
//         void solve(stack<int>& st,int target){
//          if(st.empty()){
//             st.push(target);
//             return;
//         }

//         int temp= st.top();
//         st.pop();

//         solve(st,target);
//         st.push(temp);

//     }

//     void insertAtBottom(stack<int>& st){
//     if(st.empty()){
//     cout<<"Stack is already empty no insertion takes place"<<endl;
//     return;
//     }

//     int target=st.top();
//     st.pop();
//     solve(st,target);
//     }
// // )

// Print Stack
// ************************************8
// Reverse in a Stack

// Insert at bootom
    // void insertAtBottom(stack<int>& st,int target){
    //      if(st.empty()){
    //         st.push(target);
    //         return;
    //     }

    //     int temp= st.top();
    //     st.pop();

    //     insertAtBottom(st,target);
    //     st.push(temp);

    // }


    // void reversestack(stack<int>& st){
    //     if(st.empty()){
    //         return;
    //     }

    //     int target=st.top();
    //     st.pop();
        
    //     reversestack(st);
    //     // recursive call for insert at bottom |
    //     insertAtBottom(st, target);            
        
    // }

void printstack(stack<int> &st){
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}

void solve(stack<int>& st, int& target){
    if(st.empty()){
        st.push(target);
        return;
    }

    int temp=st.top();
    st.pop();

    solve(st,target);
    st.push(temp);
}

// void insertAtBottom(stack<int>& st){
//     int target=st.top();
//     st.pop();
//     solve(st,target);
// }

void reverse(stack<int>& st){
    if(st.empty()){
        return;
    }

    int target=st.top();
    st.pop();

    reverse(st);
    solve(st,target);
}

void insertelementinStack(stack<int>& st, int& target){
    if(st.empty()){
        st.push(target);
        return;
    }

    if(st.top()>=target){
        st.push(target);
        return;
    }

    int temp=st.top();
    st.pop();

    insertelementinStack(st, target);
    st.push(temp);

}

    void sortstack(stack<int>& st){
        if(st.empty()){
            return;
        }

        int target=st.top();
        st.pop();
        sortstack(st);
        insertelementinStack(st, target);
    }

int main(){

    // stack<int> st;
    // st.push(11);
    // st.push(2);
    // st.push(33);
    // st.push(4);
    // st.push(123);  
   
    // insertAtBottom(st);

    // reverse(st);

    // sortstack(st);

    string s= "((a+b)*b)";

    stack<char> st;

    bool flag= false;

    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch=='(' || ch=='+'){
            st.push(ch);
        }
        else{
            if(!st.empty()){
                char topele= st.top();
                st.pop();
                if(topele=='+'){
                    flag=true;
                    char ele= st.top();
                    if(ch==')' && ele=='('){
                        flag=true;
                    }
                    else{
                        flag= false;
                    }
                }
                else{
                    flag=false;
                }
            }
            else{
                // when stack is empty
                flag= false;
            }
        }
    }


    if(flag){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false";
    }



return 0;


    // printstack(st);

    return 0;
}