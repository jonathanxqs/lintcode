class Solution:
    """
    @param A : An integer array
    @return : Two integer
    """
    def singleNumberIII(self, A):
        # write your code here
        d = {}
        for num in A:
            if num in d:
                del d[num]
            else:
                d[num] = 1
        return d.keys()

# Total Runtime: 573 ms