#include<iostream>
using namespace std;
int main(){

// int count=0;
// cin>>n;
// for(int i=0;i<n;i++){
//     count=count+1;
// cout<<count;
// }
 
  int n, i, c = 0;
  printf("Enter any number n:");
  scanf("%d", &n);

  //logic
  for (i = 1; i <= n; i++) {
      if (n % i == 0) {
         c++;
      }
  }

  if (c == 2) {
        printf("n is a Prime number");
  }
  else {
         printf("n is not a Prime number");
  }
 



}