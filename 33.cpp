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

        int rt_flag=bfs(0,v_int,0,0);

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
    		s1[n-v1]='Q';

    		rt_s.push_back(s1);
    	}

    	return rt_s;
    }

    int bfs(int i,std::vector<int> &v,long long dj_status_l,long long dj_status_r){

    	if (i==n) rt_st.push_back(vecInt_to_vecstring(v));

    	int j,k;
    	
    	dj_status_l = (dj_status_l<<1) ;
    	dj_status_r = dj_status_r>>1 ;
    	dj_status_r = dj_status_r %(1<<n);
    	dj_status_l = dj_status_l %(1<<n);

    	 // for (auto v1:v) cout<<v1<<" ";
    	 // cout<<"dj_status after:  "<<dj_status_l<<"<-left;right->"<<dj_status_r<<endl;
    	


    	for (j=1;j<=n;j++){

    		if (find(v.begin(),v.end(),j)==v.end()){   			
    			
    			
				if (  (( dj_status_r | dj_status_l) & (1<<j-1)) == 0){
					   // cout<<"insert: "<<j<<endl; 
					v.push_back(j);    			
    				bfs(i+1,v,dj_status_l| (1<<j-1),dj_status_r|(1<<j-1));
    				v.pop_back();
				}
    			

    		}
    		else{
    			continue;
    		}
    	}

    	return 1;


    }

};
