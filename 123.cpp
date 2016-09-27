class Solution {
public:
    /**
     * @param board: A list of lists of character
     * @param word: A string
     * @return: A boolean
     */
    const int dx[4]={1,0,-1,0};
    int const dy[4]={0,1,0,-1} ;

    bool dfs(int i,int j,std::vector<int> &vx,vector<int> &vy){
    	int i_next,j_next,i1,j1;
        int ex_l=vx.size();

        if (vx.size()==word.size()){
            return true;
        }
        if (board[i][j]!=word[ex_l]) return false;      

        vx.push_back(i);
        vy.push_back(j);
        
        for (int i5=0;i5<4;i5++){
            i_next=i+dx[i5];
            j_next=j+dy[i5];

            if (i_next<0 or i_next>=row) continue;
            if (j_next<0 or j_next>=col) continue;

            if ( find(vx.begin(),vx.end(),i_next) !=vx.end() 
                    and find(vy.begin(),vy.end(),j_next)!=vy.end()) continue;//already in 

            
            

            if (dfs(i_next,j_next,vx,vy)) return true;
            



        }
        
        vx.pop_back();
        vy.pop_back();

    }

    
    bool exist(vector<vector<char> > &board, string word) {
        // write your code here
        int row=board.size();
        if (row<=0) return false;
        col=board[0].size();
        if (col<=0) return false;
        this->word=word;
        this->board=board;

        //find the start point 
        int i,j,k;
        for (i=0;i<row;i++)
            for (j=0;j<col;j++)
                if (dfs(i,j,vx,vy)) return true;

        return false;
    }

private:
	int row,col;
    string word;
    vector<vector<char> > board;
    std::vector<int> vx;
    std::vector<int> vy;
};