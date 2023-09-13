#include<iostream>
using namespace std;
 #include<limits.h>

// Method 1 using FUNCTIONS

//  bool find(int arr[],int size, int key){

//     // linear search

//     for(int i=0;i<size;i++){
//         if(arr[i]==key)
//             return true;
        
//     }
//     // if not present
//     return false;
//  }

// int main(){
// int arr[]={1,3,5,7,8};
// int size=5;
// cout<<"enter the key to find";
// int key;
// cin>>key;


// if(find(arr,size,key)){
//     cout<<"found"<<endl;
// }
// else{
//     cout<<"not found";
// }

int main(){

// method 2

// int arr[]={1,2,3,4,5,67,7,8,9};
// int size=9;
// int key=45;
// bool flag=0;

// for(int i=0;i<size;i++){
//     if(arr[i]==key){
        
//         flag++;
//     }
// }

// if(flag==1){
//     cout<<"found";
// }
// else{
//     cout<<"not found";
// }

// count 0's and 1's in a array 

// my method
// int arr[]={0,1,1,0,1,1,1,1,0,0,0,1,1,1,1};
// int size=15;
// int flag =0;int flag2=0;
 
// for(int i=0;i<size;i++){
//     // for counting of zeros
//     if(arr[i]==0){
//      flag++;
//     }
    
//     // for counting of ones
//     if(arr[i]==1){
//     flag2++;
//     }
// }
// cout<<flag<<endl;
// cout<<flag2<<endl;

// Ques.-----Maximum no. of an array
//  int arr[]={2,3,5,6,7,89,2,145,645,0};
// int size=10;
// // initialize the maxi variable with the minimum possible integer value 
// int maxi= INT_MIN;
// for(int i=0;i<size;i++){ 
//     if(arr[i]>maxi){
//          maxi=arr[i];
//     }
// }
// cout<<"maximum no. is"<<maxi<<endl;
// return 0;


// Ques.-----Minimum no. of an array

//   int arr[]={2,3,5,6,7,89,2,145,645,0};
//  int size=10;

// //   initialize the MIN variable with the mAXIMUM possible integer value 

//  int mini= INT_MAX;
//  for(int i=0;i<size;i++){
//     if(arr[i]<mini){
//         mini=arr[i];
//     }
//  }
// cout<<"minimum no is"<<mini<<endl;


// Ques Extreme points print in arrays

//  int arr[]={3,5,6,7,89,2,145,645,0};
//  int size=9;

// int start=0;
// int end=size-1;

// while(true){
//     if(start>end)
//     break;

//     cout<<arr[start]<<" ";
//     cout<<arr[end]<<" "<<endl;
//     start++;
//     end--;
// }

// Reverse of numbers in arrays

 int arr[]={3,5,6,7,89,2,145,645,0};
 int size=9;  
 int start=0;
 int end=size-1;

 while (start<=end){
 
  // Method 1
//  {
    // step1
    swap(arr[start],arr[end]);
    // step 2
    start++;
    end--;


// Method 2 for swapping using temporary variable
// c=arr[start];
// arr[start]=arr[end];
// arr[end]=c;
// start++;
//    end--;

// method 3 for swapping 
  //  arr[start]=arr[start]+arr[end];
  //  arr[end]=arr[start]-arr[end];
  //  arr[start]=arr[start]-arr[end];
  //  start++;
  //  end--;

// Method 4 for swapping using "XOR" gate



 }
  
  for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
  }


}
