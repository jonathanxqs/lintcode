class Solution {
public:
    /**
     * @param s input string
     * @return the longest palindromic substring
     */
    string longestPalindrome(string& s) {
        // Write your code here
        int i,j,k,lenS = s.size();
        int tmp_len;
        string rtLongPalin;
        int last_len = -1 , left_b = 0 ,right_b = 0 , max_len = 0;

        for (i=0;i<lenS;i++){
            if (i-last_len>=0)
                if (s[i] == s[i-last_len])

            else 
            if (i-last_len-1>=0)
                if ( s[i] == s[i-last_len-1]){
                    last_len += 2;
                }
                else {
                    last_len = -1;
                }

            if (last_len > max_len){
                max_len = last_len;
                right_b=i;
                left_b=i-last_len+1;
            }

        }

        for (i=left_b;i<=right_b;i++)
            rtLongPalin += s[i];

        return rtLongPalin;
    }
};