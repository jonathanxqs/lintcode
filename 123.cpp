class Solution {
public:
    /**
     * @param board: A list of lists of character
     * @param word: A string
     * @return: A boolean
     */
    const int dx[4]={1,0,-1,0};
    int dy[4]={0,1,0,-1} const;
    bool dfs(int i,int j,std::vector<int> &vx,vector<int> &vy){
    	if ()

    }
    bool exist(vector<vector<char> > &board, string word) {
        // write your code here
        row=board.size();
        if (row<=0) return false;
        col=board[0].size();
        if (col<=0) return false;

        //find the start point 
    }

private:
	int row,col;
};