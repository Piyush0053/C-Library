#include <bits/stdc++.h>
using namespace std;
//   Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//   Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


    void findsize(ListNode *head, int &size)
    {
        if (head == NULL)
            return;

        ListNode *temp = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            size++;
        }
    }

    TreeNode *makeBST(ListNode *head, int size)
    {
        if (size <= 0 || head == NULL)
        {
            return NULL;
        }
     
        TreeNode *leftSubTree = makeBST(head, size / 2);

        TreeNode *root = new TreeNode(head->val);

        root->left = leftSubTree;

        head = head->next;
        root->right = makeBST(head, size- size / 2 - 1);
        return root;
    }
    int main()
    {
        ListNode * head=NULL;
        
            TreeNode *root = NULL;
            int size = 0;
            findsize(head, size);
            root = makeBST(head, size);

           
        
    }