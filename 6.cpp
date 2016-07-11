class Solution {
public:
    /**
     * @param A and B: sorted integer array A and B.
     * @return: A new sorted integer array
     */
    vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
        // write your code here
        int i=0;
        int m=A.size(),n=B.size();

        A.resize(m+n+10);

        int j=0,l=m;
    	i=0;
        while (j<n){
        	while (A[i]<B[j] and i<l) i++;
        	// cout<<j<<i<<endl;
        	for (int j1=l;j1>i;j1--) A[j1]=A[j1-1];
        	A[i]=B[j];
        	l++;
        	j++;
        }
        A.resize(n+m);

        return A;

    }
};
// Total Runtime: 11 ms