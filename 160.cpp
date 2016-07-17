class Solution {
public:
    /**
     * @param num: the rotated sorted array
     * @return: the minimum number in the array
     */
    int findMin(vector<int> &num) {
        // write your code here
        int min1=MAX_INT,l=0,r=num.size()-1,mid=0;
        while (l<=r){
        	mid=(l+r)/2;
        	min1=min(min1,num[mid]);
        	if (num[l]<num[r]){
        		r=mid-1;
        		
        	}

        }
    }
};