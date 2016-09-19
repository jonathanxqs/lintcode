class Solution:
    # @param s : A string
    # @return : A string
    def reverseWords(self, s):
        # write your code here
        f=s.split();
        f.reverse();
        rv_s=" ".join(f);
        return rv_s;

        # Total Runtime: 371 ms