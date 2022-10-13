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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==nullptr) return ans;
        queue<TreeNode*>q;
        q.push(root);
        bool flag=false;
        while(!q.empty()){
            int s=q.size();
            vector<int>v;
            
            for(int i=0;i<s;i++){
            TreeNode* temp=q.front();
            q.pop();
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                v.push_back(temp->val);
            }
            if(flag==false){
                ans.push_back(v);
                flag=true;
            }else{
                reverse(v.begin(),v.end());
                ans.push_back(v);
                flag=false;
            }
            
        }
        return ans;
    }
};