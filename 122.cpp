class Solution {
public:
    /**
     * @param height: A list of integer
     * @return: The area of largest rectangle in the histogram
     */


    int largestRectangleArea(vector<int> &height) {
        // write your code here

        //init 
        int i,j,k,l=0;
        n=height.size();
        if (n<=0) {
        	sq_max=0;
        	return sq_max;
        }

        for (auto const s:height) hei_sets.insert(s);

        	//simulate
        for (auto const s:hei_sets){
        	int i,tmp_leng=0,tmp_leng_max=0,sq_tmp=0;

        	i=0;j=0;
        	while (i<n){

        		if (height[i]>=s){
        			j++;
        			tmp_leng_max=max(tmp_leng_max,j);

        		} 
        		else {
        			tmp_leng_max=max(tmp_leng_max,j);
        			j=0;
        		}

        		i++;

        	}

        	sq_tmp=tmp_leng_max*s;
        	sq_max=max(sq_max,sq_tmp);

        }


        return sq_max;

    }

private:
	set<int> hei_sets;
	int n;
    int sq_max=0;


};
