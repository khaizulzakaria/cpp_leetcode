class Solution {
public:
    string intToRoman(int num) {
        std::vector<std::pair<string,int>> mapSymbols = 
        {
            {"M", 1000},
            {"CM",900},
            {"D", 500},
            {"CD", 400},
            {"C", 100},
            {"XC", 90},
            {"L",50},
            {"XL", 40},
            {"X",10}, 
            {"IX", 9}, 
            {"V",5}, 
            {"IV",4}, 
            {"I",1}
        };
        
        string result = "";
    
        for (auto& [s,v] : mapSymbols)
        {
            int numberOfChar = num/v;
            if(numberOfChar !=0)
            {
                for (size_t i = 0; i < numberOfChar; ++i)
                    result += s; 
                num %= v;
            }
        }
        
        return result;
    }
};