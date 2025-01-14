#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
#include<limits.h>
using namespace std;

    // int factorial(int n){
    //     int ans; 
    //     if(n==1)return 1;
    //      ans=n*factorial(n-1);
    //      return ans;
        
    // }

    // int fibonacci(int n){
    //     if(n==1)return 0;
    //     if(n==2)return 1;
    //     int ans= fibonacci(n-1)+fibonacci(n-2);
    //     return ans;
    // }


    long long findvowel(string temp){
        long long count=0;
        for(int i=0;i<temp.length();i++){
            if(temp[i]=='a')count++;
            if(temp[i]=='e')count++;
            if(temp[i]=='i')count++;
            if(temp[i]=='o')count++;
            if(temp[i]=='u')count++;
        }
        return count;
    }


    // Print fibonacci
    long long fibonacci(int n){
        if(n==1)return 0;
        if(n==2)return 1;
        long long ans= fibonacci(n-1)+fibonacci(n-2);
        

    return ans;

    }


    void printcount(int n){
        if(n==0)return ;

        printcount(n-1);
        cout<<n<<" ";
    }

    int factorial(int n){
        if(n==0)return 1;
        int ans= n* factorial(n-1);
       
        return ans;
    }

    bool findres(int n){
    
        if(n==1)return true;
        int ans=0;
        
        while(n!=0){
            int d= n%10;
            ans+=pow(d,2);
            n/=10;
        }
            cout<<ans<<" ."<<endl;
        findres(ans);
       
        return false;
    }

    void findmin(int arr[], int n, int i, int& min){
        if(i>=n)
        {
            return;
        }
        if(arr[i]<min){
         min=arr[i];
        }
        findmin(arr,n,i+1,min);
    }

    void findstr(string s, int n, int i, char k, vector<int>& store){
        if(i>=n)return;

        if(s[i]==k){
          store.push_back(i);
        }

        findstr(s,n,i+1,k,store);
        
        

    }
    void printall(int n){
        if(n==0)return;

        printall(n/10);
        int digit=n%10;
        cout<<digit<<" ";
    }
    
    

    
    void calci(int n,int i ,int& count){
        if(i>n)return;
        int temp=i;

        while(temp!=0){
            int d=temp%10;
            if(d==1)count++;
            temp/=10;
        }

        
        calci(n,i+1,count);
    }

        
int main(){
   
    

    // int n=13;
    //     int i=1;
    //     int count=0;
    //     calci(n,i,count);
    // cout<<count;


    // int n=010;
    // printall(n);

    // string s="piyushi";
    // int i=0;
    // int n=s.length();
    // vector<int> store;
    // char key='i';
    //  findstr(s,n,i,key,store);
    //     for(auto i: store){
    //         cout<<i<<" ";
    //     }

    //     cout<<endl;


    // Happy number
    // int n=19;
    //  cout<<findres(n);


    
    

        


    // int n;
    // cout<<"Enter The values to be printed"<<endl;
    // cin>>n;
    // Factorial start from line no 4;
    // int ans= factorial(n);
    // cout<<"Ans is:"<<ans<<endl;

    // int result = fibonacci(n);
    
    // cout<<result;
    // cout<<"k"<<endl;

    // *****************************
    // string s="aba";
    // int n=s.length();
    // long long count=0;
    // for(int i=0;i<n;i++){
    //     for(int j=1;j<=n-i;j++){
        
    //       string temp= s.substr(i,j);
    //       cout<<temp<<endl;
    //         count+= findvowel(temp);
    //     }
    // }
    // cout<<count;
// *************************************
    // string s="aab";

    // string ans="";
    // for(int i=0;i<s.length();i++){
    //     if(i<s.length() && s[i]==s[i+1]){
    //         if(s[i+2]==s[i+1]){
    //             cout<<"a "<<endl;
    //         }
    //         swap(s[i+1],s[i+2]);
    //     }
    // }
    // cout<<s;
    
// int n;
// cin>>n;
    // cout<<fibonacci(n);

    // printcount(n);

    // cout<<factorial(n);

   

//    Array using Recursion


    // int arr[]={2,34,56,7,8};
    // int i=0;
    // int n=5;
    // int min=INT_MAX;
    //   findmin(arr,n,i, min);
    //   cout<<"ans is:"<<min;
    return 0;
}