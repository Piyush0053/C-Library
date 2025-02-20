#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};


// This function should return head to the DLL

        void convert(Node* root,Node*& head ){
        if(root==NULL)return;
        
        convert(root->right,head);
        root->right= head;
        if(head!=NULL){
            
            // here uses the doubly linked list concept
            // that point the prev node to the back of the node
            head->left=root;
        }
        // point head back to the node
        head=root;
        
        convert(root->left, head);
    }

    int main(){
        Node* root=NULL;
        Node* head=NULL;
        convert(root,head);
        cout<<head;
    }
