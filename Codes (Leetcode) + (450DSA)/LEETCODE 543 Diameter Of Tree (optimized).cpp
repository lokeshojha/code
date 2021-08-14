/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int max(int a, int b){
        return a>b?a:b;
    }
    int height(TreeNode* root){
        if(root==NULL)
            return  0;
        return 1+max(height(root->left), height(root->right));
    }
    pair<int,int>helper(TreeNode* root){
        if(root==NULL){
            pair<int,int>p;
            p.first=0;
            p.second=0;
            return p;
        }
        pair<int,int>leftAns=helper(root->left);
        pair<int,int>rightAns=helper(root->right);
        
        int leftHeight=leftAns.first;
        int leftDia=leftAns.second;
        
        int rightHeight=rightAns.first;
        int rightDia=rightAns.second;
        
        int height=max(leftHeight, rightHeight)+1;
        int diameter=max(leftHeight+rightHeight, max(leftDia, rightDia));
        
        pair<int,int>p;
        p.first=height;
        p.second=diameter;
        return p;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        pair<int, int>p;
        p=helper(root);
        return p.second;
    }
};