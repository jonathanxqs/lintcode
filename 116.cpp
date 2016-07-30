class Solution {
public:
    /**
     * @param A: A list of integers
     * @return: The boolean answer
     */
    bool canJump(vector<int> A) {
        // write you code here
        int n=A.size(),i,j,k,f[n+10];
        for (i=0;i<=n;i++) f[i]=0;
        f[1]=1;
    	for (i=1;i<=n-1;i++){
    		if (f[i]==0) break;
    		for (j=0;j<=A[i-1];j++) f[i+j]=1;
    	}

    	if (f[n]) return true;
    	return false;

    }
};

// with greedy Total Runtime: 45 ms
