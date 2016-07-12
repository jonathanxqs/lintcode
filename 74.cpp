/**
 * class VersionControl {
 *     public:
 *     static bool isBadVersion(int k);
 * }
 * you can use VersionControl::isBadVersion(k) to judge wether
 * the kth code version is bad or not.
*/
class Solution {
public:
    /**
     * @param n: An integers.
     * @return: An integer which is the first bad version.
     */
    int findFirstBadVersion(int n) {
        if (n < 1) {
            return -1;
        }

        
        int mid,left=1,right=n;
    
        while(left<=right)
        {
            mid=left+(right-left)/2;//这步很重要 不要溢出
            cout<<mid<<endl;
            if(!VersionControl::isBadVersion(mid))
                right=mid-1;
            else
                left=mid+1;
        }


        return left;   

        return -1;  // find no bad version
    }
};