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
     void solve(TreeNode* root1,TreeNode* root2,int x){
         if(root1==nullptr && root2==nullptr)return;
         if(root1 && root2 && x%2==1){
                 int c=root1->val;
                 root1->val=root2->val;
                 root2->val=c;       
         }
         
         solve(root1->left,root2->right,x+1);
         solve(root2->left,root1->right,x+1);
        
     }
    
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(root==nullptr) return nullptr;
        solve(root->left,root->right,1);
        return root;
    }
};