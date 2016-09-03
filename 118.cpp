class Solution {
public:    
    /**
     * @param S, T: Two string.
     * @return: Count the number of distinct subsequences
     */

    int numDistinct(string &S, string &T) {
        // write your code here

        int len_s=S.size(),len_t=T.size();
        int i,j,k,n;


        std::vector<int> v(len_t+5,0);
        std::vector<std::vector<int> > dp(len_s+5,v);

        for (i=1;i<=len_s;i++){
        	for (j=1;j<=len_t;j++){
        		if (j>i) break;
        		if (S[i]==T[j]) 
        	}
        }
    }
};
