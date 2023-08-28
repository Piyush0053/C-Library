#include <stdio.h>
int main(){
    int a,b,c;
    printf("sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a=b||a=c){
        printf("equi");
    }
    else if(a=b&&b!=c){
        printf("isosceles");
    }
    else{
        printf("scalene");
    }
    return 0;
}