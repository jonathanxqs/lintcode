class Solution {
public:
    /*
    题意为求最长回文子串， 直接枚举子串首尾位置再判断是否会问，时间复杂度为O(N^3)，
    换个思路，枚举回文串的对称中心位置，向两侧扫描检测最长回文长度时间复杂度为O(N^2)
    对于最长回文子串问题有对应O(N)算法--Manacher算法
    笔者觉得面试中应当不会有这么高的要求，有兴趣可以自行了解该算法
    */    
    string longestPalindrome(string s) {
        string str = "", ans = "";
        int len = s.length();
        int maxl = -1, cnt;
        for (int i = 0; i < len; i++) {
            str += '#';
            str += s[i];
        }
        str += '#';
        // extend to #a#b#  ; 2len+1 total length
        // don't care about the odd and even
        for (int i = 1; i < 2 * len; i++) {
            cnt = 0;
            while ((i - cnt >= 0) && (i + cnt <= 2 * len) && (str[i - cnt] == str[i + cnt]))
                cnt++;
            cnt--;
            if (cnt > maxl) {
                maxl = cnt;
                ans = s.substr((i - cnt) / 2, (i + cnt) / 2 - (i - cnt) / 2);
            }
        }
        return ans;
    }
};

// Total Runtime: 47 ms