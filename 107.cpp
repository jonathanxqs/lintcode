class Solution {
public:
    /**
     * @param s: A string s
     * @param dict: A dictionary of words dict
     */
    std::vector<bool> dp_s;
    bool wordBreak(string s, unordered_set<string> &dict) {
        // write your code here
        int l_s=s.size(),i=0,j,k,n=dict.size();
        if (n==0 and l_s>0) return false;

        dp_s.assign(l_s +10,false);
        dp_s[0]=true;

        // cout<<l_s<<" "<<n<<endl; 

        for (i=1;i<=l_s;i++){

        	 // cout<<i<<":";

        	for (auto const di1:dict){

        		 // cout<<" "<<di1<<di1.size()<<" "<<i-(int)di1.size()<<endl;

        		if ((i-(int)di1.size()) >=0) 
        		{
        			// cout<<s.substr(i-(int)di1.size(),di1.size())<<endl;

        			if ( dp_s[i-di1.size()]==true  
        				and (di1 == s.substr(i-(int)di1.size(),di1.size())) )
	        		{
	        			dp_s[i]=true;
	        			break;
	        		}

	        		
        		} 


        	}

        }

        return dp_s[l_s];

        
    }
};