#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Ques--1 Move all -ve no. to left side of array
// // method 2
// int negaoneside(int arr[],int arr_size,int l,int h){
//     while(l<h){
//         if(arr[l]<0){
//             l++;
//         }
//         else if(arr[h]>0){
//             h--;
//         }
//         else{
//             swap(arr[l],arr[h]);
//         }
//     }      
// }
// int main(){
// int arr[]={10,-2,4,-3,45,12,-1};
// int arr_size=sizeof(arr)/sizeof(arr[0]);
// // method 1
// // sort(arr.begin(),arr.end());

// // method 2
// int l=0;

// int h=arr_size-1;
// int ans =negaoneside(arr,arr_size,l,h);

// for(auto value:arr){
//     cout<<value<<" ";
// }
// }



// **********************************************
// Ques--2   Commom elements in 3 arrays
// vector<int>A{1,2,3,4,5};
// vector<int>B{3,4,6,7};
// vector<int>C{4,5,6,8};
// for(int i=0;i<A.size();i++) {
//     for(int j=0;j<B.size();j++) {
//         for(int k=0;k<C.size();k++) {
//             if((A[i]==B[j])&&(A[i]==C[k])&&(B[j]==C[k])) {
//                 cout << A[i] << " ";
//             }
//         }
//     }
// }


// **************************************
// Ques--3 Find first repeating elemnt in array
// #include<iostream>
// #include<vector>
// using namespace std;
// int repeat(int arr[],int n){
// for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         if(arr[i]==arr[j]){
//             return i;
//         }
//     }

// }
// return -1;
// }
// int main(){
// int arr[]={1,2,3,5,3,2};
// int n = sizeof(arr) / sizeof(arr[0]);
// int index=repeat(arr, n);
// cout<<"Repeating value is "<<arr[index]<<endl;
//     return 0;
// }

// ****************************************
//Ques ---4  left rotate an arrar by 1 element
// int main(){int first;
//     vector<int>arr{1,2,3,4,5};
//          first=arr[0];
//     for(int i=0;i<arr.size();i++){
//         swap(arr[i],arr[i+1]);
//     }
//         arr[arr.size()-1]=first;
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// ********************************888
// Ques--5 factorial of an no after 13
int factor(int arr[],int n){
    
    string digit;
    for(int i=n-1;i>0;i--){
        digit.push_back(arr[i]);
    }
    
}
int main(){
    int n;
    cin>>n;
    int arr[]={};
    factor(arr,n);
    return 0;
    
}

// ***********************************8
// Ques--6 Sort 0,1,2 in an array

// int main(){
//     vector<int> arr{0,1,2,1,0,1,2,0};

    // Method 1
    // sort(arr.begin(),arr.end());

// Method 2

    // int zero,ones,twos;
    // zero=ones=twos=0;
    // for(int i=0;i<arr.size();i++){
    //     if(arr[i]==0){
    //         zero++;
    //     }
    //    else if(arr[i]==1){
    //         ones++;
    //     }
    //     else{
    //         twos++;
    //     }
    // }
    // int i=0;
    // while(zero--){
    //     arr[i]=0;
    //     i++;
    // }
    // while(ones--){
    //     arr[i]=1;
    //     i++;
    // }
    // while(twos--){
    //     arr[i]=2;
    //     i++;
    // }

    // Method--3
    // // 3-Pointer approach

    // int start,middle,end;
    // start=middle=0;
    // end=arr.size()-1;
    // while(middle<=end){
    // if(arr[middle]==0){
    //     swap(arr[start],arr[middle]);
    //     middle++;
    //     start++;
    // }
    // else if(arr[middle]==1){
    //     middle++;
    //     }
    // else{
    //     // arr[middle]==2
    //     swap(arr[middle],arr[end]);
    //     end--;
    // }
    // }
    // for(auto value:arr){
    //     cout<<value<<" ";
    // }
// }

// *******************************************
    // QUes--7 Find duplicate of an array
// int main(){
//     vector<int> arr{1,4,2,3,1};
//     // vector < int > findDuplicates(vector < int > & arr, int n) {
//   sort(arr.begin(),arr.end());
//     for(int i=0;i<arr.size()-1;i++){
//       if (arr[i] == arr[i + 1]) {
//         cout << arr[i]<<" ";
//       }
//     }
// }

    // Method 1 --BY changing values in an array
    // sort(arr.begin(),arr.end());
    // for(int i=0;i<arr.size()-1;i++){
    //     if(arr[i]==arr[i+1]){
    //         cout<<arr[i];
    //     }
    // }

        

