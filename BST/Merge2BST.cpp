#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x):data(x),left(NULL),right(NULL){}
};

    void convert(Node* root, Node*& head){
        if(root==NULL)return;
        
        convert(root->right,head);
        root->right= head;
        if(head!=NULL){
            head->left=root;
        }
        head=root;
        
        convert(root->left, head);
    }

    Node* mergeLL(Node* prev1, Node* prev2){
        if(prev1==NULL)return prev2;
        if(prev2==NULL)return prev1;
        
        Node* ans=NULL;
        Node* tail =NULL;

        if(prev1->data>prev2->data){
            ans=prev2;
            prev2=prev2->right;
        }else{
            ans=prev1;
            prev1=prev1->right;
        }
        tail=ans;

        while(prev1!=NULL && prev2!=NULL){
            if(prev1->data >= prev2->data){
                tail->right=prev2;
                prev2=prev2->right;
            }
            else{
                tail->right=prev1;
                prev1=prev1->right;
            }
            tail=tail->right;
       }
        if(prev1!=NULL){
            tail->right=prev1;
        }
        if(prev2!=NULL){
            tail->right=prev2;
        }
        return ans;
    }

    void print(Node* root){
        Node* temp=root;

        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->right;
        }
    }

int main(){
    // tree1
    Node *root1=new Node(5);
    root1->left= new Node(3);
    root1->right= new Node(6);
    root1->left->left= new Node(2);
    root1->left->right= new Node(4);
   
    // tree2
    Node *root2=new Node(2);
    root2->left= new Node(1);
    root2->right= new Node(3);
    root2->right->right= new Node(7);
    root2->right->right->left= new Node(6);
    Node* prev1=NULL;
    Node* prev2=NULL;
    convert(root1, prev1);
    convert(root2, prev2);

    Node* merge=NULL;
   merge=  mergeLL(prev1, prev2);
    print(merge);


}