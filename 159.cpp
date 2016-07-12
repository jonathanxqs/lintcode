
class Solution {
public:
    /**
     * @param num: a rotated sorted array
     * @return: the minimum number in the array
     */
    int findMin(vector<int> &num) {
        // write your code here
        if (num.size()==0) return -1;
        int i=0,min_n=num[0];
        while (num[i]<num[i+1] and i<num.size()-1) i++;
        if (i==num.size()-1) i--;
        return min(min_n,num[i+1]);

    }
};