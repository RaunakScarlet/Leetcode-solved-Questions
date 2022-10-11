class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
         int a = INT_MAX;
        int b = INT_MAX;
        
        for(int i = 0; i < nums.size() ; i++) {
		
            if(nums[i] > b) {      
                return true;
            }
            if(nums[i] > a && nums[i] < b) {  
                b = nums[i];
            }
            if(nums[i] < a) {     
                a = nums[i];
            }
        }
         return false; 
    }
};