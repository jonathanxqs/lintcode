class Solution:
    """
    @param A: A list of integers
    @param elem: An integer
    @return: The new length after remove
    """
    def removeElement(self, A, elem):
        # write your code here

        #A=[el for el in A if el != elem]
        
        self.A=filter(lambda x: x != elem,A)
        A=self.A
        # while elem in A:
        # 	del elem

        return len(self.A)

