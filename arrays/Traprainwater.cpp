#include<iostream>
#include<vector>
using namespace std;
// Trapping Rain Water
int main(){
    
    int arr[]={4,2,0,3,2,5};
    int n =sizeof(arr)/sizeof(arr[0]);
    vector<int> left(n),right(n);

    left[0]= arr[0];
    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],arr[i]);
    }

    right[n-1]= arr[n-1];
    int j=n-2;
        for(;j>=0;j--){
            right[j]=max(right[j+1],arr[j]);
        }

    cout<<"Rain water for left:"<<endl;
    for(int k=0;k<left.size();k++){
        cout<<left[k]<<endl;
    }
    cout<<"Rain water for right:"<<endl;
    for(int k=0;k<right.size();k++){
        cout<<right[k]<<endl;
    }

    // Calculating water 
    int water=0;
    for(int i=0;i<n;i++){
        water+= min(left[i],right[i])-arr[i];
    }
    cout<<"Total rain Water:"<<water<<endl;

return 0;
}