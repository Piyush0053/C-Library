// #include<iostream>
// #include <cstring>
// using namespace std;
// int main(){
// int arr[53];
// char arr1[106];
// bool arr2[23];
// int arr3[10]={1,2,3,4,5,6,7,12};
// char arr4[10]={'a','b','c'};
// bool arr5[23]={0,1};
// cout<<arr<<endl;
// cout<<arr1<<endl;
// cout<<arr2<<endl;
// cout<<arr3[2]<<endl;
// cout<<arr4<<endl;
// cout<<arr5[1]<<endl;


// double the value of output
// int n;
// cin>>n;
// int arr[100];
// for(int i=0;i<n;i++){
//     cin>>arr[i];

// }

// for(int i=0;i<n;i++){
//     cout<<2*arr[i]<<" ";
// }
// cout<<endl;


// making the values of output equals to 1

// int n;
// cin>>n;
// int arr[100];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }

// // my method
// for(int i=0;i<n;i++){
//     cout<<"1"<<" ";
// }

// // babbar's method
// for(int i=0;i<n;i++){
//     arr[i]=1;
// }
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }



// for marking all the values of array equals to zero
//  int arr[100]={0};
// cout<<arr[3];
// int a[5]={1,2,3,4,5};
// memset(a,0,sizeof(a));
// for(int i=0;i<5;i++)
// cout<<a[i]<<" ";
// }


#include <iostream>
#include<limits.h>
using namespace std;
bool linear(int arr[],int size,int key){
  for(int i=0;i<size;i++){
    if(arr[i]==key)
      return true;   
    
}
    return false;
}


// int main(){
// int arr[5]={2,3,5,10,7};
//   int size=5;
//   int key;
  
//   cout<<"Enter the value to be search"<<endl;
//   cin>>key;
//   if(linear(arr,size,key)){
//    cout<<"key is present"<<endl; 
//   }
//   else
//   {cout<<"key is not present"<<endl;
//   }
//   return 0;
// }
int count(int arr[],int size,int flag1,int flag2){
  for(int i=0;i<size;i++){
    if(arr[i]==1){
      flag1++;
    }
    return flag1;
  
    if(arr[i]==0){
      flag2++;
    }
    return flag2;
  }
}
// int main(){
//   int arr[]={0,0,1,1,0,0,1,0};
//   int size=8;
//   int flag1=0;
//   int flag2=0;
//   count(arr,size,flag1,flag2);
//   cout<<flag1<<endl;
//   cout<<flag2<<endl;
// } 


// FInd maximum and minimum no.
int main(){
  int arr[]={2,5,3,6,1,10,22,12,16};
  int size=9;
  int maxnum=INT_MIN;
  int mininum=INT_MAX;
  for(int i=0;i<size;i++){
    if(arr[i]>maxnum){
      maxnum=arr[i];
    }
  }
    cout<<"the maximum no. is"<<maxnum<<endl;
    for(int i=0;i<size;i++){
    if(arr[i]<mininum){
      mininum=arr[i];
    }
  }
  cout<<"The minimum no. is"<<mininum<<endl;
  return 0;
}


// Find Extreme Print in Array

// int main(){
//   int arr[]={1,2,3,4,6,7,8};
//   int size=7;
//   int start=0;
//   int end=size-1;
 
//   while(true){
//     if(start>end)
//     break;

//     if(start==end){
//       cout<<arr[start]<<" ";
//     }
//     else{
//     cout<<arr[start]<<" ";
//     cout<<arr[end]<<" ";

//     }
//     start++;
//     end--;
//   }
//   return 0;
// }

// reverse an array

// int main(){
//   int arr[]={1,2,3,4,6,7,8};
//   int temp;
//   int size=7;
//   int start=0;
//   int end=size-1;
 
//   while(start<=end){
//     // if(start==end){
//     //   cout<<arr[start]<<endl;
//     // }
    

//     arr[start]=arr[start]+arr[end];
//     arr[end]=arr[start]-arr[end];
//     arr[start]=arr[start]-arr[end];
    
//     // swap(arr[start],arr[end]);
//     start++;
//     end--;

    
//   }
//   for(int i=0;i<size;i++){
//     cout<<arr[i]<<endl;
//   }
// return 0;

// }

