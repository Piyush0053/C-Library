#include<bits/stdc++.h>
using namespace std;

    // void reverse(queue<int>& q ){
    //     if(q.empty()){
    //         return;
    //     }

    //     int t= q.front();
    //         q.pop();

    //     reverse(q);
    //     q.push(t);
    // }

    void slidingwidow(vector<int>& arr, int n, int k){
        
        deque<int> q;

        // first insert K -ve elements

        for(int i=0;i<k;i++){
            if(arr[i]<0){
                q.push_back(i);
            }
        }

        // Now iterate from k+1
        for(int i=k;i<n;i++){
            // Give ans of first window

            if(q.empty()){
                cout<<0<<" ";
            }
            else{
                cout<<arr[q.front()]<<" ";
            }

            // removal of starting index from queue so that we can insert new index
            // pop front wale elements ka hoga

            while((!q.empty()) && (i-q.front()>=k)){
                q.pop_front();
            }

            // insertion of new index
            if(arr[i]<0){
                q.push_back(i);
            }

        }
        if(q.empty()){
                cout<<0<<" ";
            }
            else{
                cout<<arr[q.front()]<<" ";
            }


    }


int main(){

//     queue<int> q;
    

//     q.push(3);
//     q.push(6);
//     q.push(9);
//     q.push(8);
//     q.push(2);

  
//     reverse(q);
 

//    while(!q.empty()){
//     cout<<q.front()<<" ";
//     q.pop();
//    }


    vector<int> arr{-2,-3,-1,-4,-5};
    int n= arr.size();
    int k=3;
    slidingwidow(arr,n,k);

}