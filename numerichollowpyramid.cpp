#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
         int start=1;
        for(int j=0;j<2*i+1;j++){
            // first or last row
            if(i==0||i==n-1){
            if(j%2==0){
                cout<<start;
                start++;
            }
            else{
                cout<<" ";
            }
            
            }
            else{
                // first col
                if(j==0){
                    cout<<1;
                }
                

            }
        }
        cout<<endl;
     }
  
   
}