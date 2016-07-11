class Solution {
public:
    /**
     * @param nums: The integer array.
     * @param target: Target number to find.
     * @return: The first position of target. Position starts from 0. 
     */
    int binarySearch(vector<int> &array, int target) {
        // write your code here
        int ar_n=array.size();
        int i=0,j,l=0,r=ar_n-1,mid=0;
        while (l<=r){
        	mid =(l+r)/2;
        	if (array[mid]>target){
        		r=mid-1;
        	}
        	else if (array[mid]<target) l=mid+1;
        	else break;
        }

        j=mid;
        if (array[mid+1]==target and mid+1<ar_n) j=mid+1;
        if (array[mid-1]==target and mid-1>=0) j=mid-1;
        while (array[j-1]==target and j-1>=0) j--;
        if (array[j]==target) return j;

        return -1;
    }
};