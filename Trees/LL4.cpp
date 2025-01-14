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
void printans(vector<vector<int>& ans){
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void verticalorderTraversal(Node* root,vector<vector<int>& ans){
    if(root==NULL)return;
    
}


int main(){
     Node* root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);

    vector<vector<int> ans;
    verticalorderTraversal(root,ans);
    printans(ans);
    
   
    
}