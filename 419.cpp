class Solution {
public:
    /*
    题意: 将罗马数字转换成int
    按照转换表模拟即可
    */
    int romanToInt(string s) {
        map<char, int> num;
        num['I'] = 1;
        num['V'] = 5;
        num['X'] = 10;
        num['L'] = 50;
        num['C'] = 100;
        num['D'] = 500;
        num['M'] = 1000;
        int ans = Num[s[s.length() - 1]];
        for (int i = s.length() - 2; i >= 0; i--) {
            if (num[s[i]] < num[s[i + 1]])
                ans -= num[s[i]];
            else
                ans += num[s[i]];
        }
        return ans;
    }
};