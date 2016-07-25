

class Solution:
    """
    @param a, b, n: 32bit integers
    @return: An integer
    """
    def fastPower(self, a, b, n):
        ans = 1
        while b > 0:
            if b % 2==1:
                ans = ans * a % n
            a = a * a % n
            b = b / 2
        return ans % n

        # WA because of lintcode 
        # AC