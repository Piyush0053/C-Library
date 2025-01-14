#include<bits/stdc++.h>
using namespace std;
class Node{
    public:

    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val=val;
        left=NULL;
        right=NULL;
    }
};

void solve(Node* r1, vector<vector<int>>& arr){
    queue<Node*> q;
    q.push(r1);
    q.push(NULL);
    vector<int> level;
    while(!q.empty()){
        Node* temp= q.front();
        q.pop();
        if(temp==NULL){
           arr.push_back(level);
           level.clear();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            level.push_back(temp->val);
            if(temp->left) q.push(temp->left);
            if(temp->right)q.push(temp->right);
        }
    }
}
int main(){
    // Level Order Traversal

    Node* r1= new Node(3);
    r1->left=new Node(9);
    r1->right=new Node(20);
    r1->right->left=new Node(15);
    r1->right->right=new Node(7);

    vector<vector<int>> arr;
    solve(r1,arr);
    for( auto i: arr){
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}