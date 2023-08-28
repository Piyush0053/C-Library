#include<stdio.h>
#include<conio.h>
void main(){
    int a[10][10],b[10][10],r1,r2,c1,c2,i,j,c[10][10],k;

    printf("enter the order of first matrix");
    scanf("%d%d",&r1,&c1);
    printf("enter the order of second matrix");
    scanf("%d%d",&r2,&c2);

    if(c1!=r2){
        printf("multiplication not possible");

    }
 else{
printf("enter the order of first matrix");
  for(i=1;i<=r1;i++){
    for(j=1;j<=c1;j++){
       // printf("\nenter a[%d][%d]",i,j);
        scanf("%d",&a[i][j]);
    }
  }
printf("enter the order of second matrix");
for(i=1;i<=r2;i++){
    for(j=1;j<=c2;j++){
        // printf("enter b[%d][%d]",i,j);
        scanf("%d",&b[i][j]);
    }
}
 }

//multiplication time
for(i=1;i<=r1;i++){
    for(j=1;j<=c2;j++){
        c[i][j]=0;
        for(k=1;k<=c1;k++){
            c[i][j]=c[i][j]+a[i][j]*b[i][j];
        }
    }
}
printf("multiplication is   \n");
for(i=1;i<=r1;i++){
      
    for(j=1;j<=c2;j++){
        
        printf("%d",c[i][j]);
          
         
    }
    printf("\n");

}

}