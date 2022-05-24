//Solution 1
class Solution {
public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<std::vector<string>> anagramsGroups;
        std::map<std::array<int,26>, std::vector<string>> hashMap;
        
        for(const auto& inputStr: strs)
        {
            std::array<int, 26> count = {0};
            for (const auto& c : inputStr)
                count[c -'a'] += 1;
            
            hashMap[count].push_back(inputStr);
        }
        
        for (auto& [key,v] : hashMap)
            anagramsGroups.push_back(v);
            
        return anagramsGroups;
        }
};

// Solution 2
class Solution {
public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<std::vector<string>> anagramsGroups;
        std::map<std::string, std::vector<string>> hashMap;
        
        for(const auto& inputStr: strs)
        {
            string keyString = inputStr;
            sort(keyString.begin(), keyString.end());
            hashMap[keyString].push_back(inputStr);
        }
        
        for (auto& [key,v] : hashMap)
            anagramsGroups.push_back(v);
            
        return anagramsGroups;
        }
};