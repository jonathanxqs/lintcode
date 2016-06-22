class Solution:
    """
    @param A : A string includes Upper Case letters
    @param B : A string includes Upper Case letters
    @return :  if string A contains all of the characters in B return True else return False
    """
    def compareStrings(self, A, B):
        # write your code here

        def hashLize(s):
            dicts1= dict()
            for i in range(26):
                dicts1[chr(i+ord("A"))]=0

            for j in s:
                if j in dicts1.keys():
                    dicts1[j]+=1
                

            return dicts1

        # write your code here
        s1=hashLize(A)
        t1=hashLize(B)
        for i1 in range(26):
            i=chr(i1+ord("A"))
            if s1[i] < t1[i]:
                return False

        return True

#总耗时: 682 ms
