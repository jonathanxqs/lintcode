class Solution {
public:
    /**
     * @param gas: a vector of integers
     * @param cost: a vector of integers
     * @return: an integer 
     */
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
        // write your code here
        int left_gas=0;
        int len=gas.size();

        for(int i=0;i<len;i++){
            left_gas+=gas[i]-cost[i];
        }
        if(left_gas<0){
            return -1;
        }else{
            left_gas=0;
        }

        int i=0;
        int cnt=0;
        int res=0;
        while(cnt<len){
            left_gas+=gas[i]-cost[i];
            if(left_gas<0){
                left_gas=0;
                cnt=0;
                res=(i+1)%len;
            }else{
                cnt++;
            }
            i=(i+1)%len;
        }
        return res;
    }
};

// http://blog.csdn.net/gao1440156051/article/details/50706530