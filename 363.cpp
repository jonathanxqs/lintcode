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
        //add 0 and 0 to head and tail
        std::vector<int> heightsHeadTail(heights);
        heightsHeadTail.insert(heightsHeadTail.begin(),0);
        heightsHeadTail.insert(heightsHeadTail.end(),0);
        std::vector<int> peaksSubscript(len+3,0),tillRight(len+3,0),tillLeft(len+3,0);
        int rt_sum=0;
        int i,j,k;
        
        for (auto const s:heights){
            sum+=s;
            sumTill.push_back(sum);
        }

        //find the peak array
        if (heights[0]>heights[1])  
        for (i=1;i<len-1;i++){
            if (heights[i]>=heights[i-1] and heights[i]<=heights[i+1])
                peaksSubscript.push_back(i);
        }
    }
};