#include<stdio.h>
int main(){

int n;
printf("enter a no :");
scanf("%d",&n);
if(n%4==0){
    printf("leap year:");
}

else if(n%100!=0){
    printf(" not a leap year");
}

else{
    printf("not a leap year:");
}

    return 0;



}