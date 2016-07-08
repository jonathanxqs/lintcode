class Solution {
public:
    /** 
     *@param A: A list of integers
     *@param elem: An integer
     *@return: The new length after remove
     */
    int removeElement(vector<int> &A, int elem) {
        // write your code here
    	int l=A.size();
        int total=l;

        A.erase(remove(A.begin(),A.end(),elem),A.end());
        return A.size();

        // vector<int> B=
        // for (vector<int>::iterator s=A.begin();s!=A.end();++s){
        // 	if ( *s==elem){
        // 		total -= 1;
        // 		A.erase(s);
        // 	}
        // }


    }
};