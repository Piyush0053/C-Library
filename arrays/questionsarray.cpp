#include<iostream>
#include<vector>
using namespace std;
// ques 1
//  int findunique(vector<int>arr){
//     int ans =0;
//     for(int i=0;i<arr.size();i++){
//         ans=ans^arr[i];
//     }
//     return ans;
//  }

// int main(){
//     // INTERVIEW QUESTION
// //   Find unique elements

// int n;
// cout<<"enter the size of array"<<endl;
// cin>>n;


// vector<int>arr(n);
// cout<<"enter the elements"<<endl;
// // taking input
// for(int i=0;i<arr.size();i++){
//     cin>>arr[i];
// }

// int uniqueElement= findunique(arr);

// cout<<"Unique element is"<<uniqueElement<<endl;


// QUEs 2
// UNION OF ARRAYS





int main(){

int n1,n2;
cout<<"Enter the size of n1 and n2"<<endl;
cin>>n1>>n2;

vector<int>arr(n1);
// taking input for first array
cout<<"enter elements for first array"<<endl;

for(int i=0;i<arr.size();i++){
    cin>>arr[i];
}
cout<<endl;

// taking input for second array
vector<int>brr(n2);
cout<<"enter elements for second array"<<endl;
for(int i=0;i<brr.size();i++){
    cin>>brr[i];
}

vector<int>ans;
// push all elements of array arr
for(int i=0;i<n1;i++){
                    
}




    return 0;
}