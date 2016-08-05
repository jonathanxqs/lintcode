class Solution {
public:
    /**
     *@param A: A positive integer which has N digits, A is a string.
     *@param k: Remove k digits.
     *@return: A string
     */
    string DeleteDigits(string A, int k) {
        // wirte your code here
        int i,j,n=A.length(),minj,l=0;
        char minA;
        // cout<<n<<endl;
        string s1("");

        i=0;j=k;
        while (i<n-k){
        	minj=j;
        	minA='0'+12;
        	// cout<<minA<<" i:"<<i<<" j:"<<j<<endl;
        	for (int jj=j;jj>=l;jj--){
        		if (A[jj]<=minA){
        			minA=A[jj];
        			minj=jj;
        		}
        		// cout<<jj<<endl;
        	}

        	s1+=A[minj];
        	l=minj+1;
        	 // cout<<s1<<" "<<l<<endl;

        	i++;
        	j++;



        }
        
        while (s1[0]=='0') s1.erase(0,1);
        return s1;
    }
};
