#include<iostream>
using namespace std;
int main(){

    // Print the digits of a no.
    // int n;
    // cout<<"Enter the value"<<endl;
    // cin>>n;
    // int i=1;
    // while(n>0){
    //     int rem=n%10;
    //     cout<<rem;
    //     cout<<",";
    //     n=n/10;}

//  TO print a num from int digits

// int digit[]= {3,4,6,9};

// int ans =0;
// for(int i=0;i<4;i++){
//     ans=ans*10+digit[i];
// }
// cout<<ans<<endl;
// }


// for no. of set bit(means binary form main kitne "1" hai)

int n=3;
int ans =0;

while (n !=0)
        // so increment set bit count
        // found one set bit 
{
    if(n& 1){
        ans++;
    } 
    // right shift
    n=n>>1;
    
}

