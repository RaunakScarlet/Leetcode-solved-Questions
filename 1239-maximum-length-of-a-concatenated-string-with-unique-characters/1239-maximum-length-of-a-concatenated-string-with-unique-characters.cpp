class Solution {
public:
    
     bool isunique(string a, string b)
    {   
        
        unordered_map<char,int>mp;
        for(int i=0; i<a.size(); i++)
        {
            mp[a[i]]++;
            if(mp[a[i]]>=2) return false; 
        }
        for(int i=0; i<b.size(); i++)
        {
            if(mp.find(b[i])!=mp.end()) return false; 
        }
        return true;
        
    }

    int solve(vector<string>&arr, int i, int n,string temp)
    {
        if(i>=n) return 0;
        int take = INT_MIN;
        int notake = solve(arr,i+1,n,temp);
        if(isunique(arr[i],temp))
        {
            temp+=arr[i];
            take = arr[i].size() + solve(arr,i+1,n,temp);
        }
        return max(take,notake);
    }

    
    
    int maxLength(vector<string>& arr) {
        int n = arr.size();
        string temp;
        return solve(arr,0,n,temp);
    }
};