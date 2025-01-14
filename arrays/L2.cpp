#include<iostream>
#include<vector>
using namespace std;
// int main(){

// // create vector

// // Method 3
// vector<int> arr;

// int ans=(sizeof(arr)/sizeof(int));
// cout<<ans<<endl;

// cout<<arr.size()<<endl;
// cout<<arr.capacity()<<endl;

// // insert elements
// arr.push_back(5);
// arr.push_back(6);

// // print this array
// for(int i=0;i<arr.size();i++){
//    cout<<arr[i]<<" ";
// }
// cout<<endl;

// // for remove/delete element
// arr.pop_back();

// // print this array
// for(int i=0;i<arr.size();i++){
//    cout<<arr[i]<<" ";
// }
// cout<<endl; 
 

// // this line means that the size of the array is 10 
// // and we store value of each element to be -101

// //Method 2
// vector<int>brr(10,-101);
// cout<<"size of b"<<" "<<brr.size()<<endl;
// cout<<"capacity  of b"<<" "<<brr.capacity()<<endl;

// // print this array
// for(int i=0;i<brr.size();i++){
//    cout<<brr[i]<<" ";
// }
// cout<<endl; 

// // if we take size at run time
// int n;
// cout<<"enter the value of n"<<endl;
// cin>>n;

// vector<int>drr(n,-101);
// // print this array
// for(int i=0;i<drr.size();i++){
//  cout<<drr[i]<<" ";
// }
// cout<<endl; 


// //Method 3 
// vector<int>crr{10,20,30};

// // print this array
// for(int i=0;i<crr.size();i++){
//  cout<<crr[i]<<" ";
// }
// cout<<endl; 

// cout<<" vector crr is empty or not"<<crr.empty()<<endl;

// vector<int>err;
// cout<<" vector err is empty or not"<<err.empty()<<endl;
//    return 0; 

int findUnique(vector<int>arr){
    int ans=0;

    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    return ans;
}



int main(){

    // Unique Element
//  int n;
//  cout<<"Enter the size of n";
//  cin>>n;

// vector<int>arr(n);
// cout<<"Enter the Elements"<<endl;
// for(int i=0;i<arr.size();i++){
//     cin>>arr[i];
// }

// int uniqueElement= findUnique(arr);

// cout<<"Unique Element is"<<uniqueElement<<endl;


// Union Of two Arrays

// int arr[]={1,32,67,3,4};
// int size1=5;
// int brr[]={5,6,7,8};
// int size2=4;

// vector<int>ans;

// for(int i=0;i<size1;i++){
//     ans.push_back(arr[i]);
// }
// for(int i=0;i<size2;i++){
//     ans.push_back(brr[i]);
// }

// for(int i=0;i<ans.size();i++){
//     cout<<"Union of arrays are"<<ans[i]<<endl;
// }

// Intersection of arrays

// vector<int>arr{2,3,3,4,5,6,8,9};

// vector<int>brr{3,3,4,1,5,6,7};


// vector<int>ans;
// for(int i=0;i<arr.size();i++){
//     for(int j=0;j<brr.size();j++){
//         if(arr[i]==brr[j]){
//             brr[j]=-1;
//             ans.push_back(arr[i]);
//             // break;
//         }
//     }
// }

// for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<<endl;
// }



2}
