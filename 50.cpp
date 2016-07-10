class Solution {
public:
    /**
     * @param A: Given an integers array A
     * @return: A long long array B and B[i]= A[0] * ... * A[i-1] * A[i+1] * ... * A[n-1]
     */
    vector<long long> productExcludeItself(vector<int> &nums) {
        // write your code here
        int l_nums=nums.size();

        // cout<<l_nums<<endl;
        long long front[l_nums+3],end_arr[l_nums+3];
        front[0]=1;
        end_arr[l_nums+1]=1;
        int i=0;
        for (std::vector<int>::iterator v=nums.begin();v<nums.end();v++){
        	i++;
        	front[i]=front[i-1]*(*v);
        }
        i=l_nums;
        for (std::vector<int>::iterator v=nums.end()-1;v>=nums.begin();v--){
        	
        	end_arr[i]=end_arr[i+1]*(*v);
        	i--;
        }
        // cout<<front<<endl;
        // cout<<end_arr<<endl;
        std::vector<long long> rt_num;
        for (i=1;i<=l_nums;i++) rt_num.push_back(front[i-1]*end_arr[i+1]);
        return rt_num;

    }
};

// Total Runtime: 16 ms