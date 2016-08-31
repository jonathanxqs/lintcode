class Solution {
public:
    /**
     * @param m: An integer m denotes the size of a backpack
     * @param A & V: Given n items with size A[i] and value V[i]
     * @return: The maximum value
     */
    int backPackII(int m, vector<int> A, vector<int> V) {
        // write your code here
        // sort(A.begin(),A.end());
        int n=A.size();
        if (A.size()==0 or m==0) return 0;

        int i,j,k,max=0,sum_value=0;
        for (auto const s:V) sum_value+=s;

        std::vector<int> dp_v(sum_value+5,-1);
        dp_v[0]=0;

        for (j=0;j<n;j++){
        	for (i=sum_value;i>=1;i--){        	
        		if (i-V[j]>=0 and dp_v[i-V[j]]>-1) {
        			if (dp_v[i]>-1 and dp_v[i-V[j]]+A[j]>dp_v[i]) continue;

        			dp_v[i]=dp_v[i-V[j]]+A[j];
        			
        		}
        	}
        }

        for (i=sum_value;i>=0;i--)
        	if (dp_v[i]>-1 and dp_v[i]<=m ) {
        		max=i;
        		return max;
        	}        

        return max;
   
    }
};