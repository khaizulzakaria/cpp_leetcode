class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> ans(nums.size(), 1);
        
        int prefix =1;
        for(int i = 0; i < nums.size(); ++i)
        {
            ans[i] = prefix;
            prefix *= nums[i];
        }    
        
        int posfix = 1;
        for (int i = nums.size(); i > 0 ; --i)
        {
            ans[i-1] *= posfix;
            posfix *= nums[i-1];
        }
        
        return ans;
    }
};