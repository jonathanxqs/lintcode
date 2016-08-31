class Solution {
public:
    /**
     * Determine whether s3 is formed by interleaving of s1 and s2.
     * @param s1, s2, s3: As description.
     * @return: true of false.
     */
    bool isInterleave(string s1, string s2, string s3) {
        // write your code here
        int l1=s1.size(),l2=s2.size(),l3=s3.size();
        if( l3 != l1+l2  ) return false;

        int i,j,k,n;
        std::vector<std::vector<int> > dp_s;
        std::vector<int> v(l2+5,0);
        dp_s.assign(l1+5,v);
        dp_s[0][0]=1; 

        // cout<<l1<<l2<<l3<<endl;       

        for (i=0;i<=l1;i++)
        	for (j=0;j<=l2;j++){

        		if (i-1>=0 and dp_s[i-1][j] and s1[i-1]==s3[i+j-1]) dp_s[i][j]=1;
        		if (j-1>=0 and dp_s[i][j-1] and s2[j-1]==s3[i+j-1]) dp_s[i][j]=1;
        		// cout<<dp_s[i][j];
        	}

        return dp_s[l1][l2];


    }
};