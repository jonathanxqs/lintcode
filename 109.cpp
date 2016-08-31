class Solution {
public:
    /**
     * @param triangle: a list of lists of integers.
     * @return: An integer, minimum path sum.
     */
    
    int minimumTotal(vector<vector<int> > &triangle) {
        // write your code here
        int n=triangle.size();
        if (n<=0) return 0;
        std::vector<int> v=triangle[n-1];
        int i,j,k;
        for (i=n-2;i>=0;i--){
        	for (j=0;j<=i;j++)
        		v[j]=triangle[i][j]+min(v[j],v[j+1]);

        }

        return v[0];
    }
};
