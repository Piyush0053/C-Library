// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// void printsubarray_util(vector<int>& arr , int start , int end){

//     if(end==arr.size()){
//         return;
//     }
//     for(int i=start;i<=end;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     printsubarray_util(arr, start, end+1);

// }

// void printsubarray(vector<int>& arr){
//     for(int start =0;start<arr.size();start++){
//         int end =start;
//         printsubarray_util(arr,start, end);
//     }
// }

// int main(){

//     vector<int> arr{1,1,1};
//     printsubarray(arr);


//     return 0;
// }
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printsubarray_util(vector<int>& arr , int start , int end, int&count, int&k){

    if(end==arr.size()){
        return; 
    }
    int sum=0;
    for(int i=start;i<=end;i++){
        sum+=arr[i];
    }
    if(sum==k)count++;
    printsubarray_util(arr, start, end+1,count,k);

}

int printsubarray(vector<int>& arr, int&k){
    int count=0;
    for(int start =0;start<arr.size();start++){
        int end =start;
        printsubarray_util(arr,start, end, count, k);
    }

    return count;
}

int main(){

    vector<int> arr{1,1,1};
    int k=2;
    int final=0;
    cout<<printsubarray(arr,k);
    // cout<<final;


    return 0;
}