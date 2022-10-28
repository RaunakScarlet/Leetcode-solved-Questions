class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
         vector<vector<string>>ans;
        unordered_map<string,vector<string>>umap;
        for(auto x:strs){
            string y=x;
            sort(x.begin(),x.end());
            umap[x].push_back(y);
        }
        for(auto x:umap){
            ans.push_back(x.second);
        }
        return ans;
        
    }
};