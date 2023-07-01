class Solution {
public:
    int reverse(int x) {
        int isneg = x < 0 ? -1:1;
        int res = 0;
        while (x != 0){
            short d = (x % 10) * isneg;
            if (long(res) * 10 + d > 2147483647)
                return 0;
            res = res * 10 + d;
            x /= 10;
        }
        return res * isneg;
    }
};