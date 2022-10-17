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
    int ans(TreeNode* root,bool &x){
        if(root==nullptr) return 0;
        int lh=ans(root->left,x);
        int rh=ans(root->right,x);
        if(abs(lh-rh)>=2 ){
            x=false;
        }
        return 1+max(lh,rh);
    }
    
    bool isBalanced(TreeNode* root) {
        if(root==nullptr) return true;
        bool x=true;
        ans(root,x);
        return x;
    }
};