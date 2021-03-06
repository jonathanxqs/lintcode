class Solution {
public:
    /**
     * @param matrix: A list of lists of integers
     * @param target: An integer you want to search in matrix
     * @return: An integer indicate the total occurrence of target in the given matrix
     */
    int searchMatrix(vector<vector<int> > &matrix, int target) {
        // write your code here
        
        if (matrix.size() == 0)
            return 0;
        
        int count = 0;
        int rows = matrix.size();
        int colums = matrix[0].size();
        
        int curRowPos = 0;
        int curColumPos = colums-1;
        
        while (curRowPos < rows && curColumPos >= 0)
        {
            if (matrix[curRowPos][curColumPos] > target)
            {
                curColumPos--;
            }
            else if (matrix[curRowPos][curColumPos] < target)
            {
                curRowPos++;
            }
            else
            {
                count++;
                curColumPos--;
            }
        }
        
        return count;
    }
};

