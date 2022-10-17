class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int>umap;
        for(int i=0;i<sentence.size();i++){
            umap[sentence[i]]++;
            
        }
        if(umap.size()<26) return false;
        return true;
    }
};