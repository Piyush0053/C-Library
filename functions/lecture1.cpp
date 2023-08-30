#include<iostream>
using namespace std;

// void printnumber(int num){
//     cout<<num<<endl;
// }

// int main(){
// int a=5;
//  printnumber(a);


// return 0;

// }


// fuction for add two numbers

// int sum(int a,int b){
//     int c;
//     c=a+b;
// return c;

// }
// int main(){
// int a=5;
// int b=6;
// int result;
// result = sum(a,b);
// cout<<result;
// return 0;
// }

// max of 3no's

// int max(int x,int y,int z){

//    int  bigno=(x>y>z)?((z>y>x)?z:y):((y>z>x)?x:y);
//     return bigno;
// }

// int main(){
//     int x,y,z,num;
//     x=2;y=3;z=1;
//     num=max(x,y,z);
//     cout<<num<<endl;
//     return 0;   
// }



// counting from 1 to n

// void counting(int n){
//     for(int i=1;i<=n;i++){
//         cout<<i<<endl;
//     }   
// }
// int main(){
// int n,count;

// cin>>n;
//  counting(n);
//     return 0;
// }


// program for function of grade and students

// using ternary operator
// int num(int marks){
//     char max;
//    max= (marks>=90)?'A':((marks>=80)?'B':((marks>=70)?'C':((marks>=60)?'D':'E')));
//    return max;
// }

// int main(){
//     int marks;char grades;
//     cin>>marks;
//      grades=num(marks);
//      cout<<grades;
// }

// sum of even no's upto n

// int summation(int n){ int sum=0;
//     for(int i=1;i<=n;i=i+1){
//         if(i%2==0){
//         sum=sum+i;
//         }
        
//     }
//     return sum;
// }

// int main(){
// int n,add;
// cin>>n;

//   add =summation(n);
// cout<<add;
//     return 0;
// }

// area of the circle

//  float areacircle(int r){
//     float area=3.14*r*r;
//     return area;
// }


// int main(){
//     int a;
//     cin>>a;
//     float area=areacircle(a);
//     cout<<area;
// }

//even or odd using functions
// void num(int n){
//     (n%2==0)?(cout<<"even no."):(cout<<"odd no.");
// }

// int main(){
//     int a;
//     cin>>a;
//     num(a);
//     return 0;
// }


// // factorial using functions

// int fact(int n){
//     int fac=1;
//     for(int i=1;i<=n;i++){
//         fac=fac*i;
//     }
//     return fac;
// }

// int main(){
//   int a;
//   cin>>a;
//   int factorial=fact(a);
//   cout<<"factorial of a no. "<<a<<"is"<<factorial<<endl;



//     return 0;
// }

// prime no.

// void prime(int n){ int c=0;
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             c++;
//         }
//     } 
//     if(c==2){
//     cout<<"prime no";
// }
// else{
//     cout<<"not prime";
// }
// }


// int main(){
// int a;
// cin>>a;
// prime(a);
//     return 0;
// }

// all prime no from 1 to N

void prime(int n){int c=0;
for(int i=2;i<=n;i++){
    if(n%i==0){
        c++;
       
    }
}
if
}

int main(){
int a;
cin>>a;
prime(a);


    return 0;
}