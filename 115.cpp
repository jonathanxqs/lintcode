class Solution {
public:
    /**
     * @param obstacleGrid: A list of lists of integers
     * @return: An integer
     */ 

    std::vector<std::vector<int> > dp_grid;

    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
        // write your code here

        int m=obstacleGrid.size(),n=obstacleGrid[0].size();
        if (m<1 or n<1) return 0;

        int i,j,k,t;

        std::vector<int> v(n+5,0);
        dp_grid.assign(m+5,v);
        dp_grid[1][1]=1;

        for (i=0;i<m;i++)
        	for (j=0;j<n;j++)
        		if (obstacleGrid[i][j]==0) {        			
        			
        				if (j>0 and obstacleGrid[i][j-1]==0) dp_grid[i+1][j+1]+=dp_grid[i+1][j];
        				if (i>0 and obstacleGrid[i-1][j]==0) dp_grid[i+1][j+1]+=dp_grid[i][j+1];
        			} 

        return dp_grid[m][n];     			

        		

    }


};

// Total Runtime: 1825 ms