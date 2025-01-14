#include<bits/stdc++.h>
using namespace std;


// fOR INSERTING ONE STACK IN ONE ARRAY
// class Stack{
//     public: 
//     int *arr;
//     int size;
//     int top;

//     Stack(int size){
//         arr= new int[size];
//         this->size= size;
//         top=-1;
//     }

//     // functions

//     void push(int data){
//         if(top-size>1){
//             top++;
//             arr[top]=data;
//         }
//         else{
//             cout<<"Stack Overflow"<<endl;
//         }
//     }

//     void pop(){
//         if(top==-1){
//             cout<<"Stack Underflwo"<<endl;
//         }
//         else{
//             top--;
//         }

//     }

//     void getTop(){
//         if(top==-1){
//             cout<<"Stack is already empty"<<endl;
//         }
//         else{
//             return arr[top];
//         }
//     }
//     int getsize(){
//         return top+1;
//     }


//     bool isempty(){
//         if(top==-1){
//             return true;
//         }
//     }
//     else{
//         return false;
//     }

// };

// *******************************
// FOR INSERTING TWO STACK IN ONE ARRAY

// class Stack{
//     public: 
//     int *arr;
//     int size;
//     int top1;
//     int top2;

//     Stack(int size){
//         arr= new int[size];
//         this->size= size;
//         top1=-1;
//         top2=size;

//     }

//     void push1(int data){
//         if(top2-top1==1){
//             cout<<"Overflow"<<endl;
//         }
//         else{
//             top1++;
//             arr[top1]=data;
//         }
//     }

//     void pop1(){
//         if(top1==-1){
//             cout<<"Underflow"<<endl;
//         }
//         else{
//             top1--;
//         }
//     }
//     void push2(int data){
//         if(top2-top1==1){
//             cout<<"Overflow"<<endl;
//         }
//         else{
//             top2--;
//             arr[top2]=data;
//         }
//     }

//     void pop2(){
//         if(top2==size){
//             cout<<"Underflow"<<endl;
//         }
//         else{
//             top2++;
//         }
//     }
// };

// FindMiddle

void printMiddle(stack<int>& st, int &totalsize){
    if(st.size() == (totalsize+1)/2){
        cout<<"Middle elemetn is: "<<st.top();
        return;
    }

    int temp=st.top();
    st.pop();

    printMiddle(st,totalsize);

    st.push(temp);
}

int main(){

// *************
// Find Middle Element in the stack

    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
   
   int size= st.size();
   printMiddle(st, size);









    // Reverse string using stack
    // string S="(Piyush)";

    // stack<char> st;
    // for(int i=0;i<S.size();i++){
    //     st.push(S[i]);
    // }
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
}