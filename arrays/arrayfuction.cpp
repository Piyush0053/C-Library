// array using FUNCTIONS
#include<iostream>
using namespace std;

void printarray (int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void increment(int arr[],int size){
    arr[0]=arr[0]+10;
    printarray(arr,size);
}

int main(){
int arr[]={5,6,7};
int size=3;
//  increment(arr,size);
 printarray(arr,size);




}