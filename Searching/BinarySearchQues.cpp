#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// int main(){
// vector<int> arr{1,2,3,4,1,1};
//  int n=arr.size()-1;
//   int x=1;
// 	int s=0;
// 	int count=0;
// 	int e=n-1;
// 	int mid=s+(e-s)/2;
// 	while(s<=e){
// 		if(arr[mid]==x){
// 			count++;
// 		}
// 		else if(arr[mid]>x){
// 			e=mid-1;
// 		}
// 		else{
// 			s=mid+1;
// 		}
// 		mid=s+(e-s)/2;
// 	}
// 	cout<<count;
// }


// int firstOccurence(vector<int> arr,int target){
//     int s=0;
//     int e=arr.size()-1;
//     int ans=-1;
//     int mid=s+(e-s)/2;
//     while(s<=e){
//         if(arr[mid]==target){
//             // ans store and then left
//         ans=mid;

//         // For first occurence
//         e=mid-1;

//         // For last Occurence
//         //s=mid+1;
//         }
//         else if(target>arr[mid]){
//             // search right
//             s=mid+1;
//         }
//         else if(target<arr[mid]){
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }
// // ************************
// // Ques--1
// // int main(){
// // vector<int> arr{1,3,4,4,4,4,4,4,6,7};
// // int target=4;
// // int indexOfFirstOcc = firstOccurence(arr,target);

// // cout<<"Ans is"<< indexOfFirstOcc<<endl;

// // // By using STL function
// // // first occurence in the array
// // auto v=lower_bound(arr.begin(),arr.end(),4);
// // cout<<"Ans2 "<<v-arr.begin()<<endl;

// // // last occurence
// // auto u=upper_bound(arr.begin(),arr.end(),4);
// // cout<<"Ans3-"<<u-arr.begin()<<endl;

// // // For finding total no. of occurence of the target
// // cout<<u-v;

// //     return 0;



// // }

// // ********************
// // Ques-2--Find the Peak element in the Mountain Array;
// int findPeakIndex(vector<int> arr){
//     int s=0;
//     int e=arr.size()-1;
//     int  mid=s+(e-s)/2;
//     while(s<e){
//         if(arr[mid]<arr[mid+1]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//         mid=s+(e-s)/2;
//     }
//     return s;
// }

// int main(){
//     vector<int> arr{0,2,5,3};
//      int s=0;
//     int e=arr.size()-1;
//     int  mid=s+(e-s)/2;
//     while(s<e){
//         if(arr[mid]<arr[mid+1]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//         mid=s+(e-s)/2;
//     }
//     cout<<"Peak Element is"<<s<<endl;
// }
// *****************************
// qUES--3
// fIND THE MISSING ELEMENT IN AN ARRAY USING BINARY SEARCH CONCEPT

// int main(){
//     vector<int> arr{1,2,3,4,5,6,7,8};
//     int s=0;
//     int e=arr.size();
//     while(s<=e){
//         if(arr[s]==s+1){
//             s++;
//         }
//         else{
//             cout<<s+1<<endl;
//             e--;
//         }
//     }
// }


// ************************
// // Ques 4--Find pivot element
// int findpivot(vector<int> arr){
// 	int s=0;
// 	int e=arr.size()-1;
// 	int mid=s+(e-s)/2;
// 	while(s<=e){
// 		if(mid+1<arr.size() && arr[mid]>arr[mid+1]){
// 			return {arr[mid]};
// 		}
// 		if(mid-1>=0 && arr[mid-1]>arr[mid]){
// 			return {arr[mid-1]};
// 		}
// 		if(arr[s]>=arr[mid]){
// 			e=mid-1;
// 		}
// 		else{
// 			s=mid+1;
// 			mid=s+(e-s)/2;
// 		}
// 	}
// 	return -1;
// }

// int main(){
// 	vector<int> arr{3,4,5,6,7,1,2};
// 	int ans=findpivot(arr);

// 	cout<<"Pivot Element is"<<ans<<endl;
// 	return 0;
// }

// *******************************************
// // Ques--5 Find square root of an element
// int findsqrt(int n){
// 	int s=0;
// 	int e=n;
// 	int target=n;
// 	int mid=s+(e-s)/2;
// 	int ans=-1;

// 	while(s<=e){
// 		if(mid*mid==target){
// 			return mid;
// 		}
// 		if(mid*mid>target){
// 			e=mid-1;
// 		}
// 		else{
// 			ans=mid;
// 			s=mid+1;
// 		}
// 		mid=s+(e-s)/2;
// 	}
// 	return ans;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int ans= findsqrt(n);
// 	cout<<"Ans is"<<ans<<endl;

// 	int precision;
// 	cout<<"Enter the number of floating digits in precision"<<endl;
// 	cin>>precision;

// 	double Finalans=ans;
// 	double step=0.1;
// 	for(int i=0;i<precision;i++){
// 		for(double j=Finalans;j*j<=n;j=j+step){
// 			Finalans=j;
// 		}
// 		step=step/10;
// 	}
// 	cout<<"Final ans is"<<Finalans<<endl;
// 	return 0;
// }

// ***********************************888
// Ques--6 Search in a nearly sorted array
// int binarysearch(vector<int> arr,int target){
// 	int s=0;
// 	int e=arr.size()-1;
// 	int mid=s+(e-s)/2;
// 	while(s<=e){
// 		if(arr[mid]==target){
// 			return mid;
// 		}
// 		if(mid-1 >= s && arr[mid-1]==target){
// 			return mid-1;
// 		}
// 		if(mid+1 <e && arr[mid+1]==target){
// 			return mid+1;
// 		}
// 		if(arr[mid]<target){
// 			s=mid+2;
// 		}
// 		else{
// 			e=mid-2;
// 		}
// 		mid=s+(e-s)/2;

// 	}
// }
// int main(){
// 	vector<int> arr{10,3,40,20,50,80,70};
// 	int target;
// 	cin>>target;
// 	int ans= binarysearch(arr,target);
// 	cout<<"ans is "<<ans<<endl;
	
// }


// ****************************
// Ques--7 Find division of 2 no. using binary search

// int divide(int dividend, int divisor) {
//         long s=0;
//         long e=abs(dividend);
//         long ans=0;
//         long mid=s+(e-s)/2;
//         while(s<=e){
//             if(abs(mid*divisor)==abs(dividend)){
//                 ans= mid;
//                 break;
//             }
//             if(abs(mid*divisor)>abs(dividend)){
//                 e=mid-1;
//             }
//             else{
//                 ans=mid;
//                 s=mid+1;
//             }
//             mid=s+(e-s)/2;
//         }
//         if((dividend<0 && divisor<0 )||(dividend>0 && divisor>0)){
//             return ans;
//         }
//         else{
//             return -ans;
//         }
//     }
	

    

