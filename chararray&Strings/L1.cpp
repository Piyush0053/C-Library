#include<iostream>
using namespace std;
int main(){
    // char ch[100];
    // cin>>ch;
    // for(int i=0;i<5;i++){
    //     cout<<"index is: "<< ch[i]<<endl;
    // }

// For printing multiple lines in character.
    // char ch[100];
    // cin.getline(ch,50);
    // cout<<ch<<endl;

// &****************************************
// Remove Spaces from Liness 
    // char ch[100];
    // cin.getline(ch,20);
    // cout<<"Old line is:"<< ch<<endl;
    // int i=0; 
    // while(ch[i]!='\0'){
    //     if(ch[i]==' ')
    //     ch[i]='@';
    //     i++;
    // }
    // cout<<"new line is"<<ch<<endl;


char ch[100];
ch[2]=' ';
ch[0]='B';
ch[1]='a';
ch[4]=' ';
ch[3]='b';
ch[5]='b';
cout<<ch;
    return 0;
}