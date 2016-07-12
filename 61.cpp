class Solution {
    /** 
     *@param A : an integer sorted array
     *@param target :  an integer to be inserted
     *return : a list of length 2, [index1, index2]
     */
public:
    vector<int> searchRange(vector<int> &A, int target) {
        // write your code here
        int l=0,r=A.size()-1,mid=0,i=0,j;

        std::vector<int> v;
        if (r==-1) {
        	v.assign(2,-1);
        	return v;
        }
        while (l<=r){
        	mid=(l+r)/2;
        	if (A[mid]<target){
        		l=mid+1;
        	}
        	else if (A[mid]>target) r=mid-1;
        		else break;
        }
        i=mid;
        while (i>0 and A[i-1]==target) i--;
        j=i;
        while (j<A.size()-1 and A[j+1]==target) j++;
        if (A[i]!=target) {
        	v.push_back(-1);
        	v.push_back(-1);
        	return v;
        }

        v.push_back(i);
        v.push_back(j);
        return v;

    }
};

// Total Runtime: 48 ms