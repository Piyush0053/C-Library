        else{
            cout<<temp->val<<" ";
            if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }
        
    }
}

// int maxDepth( TreeNode* root){
//     if(root==NULL)return 0;

//     int left=maxDepth(root->left);
//     int right=maxDepth(root->right);
//     int ans=max(left,right)+1;
//     return ans;
// }

// int findDiameter(TreeNode* root){
//     if(root==NULL)return 0;

//     int onlyleft=findDiameter(root->left);
//     int onlyright=findDiameter(root->right);
//     int inFull=maxDepth(root->left)+maxDepth(root->right);

//     return max(onlyleft,max(onlyright,inFull));
// }

// bool checkid(TreeNode* root1,TreeNode* root2 ){
//     if(root1==NULL && root2==NULL)return true;
//     if(root1==NULL || root2==NULL)return false;

//     if((root1->val==root2->val) && checkid(root1->left,root2->right) && checkid(root1->left,root2->right)){
//         return true;
//     }
    
//         return false;
    

// }


// bool mirror(TreeNode* root1){
//     if(root1==NULL)return true;
    
//     return checkid(root1->left,root1->right);
// }

int findIndex(vector<int>inorder,int element,int presize){
    for(int i=0;i<presize;i++){
        if(element==inorder[i]){
            return i;
        }
    }
    return -1;
}

TreeNode* buildTreepretoin(vector<int>& inorder, vector<int>& preorder,  int presize,int &preindex ,int inorderStart, int inorderEnd){
    if(preindex>=presize || inorderStart>inorderEnd){
        return NULL;
    }

    int element=preorder[preindex++];
    TreeNode* root=new TreeNode(element);

    int index=findIndex(inorder,element,presize);
    // Left call
    root->left=buildTreepretoin(inorder,preorder,presize,preindex,inorderStart,index-1);
    root->right=buildTreepretoin(inorder,preorder,presize,preindex,index+1,inorderEnd);

    return root;

}

int main(){


    vector<int>inorder{3,1,4,5,2};
    vector<int> preorder{5,1,3,4};

    int presize=inorder.size();