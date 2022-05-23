class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::set<int> numbers = {};
        for(auto& n:nums)
        {
            if (numbers.find(n) != numbers.end())
                return true;
            numbers.insert(n);
        }
        return false;
        
    }
};