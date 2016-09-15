class Solution {
public:
    /**
     * @param height: A list of integer
     * @return: The area of largest rectangle in the histogram
     */


    int largestRectangleArea(vector<int> &height) {
        // write your code here
        n=height.size();
        if (n<=0) {
        	sq_max=0;
        	return sq_max;
        }

        for (auto const s:height) hei_sets.insert(s);

        for (auto const s:hei_sets){

        }


        return sq_max;

    }

private:
	set<int> hei_sets;
	int n;
    int sq_max=INT_MAX;


};
