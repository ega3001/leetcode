#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int ri = s.length() - 1;
        while(ri > i){
            if (!isalnum(s[i])){
                ++i;
                continue;
            }
            if (!isalnum(s[ri])){
                --ri;
                continue;
            }
            if (tolower(s[i]) != tolower(s[ri]))
                return false;
            --ri;
            ++i;
        }
        return true;
    }
};