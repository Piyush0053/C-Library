#include<iostream>
#include<math.h>
using namespace std;

 int main(){int n;
cin>>n;
int ans =0;
int i=0;

while(n!=0){
    // for calculation of bits like as % modulus
    int bit=n&1;
     ans=(bit*pow(10,i))+ans;
    //  right shift karke hum n ki value ko find karte jayenge
    n=n>>1;
    i++;
}
cout<<ans<<endl;

 }