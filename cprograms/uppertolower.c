
#include <stdio.h>

int main(){
    char ch;
    printf("enter");
    scanf("%ch",&ch);
    if(ch>='A'&& ch<='Z'){
        ch=ch+32;
        printf("%d",ch);
    }
    else if(ch>='a'&& ch<='z'){
        ch=ch-32;
        printf("%d",ch);
    }
    else
    printf("special");
    return 0;
}