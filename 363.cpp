class Solution {
public:
    /**
     * @param heights: a vector of integers
     * @return: a integer
     */
    int trapRainWater(vector<int> &heights) {
        // write your code here
        // init
        int len=heights.size();
        if (len<=1) return 0;
        std::vector<int> peaksSubscript,sumTill;
        int peak=heights[0],sum=0;
        int i,j,k;
        sumTill.push_back(0);
        for (auto const s:heights){
            sum+=s;
            sumTill.push_back(sum);
        }

        //find the peak array
        for (i=1;i<len-1;i++){
            if (hei)
        }
    }
};