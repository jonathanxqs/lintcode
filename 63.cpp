class Solution {
    /** 
     * param A : an integer ratated sorted array and duplicates are allowed
     * param target :  an integer to be search
     * return : a boolean 
     */
public:
    bool search(vector<int> &A, int target) {
        // write your code here
        int first = 0, last = A.size();
        while (first != last) {
            const int mid = (first + last) / 2;
            if (A[mid] == target)
                return true;
            if (A[first] < A[mid]) {
                if (A[first] <= target && target < A[mid])
                    last = mid;
                else
                    first = mid + 1;
            } else if (A[first] > A[mid]) {
                if (A[mid] < target && target <= A[last-1])
                    first = mid + 1;
                else
                    last = mid;
            } else
                //skip duplicate one
                first++;
        }
        return false;
    }
};