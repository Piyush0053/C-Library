// numeric half pyramid
#include<iostream>
using namespace std;
int main(){
    int n,i,j ;
    cin>>n;
// space
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
            
        }
      
    
// half front pyramid
for(int j=0;j<i+1;j++){
    cout<<i+j+1;
} 
// half reverse pyramid
 int start=i*2;   
for(j=0;j<i;j++){
  
    cout<<start;
    start=start-1;
    
}
cout<<endl; 

    }  
    
    return 0;
}