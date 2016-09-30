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
        std::vector<int> peaksSubscript(len+5,0);

        int left_b=0,right_b=0;
        int rt_sum=0 , sum=0;
        int i,j,k;
        
        for (auto const s:heightsHeadTail){
            sum+=s;
            sumTill.push_back(sum);
        }

        //find the peak array
        
        sum = 0;
        for (i=1;i<len-1;i++){
            if (heightsHeadTail[i] >= heightsHeadTail[left_b]  )
                peaksSubscript.push_back(i);
        }
    }
};