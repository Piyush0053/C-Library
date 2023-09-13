#include<iostream>
#include<vector>
using namespace std;
int main(){

// create vector

// Method 3
vector<int> arr;

int ans=(sizeof(arr)/sizeof(int));
cout<<ans<<endl;

cout<<arr.size()<<endl;
cout<<arr.capacity()<<endl;

// insert elements
arr.push_back(5);
arr.push_back(6);

// print this array
for(int i=0;i<arr.size();i++){
   cout<<arr[i]<<" ";
}
cout<<endl;

// for remove/delete element
arr.pop_back();

// print this array
for(int i=0;i<arr.size();i++){
   cout<<arr[i]<<" ";
}
cout<<endl; 
 

// this line means that the size of the array is 10 
// and we store value of each element to be -101

//Method 2
vector<int>brr(10,-101);
cout<<"size of b"<<" "<<brr.size()<<endl;
cout<<"capacity  of b"<<" "<<brr.capacity()<<endl;

// print this array
for(int i=0;i<brr.size();i++){
   cout<<brr[i]<<" ";
}
cout<<endl; 

// if we take size at run time
int n;
cout<<"enter the value of n"<<endl;
cin>>n;

vector<int>drr(n,-101);
// print this array
for(int i=0;i<drr.size();i++){
 cout<<drr[i]<<" ";
}
cout<<endl; 


//Method 3 
vector<int>crr{10,20,30};

// print this array
for(int i=0;i<crr.size();i++){
 cout<<crr[i]<<" ";
}
cout<<endl; 

cout<<" vector crr is empty or not"<<crr.empty()<<endl;

vector<int>err;
cout<<" vector err is empty or not"<<err.empty()<<endl;



   return 0; 
}