class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::map<int,int> hashMap;
        std::vector<int> ans;
        
        for(const auto& num : nums)
            hashMap[num]+=1;
        
        priority_queue<pair<int, int> > pq;
        for(const auto& [key,value]: hashMap)
            pq.push({value,key});
        
        while (k!=0)
        {
            ans.push_back(pq.top().second);
            pq.pop();
            --k;
        }
        return ans;
        
    }
};