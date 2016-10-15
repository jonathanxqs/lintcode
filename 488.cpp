class Solution {
public:
    /**
     * @param n an integer
     * @return true if this is a happy number or false
     */
    
    
    bool isHappy(int n) {
        // Write your code here
        stringstream s;


        int tmp = n , times = 0 ;

        while (times < 200){
            s<<tmp;
            int sum = 0;
            for (auto  const ch1:s.str()) sum += ch1 -'0';
            if (sum == 1) return true;

            s.clear();
            tmp = sum;
            times++;
        }

        return false;

    }
};