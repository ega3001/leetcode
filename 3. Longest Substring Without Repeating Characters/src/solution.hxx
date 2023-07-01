#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        string temp;
        for (int i =0; i < s.length(); i++){
            if (temp.find(s[i]) == string::npos){
                temp += s[i];
            }
            else{
                if (temp.length() > res)
                    res = temp.length();
                temp = temp.substr(temp.find(s[i]) + 1) + s[i];
            }
        }
        if (temp.length() > res)
            res = temp.length();
        return res;
    }
};