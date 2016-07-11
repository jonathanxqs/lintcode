class Solution {
public:    
    /**
     * @param numbers : Give an array numbers of n integer
     * @return : Find all unique triplets in the array which gives the sum of zero.
     */
    vector<vector<int> > threeSum(vector<int> &nums) {
        // write your code here

        sort(nums.begin(),nums.end());
        int nums_l=nums.size();
        int i,j,k,n,k1;
        int nu_arr[nums_l+3];
        int sum=0,sum1=0;
        std::map<int, int> map;
        i=0;


        for (auto s:nums){
        	i++;
        	nu_arr[i]=s;
        	if (map.find(s)== map.end()) {
        		map[s]=i;
        		// cout <<s<<map[s]<<endl;
        	}
        }

        vector<int> rt1;
        vector<vector<int> > rt_f;
        
        for (i=1;i<=nums_l-2;i++){
        	for (j=i+1;j<=nums_l-1;j++)
        	{

        		if (map[-nu_arr[i]-nu_arr[j]]>j or nu_arr[map[-nu_arr[i]-nu_arr[j]]]==nu_arr[j]){

        			k=map[-nu_arr[i]-nu_arr[j]];
        			while (k<=j and nu_arr[k]== (-nu_arr[i]-nu_arr[j])){
        				k++;        				
        			}
        			

        			while (k>j and nu_arr[k]== (-nu_arr[i]-nu_arr[j])){        			
        			
        			rt1.clear();
        			rt1.push_back(nu_arr[i]);
        			rt1.push_back(nu_arr[j]);
        			rt1.push_back(nu_arr[k]);
        			k++;

        			}

        			// if (k>nums_l)
        			

        			if (count(rt_f.begin(),rt_f.end(),rt1)==0){
        				rt_f.push_back(rt1); 
        			}
        			

        		}
        	}    	


        }

        return rt_f;


    }
};

// Total Runtime: 30 ms