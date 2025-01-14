#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

    bool sortcheck(int arr[] , int n, int i){
        if(i==n)return true;

        if(arr[i]>arr[i+1]){
           return false;
        }
        return sortcheck(arr,n,i+1);
        
    }

    int binarySearch(vector<int>& arr , int s, int e , int key){
        if(s>e)return -1;

        int mid= (s+e)/2;

        if(arr[mid]==key)return mid;

        if(arr[mid]<key){
            return binarySearch(arr,mid+1,e,key);
        }
        else{
            return binarySearch(arr,s,mid-1,key);

        }
    }

    void printsubsequences(string str, string output , int i){
        if(i>= str.length()){
            cout<<output<<endl;
            return;
        }

        // exclude
        printsubsequences(str, output , i+1);

        // include
        output.push_back(str[i]);
        printsubsequences(str,output, i+1);
    }

int main(){

    string str="abc";
    string output="";
    int i=0;
    printsubsequences(str,output,i);

    // vector<int> arr{1,3,4,6,7,45};
    // int key= 3;
    // int s=0;
    // int n=arr.size();
    // int e=n-1;
    // int ans= binarySearch(arr, s,e,key);
    // cout<<ans;

    // int arr[4]={1,1,1,1};
    // int n=4;
    // int i=0;
    // bool ans=sortcheck(arr,n,i);
    // cout<<ans;




    return 0;
}