// #include <bits/stdc++.h>
// using namespace std;
// struct TreeNode{
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode(int x):val(x),left(NULL),right(NULL){}
// };

//     void convert(TreeNode* root, TreeNode*& head){
//         if(root==NULL)return;
        
//         convert(root->right,head);
//         root->right= head;
//         if(head!=NULL){
//             head->left=root;
//         }
//         head=root;
        
//         convert(root->left, head);
//     }

//     TreeNode* mergeLL(TreeNode* prev1, TreeNode* prev2){
//         if(prev1==NULL)return prev2;
//         if(prev2==NULL)return prev1;
        
//         TreeNode* ans=NULL;
//         TreeNode* tail =NULL;

//         if(prev1->val>prev2->val){
//             ans=prev2;
//             prev2=prev2->right;
//         }else{
//             ans=prev1;
//             prev1=prev1->right;
//         }
//         tail=ans;

//         while(prev1!=NULL && prev2!=NULL){
//             if(prev1->val >= prev2->val){
//                 tail->right=prev2;
//                 prev2=prev2->right;
//             }
//             else{
//                 tail->right=prev1;
//                 prev1=prev1->right;
//             }
//             tail=tail->right;
//        }
//         if(prev1!=NULL){
//             tail->right=prev1;
//         }
//         if(prev2!=NULL){
//             tail->right=prev2;
//         }
//         return ans;
//     }

//     void print(TreeNode* root){
//         TreeNode* temp=root;

//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->right;
//         }
//     }

// int main(){
//     // tree1
//     TreeNode *root1=new TreeNode(5);
//     root1->left= new TreeNode(3);
//     root1->right= new TreeNode(6);
//     root1->left->left= new TreeNode(2);
//     root1->left->right= new TreeNode(4);
   
//     // tree2
//     TreeNode *root2=new TreeNode(2);
//     root2->left= new TreeNode(1);
//     root2->right= new TreeNode(3);
//     root2->right->right= new TreeNode(7);
//     root2->right->right->left= new TreeNode(6);
//     TreeNode* prev1=NULL;
//     TreeNode* prev2=NULL;
//     convert(root1, prev1);
//     convert(root2, prev2);

//     TreeNode* merge=NULL;
//    merge=  mergeLL(prev1, prev2);
//     print(merge);


// }



class Solution {
    public:
     void convert(TreeNode* root, TreeNode*& head){
              if(root==NULL)return;
              
              convert(root->right,head);
              root->right= head;
              if(head!=NULL){
                  head->left=root;
              }
              head=root;
              
              convert(root->left, head);
          }
      
          TreeNode* mergeLL(TreeNode* prev1, TreeNode* prev2){
              if(prev1==NULL)return prev2;
              if(prev2==NULL)return prev1;
              
              TreeNode* ans=NULL;
              TreeNode* tail =NULL;
      
              if(prev1->val>prev2->val){
                  ans=prev2;
                  prev2=prev2->right;
              }else{
                  ans=prev1;
                  prev1=prev1->right;
              }
              tail=ans;
      
              while(prev1!=NULL && prev2!=NULL){
                  if(prev1->val >= prev2->val){
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
          
          void print(TreeNode* root, vector<int>& final ){
              TreeNode* temp=root;
      
              while(temp!=NULL){
                  final.push_back(temp->val);
                  temp=temp->right;
              }
          }
        vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
            TreeNode* prev1=NULL;
               TreeNode* prev2=NULL;
          convert(root1, prev1);
          convert(root2, prev2);
      
          TreeNode* merge=NULL;
         merge=mergeLL(prev1, prev2);
              vector<int> final;
              print(merge,final);
              return final;
        }
    };