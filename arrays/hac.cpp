
#include <iostream>

using namespace std;


int main() {
    int arr[100]={1,4,3,2};
       int start=0;
       int size=4;
       int end=size-1;
       while(start<=end){
           swap(arr[start],arr[end]);
           start++;
           end--;
       }
           for(int i=0;i<size;i++){
               cout<<arr[i]<<" ";
           }
       
    return 0;
}