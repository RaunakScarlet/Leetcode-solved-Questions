class Solution {
public:
    bool check(vector<int>& nums) {
       int x=0;
       int maxi=INT_MAX;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>=nums[i-1] && nums[i]<=maxi){
               
            }else{
                maxi=nums[0];
                  x++; 
                if(nums[i]>maxi){
                   return false;
               
                }
               
            }
        }
             if(x>1) return false;
            return true;
    }
};