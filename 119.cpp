
// http://www.cnblogs.com/yuzhangcmu/p/4190264.html
// The most important point is :  d[i][j]=d[i-1][j-1] if word1[i]==word2[j]

class Solution {
public:    
    /**
     * @param word1 & word2: Two string.
     * @return: The minimum number of steps.
     */
    int minDistance(string word1, string word2) {
        // write your code here
        int row = word1.length() + 1;
        int col = word2.length() + 1;
        vector<vector<int> > f(row, vector<int>(col));
        for (int i = 0; i < row; i++)
            f[i][0] = i;
        for (int i = 0; i < col; i++)
            f[0][i] = i;
        for (int i = 1; i < row; i++)
            for (int j = 1; j < col; j++){
                if (word1[i-1] == word2[j-1])
                    f[i][j] = f[i-1][j-1];
                else
                	//replace the last
                    f[i][j] = f[i-1][j-1] + 1;
                f[i][j] = min(f[i][j], min(f[i-1][j]+1, f[i][j-1]+1));
            }

        return f[row-1][col-1];
    }
};