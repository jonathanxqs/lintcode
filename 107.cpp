class Solution {
public:
    /**
     * @param s: A string s
     * @param dict: A dictionary of words dict
     */
    std::vector<bool> dp_s;
    bool wordBreak(string s, unordered_set<string> &dict) {
        // write your code here
        int l_s=s.size(),i,j,k,n=dict.size();
        if (n==0 and l_s>0) return false;

        dp_s.assign(l_s+5,0);
        dp_s[0]=true;

        for (i=1;i<=l_s;i++){

        	cout<<i<<":";
        	for (auto const di1:dict){
        		if ( (i-di1.size())>=0 and dp_s[i-di1.size()] and di1==s.substr(i-di1.size(),di1.size()) )
        		{
        			dp_s[i]=true;
        			break;
        		}
        		cout<<" "<<di1<<endl;;
        	}
        }

        return dp_s[l_s];

        
    }
};