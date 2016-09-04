class Solution {
public:    
    /**
     * @param S, T: Two string.
     * @return: Count the number of distinct subsequences
     */

     int numDistinct(string &S, string &T) {
        // write your code here
        vector<vector<int>> t(T.length()+10,vector<int>(S.length()+10,0));
        for(int i=0;i<=T.length();i++) t[i][0]=0;
        for(int i=0;i<=S.length();i++) t[0][i]=1;// 1  ,not 0 

        for(int i=1;i<=S.length();i++)
        {
            if(T[0]==S[i-1])
                t[1][i]=t[1][i-1]+1;
            else
                t[1][i]=t[1][i-1];    
        }
        
        
        for(int i=2;i<=T.length();i++)
        {
            for(int j=1; j<=S.length();j++)
            {
                if(T[i-1]==S[j-1])
                    t[i][j]=t[i-1][j-1]+t[i][j-1];
                else
                    t[i][j]=t[i][j-1];
            }
        }
        return t[T.length()][S.length()];
    }

};
