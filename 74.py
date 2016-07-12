#class SVNRepo:
#    @classmethod
#    def isBadVersion(cls, id)
#        # Run unit tests to check whether verison `id` is a bad version
#        # return true if unit tests passed else false.
# You can use SVNRepo.isBadVersion(10) to check whether version 10 is a 
# bad version.
class Solution:
    """
    @param n: An integers.
    @return: An integer which is the first bad version.
    """
    def findFirstBadVersion(self, n):
        # write your code here
        l=1
        r=n
        mid=1;
        if (n==1):
            return 1;
        while (l<=r):
            mid=(l+r)/2;
            if (SVNRepo.isBadVersion(mid)):
                r=mid-1;
            else:
                l=mid+1;

        if (mid>1 and SVNRepo.isBadVersion(mid-1)==True):
            return mid-1;
        if (mid>=1 and SVNRepo.isBadVersion(mid)==True):
            return mid;
        if (mid<n and SVNRepo.isBadVersion(mid+1)==True):
            return mid+1;

        # Total Runtime: 300 ms
