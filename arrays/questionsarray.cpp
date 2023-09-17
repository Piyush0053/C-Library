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

//--------------------------------------------------------


// QUEs 2
// UNION OF ARRAYS


// int main(){

// int n1,n2;
// cout<<"Enter the size of n1 and n2"<<endl;
// cin>>n1>>n2;

// vector<int>arr(n1);
// // taking input for first array
// cout<<"enter elements for first array"<<endl;

// for(int i=0;i<arr.size();i++){
//     cin>>arr[i];
// }
// cout<<endl;

// // taking input for second array
// vector<int>brr(n2);
// cout<<"enter elements for second array"<<endl;
// for(int i=0;i<brr.size();i++){
//     cin>>brr[i];
// }

// vector<int>ans;
// // push all elements of vector arr
// for(int i=0;i<n1;i++){
//     ans.push_back(arr[i]);                
// }

// // push all elements of vector brr
// for(int i=0;i<n2;i++){
//     ans.push_back(brr[i]);                
// }

// // print ans array
// cout<<"printing ans array"<<endl;
// for(int i=0;i<ans.size();i++){
//     cout<<ans[i]<<" ";
// }
// cout<<endl;


// ques 3

// INTERSECTION OF 2 ARRAYS

// int main(){
//   vector<int>arr{1,2,3,3,4,5};
//   vector<int>brr{2,3,3,7,89};
//  vector<int>ans;
 
// //  outer loop on arr vector
// for (int i = 0; i < arr.size(); i++)
// {
//   int element=arr[i];
//   // for every element run loop on brr
//    for( int j=0;j<brr.size();j++){
//     if(element==brr[j]){
//     // mark if elements are repeat
//     // INT-MIN ki jagah hum bhi value le sakte hai ex.==-1,2,0 
//     // bas wo value hamare array mai nahi honi chahiye
//     brr[j]=INT8_MIN;
//         ans.push_back(element);
//         // we canalso use break here
//         // break;x`
//     }
//    }
// }

// // print ans
// for(auto value:ans){
//     cout<<value<<" ";

// }


// QUES 4==Interview ques
// PAIR SUM==Find a pair that upon addition gives value equals to sum.
 
// int main(){

// vector<int>arr{1,3,5,7,2,4,6};
// // print all pairs
// // outer loop will traverse for each element
// int sum=9;
// for (int i = 0; i < arr.size(); i++)
// {
//     int element=arr[i];

//     // for every element ,will traverse on aage wale elements
//     for(int j=i+1;j<arr.size();j++){
//         // for printing the pairs
//         cout<<"("<<element<<","<<arr[j]<<")"<<endl;
//         // for finding sum
//         if (element+arr[j]==sum)
//         {
//             cout<<"pair of sum is"<<element<<" "<<arr[j]<<endl;
//         }
        
//     }   
// }


// QUES 5
// TRIPLET SUM 
//  int main(){
//  vector<int>arr{10,20,30,40,50};
//  int sum=80;
//  for(int i=0;i<arr.size();i++){
//      int ele1=arr[i];
//  for(int j=i+1;j<arr.size();j++){
//      int ele2=arr[j];
//  for(int k=j+1;k<arr.size();k++){
//      int ele3=arr[k];
 
//  if(ele1+ele2+ele3==sum){
//     cout<<"pairs are"<<ele1<<" "<<ele2<<" "<<ele3<<endl;
//                         }
//   }
//  }
//   }

// QUADRET SUM
//  int main(){
//      vector<int>arr{10,20,30,40,50};

//  int sum=100;
//  for (int i = 0; i < arr.size(); i++)
//  {
//     int ele1=arr[i];
//     for(int j=i+1;j<arr.size();j++){
//         int ele2=arr[j];
//         for (int k = j+1; k < arr.size(); k++)
//         {
//             int ele3=arr[k];
//             for (int l = k+1; l < arr.size(); l++)
//             {
//                 int ele4=arr[l];
//                 if (ele1 + ele2 +ele3 + ele4 == sum)
//                 {
//                     cout<<"quad pairs are"<<ele1<<","<<ele2<<","<<ele3<<","<<ele4<<endl;

//                 }
                
//             }
            
//         }
        
//     }
//  }

// QUES 5
// SORT 0's and 1's

// int main(){
//     vector<int>arr{0,1,0,1,0,1,0,1,0,1};
//     int start =0;
//     int end =arr.size()-1;

// int i=0;
// while(i!=end){
//     if(arr[i]==0){
//         // swap from left
//         swap(arr[start],arr[i]);
//         i++;start++;
//     }
//         else
//        {
//         swap(arr[i],arr[end]);
//         end--;
        
//        }    
    
// }
// //  print
// for(auto value:arr)
// cout<<value<<" ";
//     return 0;





}