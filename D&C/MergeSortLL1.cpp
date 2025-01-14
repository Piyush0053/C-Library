#include<bits/stdc++.h>
using namespace std;

void merge(int* arr, int s ,int e){
    int mid= s+(e-s)/2;

    // find size of two new arrays
    int len1= mid-s+1;
    int len2= e-mid;

    // initialise two new arrays 
    int* left= new int[len1];
    int* right= new int[len2];


    // copy values in the array
    int k=s;
    for(int i=0;i<len1;i++){
        left[i]=arr[k];
        k++;
    }
    k=mid+1;
    for(int i=0;i<len2;i++){
        right[i]=arr[k];
        k++;
    }

    // now merge both

    int leftindex=0;
    int rightindex=0;
    int mainindex=s;

    while(leftindex<len1 && rightindex<len2){
        if(left[leftindex]<right[rightindex]){
            arr[mainindex++]=left[leftindex++];
        }else{
            arr[mainindex++]=right[rightindex++];
        }
    }

    // remaining left array elemnt
    while(leftindex<len1){
        arr[mainindex++]=left[leftindex++];
    }
    // remaining right array elemnt
    while(rightindex<len2){
        arr[mainindex++]=right[rightindex++];
    }




}

void mergesort(int* arr, int s, int e){
    // base case
    // if only one element is present in the array 
    // if s>e invalid array
    if(s>=e){
        return;
    }

    // find mid
    int mid=s+(e-s)/2;

    // for left side divide
    mergesort(arr,s,mid);
    // for right side

    mergesort(arr, mid+1, e);
    // now merge both arrays
    merge(arr, s, e);

}

int main(){


    int arr[]={7,3,2,16,24,4,11,9,3,4,4,5,6,65,3,-1,-3};
    int n=17;

    int s=0;
    int e=n-1;
  
    mergesort(arr,s,e);


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}