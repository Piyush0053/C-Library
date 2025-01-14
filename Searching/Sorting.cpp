#include<iostream>
#include<vector>
using namespace std;


int main(){
vector<int> arr{10,1,7,6,14,9};
int n=arr.size();

for(int round=1;round<n; round++){
    int val=arr[round];
    int j=round-1;
    for(;j>=0;j--){
        if(arr[j]>val){
            arr[j+1]=arr[j];
        }
        else{
            break;
        }
    }

    arr[j+1]=val;

}
for(auto value:arr){
    cout<<value<<endl;
}
 



    return 0;
}