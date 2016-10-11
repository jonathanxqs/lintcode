
class Solution {
public:
    /**
     * @param heights: a vector of integers
     * @return: an integer
     */
    int maxArea(vector<int> &height) {
        int max = 0, area;
        int start = 0, end = height.size() - 1;

        // substructure 
        // perfect attribute
        // minimum border decide when length is fixed
        // --prove:
        // only
        while (start < end) {
            if (height[start] > height[end]) {
                area = height[end] * (end - start);
                end --;
            } else {
                area = height[start] * (end - start);
                start ++;
            }
            
            if (area > max) {
                max = area;
            }
        }

        return max;
    }
};


// Total Runtime: 51 ms