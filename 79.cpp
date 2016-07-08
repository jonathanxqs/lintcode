
class Solution {
public:    
    /**
     * @param A, B: Two string.
     * @return: the length of the longest common substring.
     */
    int longestCommonSubstring(string &A, string &B) {
        // write your code here

        int l_a=A.length();
        int l_b=B.length();
        int lcs_lg[l_a+3][l_b+3];

        //int lcs_lg[1111][1111];

        for (int i=0;i<l_a+2;++i)
            for (int j=0;j<l_b+2;++j)
                lcs_lg[i][j]=0;
        int max_lcs=0;

        for (int i=0;i<l_a;++i)
            for (int j=0;j<l_b;++j){
                if (A[i]==B[j]){
                    lcs_lg[i+1][j+1]=lcs_lg[i][j]+1;
                    max_lcs=max(max_lcs,lcs_lg[i+1][j+1]);
            }
        }

        return max_lcs;
};

};

// Total Runtime: 15 ms