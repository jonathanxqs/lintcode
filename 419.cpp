class Solution {
public:
	/**
     * @param s Roman representation
     * @return an integer
     */
    /*
    题意: 将罗马数字转换成int
    按照转换表模拟即可
    */
    int romanToInt(string s) {
        map<char, int> Num;
        Num['I'] = 1;
        Num['V'] = 5;
        Num['X'] = 10;
        Num['L'] = 50;
        Num['C'] = 100;
        Num['D'] = 500;
        Num['M'] = 1000;
        //Roman digit rule
        int ans = Num[s[s.length() - 1]];
        for (int i = s.length() - 2; i >= 0; i--) {
            if (Num[s[i]] < Num[s[i + 1]])
                ans -= Num[s[i]];
            else
                ans += Num[s[i]];
        }
        return ans;
    }
};