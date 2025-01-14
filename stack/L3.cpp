#include<bits/stdc++.h>
using namespace std;

// Leetcode 155--MINStack

// vector<pair<int, int> st;
// void push(int val){
//     if(st.empty()){
//         pair<int, int> p;
//         p.first=val;
//         p.second=val;
//         st.push_back(p);
//     }
//     else{
//         pair<int,int> p;
//         p.first=p.val;
//         p.second= min(val, st.back().second);
//         st.push(p);
//     } 
// }

// void pop(){
//     return pop_back();
// }
// void top(){
//     return st.back().first;
// }

// void getMin(){
//     return st.back().second;
// }


// *****************************
int main(){
       
int val=5;
push( val);
pop();
top();
getMin();



    return 0;
}