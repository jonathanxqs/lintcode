class Solution {
public:
    /**
     * Get all distinct N-Queen solutions
     * @param n: The number of queens
     * @return: All distinct solutions
     * For example, A string '...Q' shows a queen on forth position
     */

    vector<vector<string> > rt_st;
    int n;


    vector<vector<string> > solveNQueens(int n) {
        // write your code here
    	string s1,s2,s3;
        std::vector<string> v_str;
        vector<int> v_int;

        if (n<1) return rt_st;
        this->n=n;

        int rt_flag=bfs(n,0,v_int);

        if(rt_flag==1) return rt_st;
        else cout<<rt_flag<<endl;
  	    rt_st.clear();
    }

    vector<string> vecInt_to_vecstring(std::vector<int> &v){
    	int i,j,k;
    	string s1;
    	std::vector<string> rt_s;
    	for (auto v1:v){
    		s1.clear(); 
    		for (i=1;i<=n;i++) s1+='.';
    		s1[v1]='Q';

    		rt_s.push_back(s1);

    	}

    	return rt_s;
    }

    int bfs(int n,int i,std::vector<int> &v){

    	if (i==n) rt_st.push_back(vecInt_to_vecstring(v));

    	int j,k;

    	for (j=1;j<=n;j++){
    		if (find(v.begin(),v.end(),j)!=v.end()){

    			v.push_back(j);    			
    			bfs(n,i+1,v);
    			v.pop_back();

    		}
    		else{
    			continue;
    		}
    	}

    	return 1;


    }

};
