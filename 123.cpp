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

        if (board[i][j]!=word[ex_l]) return false;      

        vx.push_back(i);
        vy.push_back(j);
        ex_l=vx.size();

        if (vx.size() == word.size()){
            for (int i4=0;i4<ex_l;i4++){
                cout<<vx[i4]<<","<<vy[i4]<<" -> ";
            }
            cout<<endl;            
            return true;
        }

        if (vx.size()>1){
            for (int i4=0;i4<ex_l;i4++){
                cout<<vx[i4]<<","<<vy[i4]<<" -> ";
            }
            cout<<endl;            
            
        }



        
        for (int i5=0;i5<4;i5++){
            i_next=i+dx[i5];
            j_next=j+dy[i5];

            if (i_next<0 or i_next>=row) continue;
            if (j_next<0 or j_next>=col) continue;

            int flag_already_inqueue=0;
            for (int i4=0;i4<vx.size();i4++){
                if (i_next==vx[i4] and j_next==vy[i4])
                    flag_already_inqueue = 1;
            }

            if (flag_already_inqueue==1) continue;//already in 

            if (dfs(i_next,j_next,vx,vy)) return true;

        }
        //after 4 direaction trials
        
        vx.pop_back();
        vy.pop_back();
        return false;

    }

    
    bool exist(vector<vector<char> > &board, string word) {
        // write your code here
        int row=board.size();
        if (row<=0) return false;
        col=board[0].size();
        if (col<=0) return false;
        this->word=word;
        this->board=board;

        cout<<word<<":"<<word.size()<<endl;

        //find the start point 
        int i,j,k;
        for (i=0;i<row;i++)
            for (j=0;j<col;j++){
                vx.clear();
                vy.clear();
                if (dfs(i,j,vx,vy)) return true;
            }

        return false;
    }

private:
	int row,col;
    string word;
    vector<vector<char> > board;
    std::vector<int> vx;
    std::vector<int> vy;
};