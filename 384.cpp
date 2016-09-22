class Solution {
public:
    /**
     * @param s: a string
     * @return: an integer 
     */
    std::map<char, int> mapCtoSub;
    int lengthOfLongestSubstring(string s) {
        // write your code here
        int i,j,k,l_s=s.size();
        int max_len=0;
        for (char c='a';c<='z';c++)
        	mapCtoSub[c]=-1;

        for (i=0,j=0;j++;j<=){
        	if (mapCtoSub[s[j]]>-1) i=max(i,mapCtoSub[s[j]]);
        	int tmp_len=j-i;

        }


    }
};