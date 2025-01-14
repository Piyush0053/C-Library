// #include<stdio.h>
// int main(){
//     int i,j;
//     int n=2;
//     int a[10][10],b[10][10],c[10][10],k;

// for(i=0;i<n;i++){
//     for(j=0;j<n;j++){
//         scanf("%d",&a[i][j]);
//     }
// }
// for(i=0;i<n;i++){
//     for(j=0;j<n;j++){
//         scanf("%d",&b[i][j]);
//     }
// }
// for(i=0;i<n;i++){
//     for(j=0;j<n;j++){
//         c[i][j]=0;
//         for(k=0;k<n;k++)
//         {
//             c[i][j] += a[i][k]*b[k][j];   
//         }
//     }
// }

// return 0;
// }


#include <stdio.h>

int main() {
  int a[]={10,11,-1,56,67,5,4};
  int *p,*q;
  p=a;
  q=&a[0]+3;
  printf("%d\n %d\n %d \n", (*p)++,(*p)++,*(++p));
  printf("\n%d\n",*p);
  printf("%d\n", (*p)++);
  q--;
  printf("%d\n",(*(q+2))--);
  printf("%d\n",*(p+2)-2);
  printf("%d\n",*(p++-2)-1);
  
  return 0;
}