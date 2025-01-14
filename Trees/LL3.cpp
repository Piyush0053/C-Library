#include<bits/stdc++.h>
using namespace std;
//Build tree from Inoder And Preorder
// class Node{
//     public:

//     int data;
//     Node* left;
//     Node* right;

//     Node(int data){
//         this->data=data;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };

//     int findElement(int inorder[],int preSize,int element){
//         for(int i=0;i<preSize;i++){
//             if(inorder[i]==element){
//                 return i;
//             }
//         }
//         return -1;
//     }

// Node* findTraversalpreordertoInorder(int inorder[], int preorder[], int& preIndex,int preSize,int inorderStart, int inorderEnd,unordered_map<int,int> &mp){

//         // Base Case
//         if(preIndex>=preSize || inorderStart>inorderEnd){
//             return NULL;
//         }

//         // CASE A--> Creating root Node
//         int element= preorder[preIndex++];
//         Node* root= new Node(element);

//         // finding the left and right nodes from inorder array 
//         // int index=findElement(inorder,preSize,element);

//         int index=mp[element];

//         // CASE B-- Left Node recursion
//        root->left= findTraversalpreordertoInorder(inorder,preorder, preIndex,preSize,inorderStart,index-1,mp);
//         // CASE C-- Right Node recursion
//         root->right= findTraversalpreordertoInorder(inorder,preorder, preIndex,preSize,index+1,inorderEnd,mp);

//         return root;
//     }

// void levelorderTraversal(Node* root){
//     queue<Node*> q;
//     q.push(root);
//     q.push(NULL);

//     while (!q.empty()){
//         Node* temp=q.front();
//         q.pop();
//         if(temp==NULL){
//             cout<<endl;
//             if(!q.empty()){
//                 q.push(NULL);
//             }
//         }else{
//             cout<<temp->data<<" ";
//             if(temp->left){
//                 q.push(temp->left);
//             }
//             if(temp->right){
//                 q.push(temp->right);
//             }
//         }
//     }
// }

// int main(){
//     int inorder[]={40,20,50,10,60,30,70};
//     int preorder[]={10,20,40,50,30,60,70};
//     int preIndex=0;
//     int preSize=7;
//     int inorderStart=0;
//     int inorderEnd=preSize-1;
//     unordered_map<int,int> mp;
//     for(int i=0;i<preSize;i++){
//         mp[inorder[i]]=i;
//     }
   
//     cout<<endl<<"Making the Tree"<<endl;
//     Node* root=findTraversalpreordertoInorder(inorder,preorder,preIndex,preSize,inorderStart,inorderEnd,mp);

//     cout<<"Traversing in the tree"<<endl;
//     levelorderTraversal(root);
// }

// **************************************

// Build tree from Inoder And Postorder
class Node{
    public:

    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
void levelorderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
Node* findTraversalpostordertoInorder(int inorder[], int postorder[], int& postIndex,int postSize,int inorderStart, int inorderEnd,unordered_map<int,int> &mp){
     // Base Case
        if (postIndex<0 || inorderStart > inorderEnd) {
            return NULL;
        }

        // CASE A--> Creating root Node
        int element = postorder[postIndex--];
        Node* root = new Node(element);

        // finding the left and right nodes from inorder array
        // int index=findElement(inorder,preSize,element);

        int index = mp[element];

        // CASE C-- Right Node recursion
        root->right = findTraversalpostordertoInorder(
            inorder, postorder, postIndex, postSize, index + 1, inorderEnd, mp);

        // CASE B-- Left Node recursion
        root->left = findTraversalpostordertoInorder(
            inorder, postorder, postIndex, postSize, inorderStart, index - 1, mp);

        return root;
}

int main(){
    int inorder[]={9,3,15,20,7};
    int postorder[]={9,15,7,20,3};
    int postIndex=4;
    int postSize=5;
    int inorderStart=0;
    int inorderEnd=postSize-1;
    unordered_map<int,int> mp;
    for(int i=0;i<postSize;i++){
        mp[inorder[i]]=i;
    }
   
    cout<<endl<<"Making the Tree"<<endl;
    Node* root=findTraversalpostordertoInorder(inorder,postorder,postIndex,postSize,inorderStart,inorderEnd,mp);

    cout<<"Traversing in the tree"<<endl;
    levelorderTraversal(root);
}