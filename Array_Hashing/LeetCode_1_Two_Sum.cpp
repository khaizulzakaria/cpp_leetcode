class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int,int> hashMap;
        
        for (int currIdx=0; currIdx < nums.size(); ++currIdx )
        {
            auto value = target - nums[currIdx];
            auto hashIdx = hashMap.find(value);
            if (hashIdx == hashMap.end())
            {
                hashMap[nums[currIdx]] = currIdx;
            }
            else
            {
                return {hashMap[value], currIdx};
            }
        }
        return {};
        
        
    }
};