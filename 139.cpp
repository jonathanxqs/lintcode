class Solution {
public:
    /**
     * @param nums: A list of integers
     * @return: A list of integers includes the index of the first number 
     *          and the index of the last number
     */
    vector<int> subarraySumClosest(vector<int> nums){
        // write your code here
        
        vector<int> retVtr;
        
        if (nums.size() == 0)
            return retVtr;
            
        vector<pair<int, int>> auxVtr;
        auxVtr.push_back(make_pair(0, -1));
        
        int curSum = 0;
        for (int i=0; i<nums.size(); i++)
        {
            curSum += nums[i];
            auxVtr.push_back(make_pair(curSum, i));
        }
        
        sort(auxVtr.begin(), auxVtr.end());
        
        int minDiff = INT_MAX;
        int minA;
        int minB;
        for (int i=1; i<auxVtr.size(); i++)
        {
            if (auxVtr[i].first-auxVtr[i-1].first <= minDiff)
            {
                minDiff = auxVtr[i].first-auxVtr[i-1].first;
                minA = auxVtr[i-1].second;
                minB = auxVtr[i].second;
            }
        }
        
        retVtr.push_back(min(minA, minB)+1);
        retVtr.push_back(max(minA, minB));
        
        return retVtr;
    }
};


// O(n*n) is not okay
// O(nlogn) is better
// Total Runtime: 2180 ms