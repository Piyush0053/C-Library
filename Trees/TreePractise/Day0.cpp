#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x),left(NULL),right(NULL){}
};

TreeNode* buildTree(){
    int data;
    cin>>data;
    if(data==-1)return NULL;

    TreeNode* root= new TreeNode(data);
    root->left=buildTree();
    root->right=buildTree();

    return root;
}

void levelorder(TreeNode* root){
    if(root==NULL)return;

    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        TreeNode* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }

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


void verticalOrder(TreeNode* root, vector<vector<int>>& ans ){
    if(root==NULL)return;

    map<int,vector<int>> mp;
    queue<pair<TreeNode* ,int>> q;
    q.push(make_pair(root,0));

    while(!q.empty()){
        pair<TreeNode* ,int> temp=q.front();
        q.pop();
        TreeNode* front=temp.first;
        int level=temp.second;
        mp[level].push_back(front->val);
        if(front->left){
            q.push(make_pair(front->left,level-1));
        }
        if(front->right){
            q.push(make_pair(front->right,level+1));
        }
    }

    for (auto i : mp) {
        ans.push_back(i.second);
    }

}


int main(){

    TreeNode* root=NULL;
    root=buildTree();

    vector<vector<int>> ans;

    e
    // verticalOrder(root, ans);


    // for(auto i:ans){
    //     for(auto j:i){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // vector<int>inorder{3,1,4,5,2};
    // vector<int> preorder{5,1,3,4,2};

    // int presize=inorder.size();
    // int preindex=0;
    // int inorderEnd=presize-1;
    // int inorderStart=0;

    // TreeNode* root=NULL;
    // root=buildTreepretoin(inorder,preorder,presize,preindex,inorderStart,inorderEnd);

    // cout<<"start";
    // levelorder(root);


    // TreeNode* root1=NULL;
    // root1=buildTree();
    // root1->left=new TreeNode(2);
    // root1->right=new TreeNode(2);
    
    
    // cout<<mirror(root1);

    // cout<<checkid(root1,root2);

    // Print the tree
//    levelorder(root);

// int ans=0;
// cout<<maxDepth(root);

// cout<<findDiameter(root);




}