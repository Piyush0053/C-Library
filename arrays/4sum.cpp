// #include<bits/stdc++.h>
// using namespace std;
//     vector<vector<int>> fourSum(vector<int> nums, int k) {
//         sort(nums.begin(),nums.end());
//         set<vector<int>> st;

//         // for(int i=)

//     }

    int *solve(){
        int a=5;
        int* ans=&a;
        return ans;
    }
    int *rett(int a){
            a=100;
            int *ans=&a;
            return ans;

    }
// int main(){
// //    int value=*solve();
// //    cout<<value<<endl;

// //    int a=*rett(0);
// //    cout<<a;


// //  int main() {
//     // int* p=new int;
//     // *p = 42;
//     // cout<<*p;
//     // return 0;
// // }   
    
// }

// int* foo() {
//     int *p=new int;
//     * p=10;
//     return p;
// }

// int main() {
//     int* q = foo();
//     cout << *q << endl; // Expected output: 10, Actual output: some random value
//     return 0;
// }
int* foo() {
    int* p = new int; // Fix
    *p = 10;
    return p;
}
// int main() {
//     int* p= new int;
//     *p = 10;
//     cout<<*p;
//     return 0;
// }
// int main() {
//     int *q = foo();
//     cout << *q << endl;
//     return 0;
// }

// int main(){

//     int arr[5] = {1, 2, 3, 4, 5};
//     int* ptr = arr;
//     cout << "The value of the third element in arr is " << *(ptr + 2) << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n) {
	vector<bool> prime(n,true);
	for (int p = 2; p * p <= n; p++) {
		if (prime[p] == true) {
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}

	for (int p = 2; p <= n; p++)
		if (prime[p])
			cout << p << " ";
}


bool isprime(int i){
    if(i==1)return 0;
    
        for(int j=2;j<i;j++){
            if(i%j==0)return false;
        }
        return true;
}


vector<int> getdigit(int n){
    vector<int> d;
    int temp=n;
    while(temp!=0){
        int digit=temp%10;
        d.push_back(digit);
        temp/=10;
        
    }
    return d;
}
int main() {

    int n=111;
    vector<int> ans= getdigit(n);
    reverse(ans.begin(),ans.end());
    int sum=0;
    for(int i=0;i<ans.size();i=i+2){
        sum=sum+ans[i];
        sum+=(-1)*ans[i+1];
    }
    cout<<sum;


	// int n = 50;
	// SieveOfEratosthenes(n);
	// return 0;

    // int nums[10]={1,2,3,45,5,6,7,8,9,0};
    // int (*ptr)[10] =&nums;
    // cout<<(*ptr)[1]<<endl;

    // int n=10;
    // vector<int> arr;
    // for(int i=1;i<=n;i++){
    //     if(isprime(i)){
    //         arr.push_back(i);
    //     }
    // }
    // vector<vector<int>> ans;
    //     for(int i=0;i<arr.size();i++){
    //         for(int j=0;j<arr.size();j++){
    //             if(arr[i]+arr[j]==n){
    //                 vector<int> temp;
    //                 temp.push_back(arr[i]);
    //                 temp.push_back(arr[j]);
    //                 ans.push_back(temp);
    //             }
    //         }
    //     }    

        

    return 0;

}