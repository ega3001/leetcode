#include <map>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> signs = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int res = 0;
        
        int temp, prev_val;
        temp = prev_val = signs[*(s.begin())];
        if (s.length() > 1)
            for (auto c = ++s.begin(); c != s.end(); ++c){
                int val = signs[*c];
                
                if (val == prev_val){
                    temp += val;
                }
                else{
                    if (val < prev_val){
                        res += temp;
                        temp = val;
                    }
                    else
                        temp = val - temp;
                    prev_val = val;
                }
            }
        return res + temp;
    }
};