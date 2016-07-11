class Solution {
    /** 
     * param A : an integer sorted array
     * param target :  an integer to be inserted
     * return : an integer
     */
public:
    int searchInsert(vector<int> &A, int target) {
        // write your code here
        int l=0,A_s=A.size(),r=A_s,mid=0,i=0,j;
        if (A_s==0)  return 0;
        while (l<=r){
        	mid=(l+r)/2;
        	if (A[mid]<target){
        		l=mid+1;
        	}
        	else if (A[mid]==target) return mid;
        		 else r=mid-1;
        }
        if (A[mid+1]<=target and mid+1<A_s) return mid+2;
        if (A[mid]<=target and mid<A_s) return mid+1;
        if (A[mid-1]<=target) return mid;

    }
};

// Total Runtime: 35 ms