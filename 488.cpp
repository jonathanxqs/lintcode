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
            for (auto  const ch1:s.str()) sum += pow(ch1 -'0',2);
            cout<<s.str()<<"  "<<sum<<endl;
            
            if (sum == 1) return true;

            s.str("");
            tmp = sum;
            times++;
        }

        return false;

    }
};