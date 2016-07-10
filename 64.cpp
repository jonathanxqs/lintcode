class Solution {
public:
    /**
     * @param A: sorted integer array A which has m elements, 
     *           but size of A is m+n
     * @param B: sorted integer array B which has n elements
     * @return: void
     */
    void mergeSortedArray(int A[], int m, int B[], int n) {
        // write your code here
        int i=0;
        int j=0,l=m;
        while (j<n){
        	while (A[i]<B[j] and i<l) i++;
        	// cout<<j<<i<<endl;
        	for (int j1=l;j1>i;j1--) A[j1]=A[j1-1];
        	A[i]=B[j];
        	l++;
        	j++;


        }
    }
};

// Total Runtime: 465 ms