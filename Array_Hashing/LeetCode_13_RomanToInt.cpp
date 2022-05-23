/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <map>
using namespace std;


int romanToInt(string s) {
        std::map<char, int> romankeys = {{'I',1},{'V',5}, {'X',10}, {'L',50}, {'C', 100}, {'D', 500},{'M', 1000}};
        int result = 0;
        for (int i=0; i < s.length(); i++)
        {
            cout << "romankey = " << romankeys[s[i]] << endl;
            
            cout << "i = " << i << endl;
            if (((i+1) < s.length()) && (romankeys[s[i]] < romankeys[s[i+1]]))
                result -=romankeys[s[i]];
            else
                result +=romankeys[s[i]];
        
            cout << "result = " << result << endl;
        }
        
        return result;
    }

int main()
{

    int output = romanToInt("III");
    cout <<"res =" << output << endl;

    return 0;
}
