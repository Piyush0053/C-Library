#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){ 
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

int solve(Node* root,int& sum){
    if(root==NULL)return 0;

    int left=max(0,solve(root->left,sum));
    int right= max(0,solve(root->right,sum));

    sum=max(sum,root->data+left+right);
    return root->data;
}


int main(){
    Node* root= new Node(-10);
    root->left=new Node(9);
    root->right=new Node(20);
    root->right->left=new Node(15);
    root->right->right=new Node(7);

    int max_sum=INT_MIN;
    solve(root,max_sum);
    cout<<max_sum;

}