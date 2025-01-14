#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

bool findelement(int arr[][4],int rows,int col,int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==key){
                return true;
            }
        }
    }
    return false;
}

// Maximum no. in 2-D array

int findMax(int arr[5][4],int rows,int col){
    int maxinum=INT_MIN;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>maxinum){
                maxinum=arr[i][j];
            }
        }
    }
    return maxinum;

}
// Finding minimum number
int findMin(int arr[5][4],int rows,int col){
    int mini=INT_MAX;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>mini){
                mini=arr[i][j];
            }
        }
    }
    return mini;

}

int main(){

        // int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

        // // for printing the row-wise  elements of an array

        // for(int i=0;i<3;i++){
        //     for(int j=0;j<3;j++){
        //         cout<<brr[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

        // cout<<endl;
        // // for printing the column-wise  elements of an array

        // for(int i=0;i<3;i++){
        //     for(int j=0;j<3;j++){
        //         cout<<brr[j][i]<<" ";
        //     }
        //     cout<<endl;
        // }


        // int arr[4][3];
        // cout<<"Input the array";
        // for(int i=0;i<4;i++){
        //     for(int j=0;j<3;j++ ){
        //         cin>>arr[i][j];
        //     }
        // }
        // cout<<"Printing the array"<<endl;
        // for(int i=0;i<4;i++){
        //     for(int j=0;j<3;j++ ){
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }


        // ROW-SUM print  

        // int arr[5][4]={{1,2,3,4},{2,3,4,1},{5,6,1,3},{2,4,6,8},{1,9,9,6}};
        // int rows=5;
        // int col=4;
        // for(int i=0;i<4;i++){
        //     // for traversing in column
        //     int sum=0;
        //     for(int j=0;j<5;j++){
        //         // for printing sum
        //         sum=sum+arr[j][i];
        //     }
        //     cout<<sum<<" ";
            
        //     cout<<endl;
        // }



        // Search Element in 2-D array
        // int key =12 ;
        
        // cout<<findelement(arr,rows,col,key);
        // from line 4


        // int arr[5][4]={{1,2,3,4},{34,32,41,21},{5,6,23,39},{22,43,63,83},{24,92,94,61}};
        // int rows=5;
        // int col=4;

        // int maximumnum=findMax(arr,rows,col);
        // cout<<"Maximum no is"<<maximumnum<<endl;
        
        //  int minimumnum=findMin(arr,rows,col);
        // cout<<"Minimum no is"<<minimumnum<<endl;
        

        vector<vector<int> >arr(5,vector<int>(6,-8));
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size();j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }



    return 0;
}