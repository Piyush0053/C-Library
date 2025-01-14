// #include<iostream>
// #include<vector>
// using namespace std;

// int binarysearch(int arr[],int x,int size){
//     int start=0;
//     int end=size-1;
//         int mid=(start+end)/2;
//     while(start<=end){

//         if(arr[mid]==x){
//             return mid;
//             break;
//         }
//         else if(x>arr[mid]){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//          mid=(start+end)/2;
//     }
//     return -1;
// }
// int main(){
//     int size,x;
//     cin>>x;
//     int arr[]={1,2,3,6,4,5,7};
//     size=7;
//     int element=binarysearch(arr,x,size);
//     cout<<element;
// }
