#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int x):data(x), left(NULL), right(NULL){}

};

class NodeData
{
public:
    int size, minVal, maxVal;
    bool validBST;

    NodeData(int sz, int mn, int mx, bool valid)
    {
        size = sz;
        minVal = mn;
        maxVal = mx;
        validBST = valid;
    }

    NodeData()
    { // Default constructor
        size = 0;
        maxVal = INT_MIN;
        minVal = INT_MAX;
        validBST = true;
    }
};

NodeData findLargestBST(Node *root, int &ans)
{
    if (root == NULL)
    {
        return NodeData(0, INT_MAX, INT_MIN, true);
    }

    NodeData leftkaAns = findLargestBST(root->left, ans);
    NodeData rightkaAns = findLargestBST(root->right, ans);

    // for the current Node

    NodeData currentNodeKaAns;

    currentNodeKaAns.size = leftkaAns.size + rightkaAns.size + 1;
    currentNodeKaAns.maxVal = max(root->data, rightkaAns.maxVal);
    currentNodeKaAns.minVal = min(root->data, leftkaAns.minVal);
    if (leftkaAns.validBST && rightkaAns.validBST && ((root->data > leftkaAns.maxVal) && (root->data < rightkaAns.minVal)))
    {
        currentNodeKaAns.validBST = true;
    }
    else
    {
        currentNodeKaAns.validBST = false;
    }

    if (currentNodeKaAns.validBST== true)
    {
        ans = max(ans, currentNodeKaAns.size);
    }

    return currentNodeKaAns;
}
/*You are required to complete this method */
// Return the size of the largest sub-tree which is also a BST

int main()
{

    Node *root = new Node(5);
    root->left = new Node(2);
    root->right = new Node(4);
    root->left->left = new Node(1);
    root->left->right = new Node(3);

    int ans = 0;

    findLargestBST(root, ans);
    cout << ans;
    // return ans;
}
