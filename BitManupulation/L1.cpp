#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// int cleraIthbit(int& n, int i){
//     int mask=(~0<<i);
//     n=n&mask;
//     cout<<"After Changing "<<n<<endl;
// }

// int countsetbits(int n){
//     int count=0;
//     while (n!=0)
//     {
//         int lastdigit = (n&1);
//         if(lastdigit==1)count++;

//         n=n>>1;
//     }
//     return count;

    
// }


// ***********************

// Power of Heroes --leetcode Ques.2681.
// int getsum(vector<int> temp){
//     int max=INT_MIN;
//     for(int i=0;i<temp.size();i++){
//         if(temp[i]>max){
//             max=temp[i];
//         }

//     }


//     int min=INT_MAX;
//     for(int i=0;i<temp.size();i++){
//         if(temp[i]<min){
//             min=temp[i];
//         }

//     }

//     int finalsum = (max*max)*min;

//     return finalsum;
// }
// int main(){
// //     int n=10;
// //     // cleraIthbit(n,2);
// //     int ans= countsetbits(n);
// //     cout<<ans;

//         vector<int> nums{2,1,4};
        // int n=nums.size();
        // int sum=0;
        // int num=0;
        // while(num<(1<<n)){
        //     vector<int> temp;
        //     int i=0;
        //     while(i<n){
        //         int ch =nums[i];
        //         if(num & (1<<i)){
        //             temp.push_back(ch);
        //         }
        //         i++;
        //     }
        //     sum=sum+getsum(temp);
        //     num++;
        // }
//         cout<<"sum"<<sum;
//         return 0;
// }
// power of heroes ends here
// ****************************************************


// vector<int> getbinary(int n){
//     vector<int> ans;
//     int temp=n;
//     while(temp!=0){
//         int digit=temp%2;
//         ans.push_back(digit);
//         temp/=2;
//     }
//     return ans;
// }
// int main(){
//     int n= 11;
//     vector<int> binary = getbinary(n);
//     int i=0;
//     while(i<binary.size()){
//         if(binary[i]==1 && binary[i+1]==0){
//             i++;
//         }
//         else{
//            cout<<"false";
//         }
        
//     }
//     cout<<"true";
//     return 0;
// }
        

// ************************************8888
// Ques 14--  Longest Common Prefix

int main(){
    vector<string> strs{"flower","flow","flight"};
    string ans="";

}