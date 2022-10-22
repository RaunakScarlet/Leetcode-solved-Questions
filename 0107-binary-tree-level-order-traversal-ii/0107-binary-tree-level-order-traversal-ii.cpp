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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
    
        vector<vector<int>>ans;
        if(root==nullptr) return ans;
        
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            
            vector<int>help;
            for(int i=0;i<s;i++){
                auto front=q.front();
                q.pop();
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
                help.push_back(front->val);
                
            }
            ans.insert(ans.begin(),help);
        }
        return ans;
    }
};