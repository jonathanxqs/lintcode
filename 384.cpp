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

        // cout<<s<<l_s<<endl;

        for (i=0,j=0;j<l_s;j++){
        	// cout<<i<<" "<<j<<endl;
        	if (mapCtoSub[s[j]]>-1) i=max(i,mapCtoSub[s[j]]);
        	mapCtoSub[s[j]]=j;
        	int tmp_len=j-i;
        	if (tmp_len>max_len) max_len=tmp_len;

        	// cout<<i<<" "<<j<<endl;

        }

        return max_len;


    }
};