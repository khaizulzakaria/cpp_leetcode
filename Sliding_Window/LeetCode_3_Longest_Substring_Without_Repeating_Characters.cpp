class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        std::set<char> substring;
        
        for (int i=0; i < s.length(); ++i)
        {
            if ( !substring.insert(s[i]).second)
                return substring.size();
        }
        
        return 0;
    }
};