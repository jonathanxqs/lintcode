class Solution:
    """
    @param s: The first string
    @param b: The second string
    @return true or false
    """
    def anagram(self, s, t):

        def hashLize(s):
            dicts1= dict()
            for j in s:
                if j in dicts1.keys():
                    dicts1[j]+=1
                else:
                    dicts1[j]=0

            return dicts1

        # write your code here
        s1=hashLize(s)
        t1=hashLize(t)
        if s1 == t1:
            return True
        return False
