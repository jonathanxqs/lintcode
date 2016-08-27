class Solution {
public:
    /**
      * @param start, a string
      * @param end, a string
      * @param dict, a set of string
      * @return an integer
      */

    int f[1111][1111];
    int size_d;

    int distanclize(string s1,string s2){
    	if (s1.size()!=s2.size()) return 3;
    	int count=0;
    	for (int i=0;i<s1.size();i++){
    		if (s1[i]!=s2[i]) count++; 
    	}

    	if (count==1) return 1;
    	return 0;

    }

    int ladderLength(string start, string end, unordered_set<string> &dict) {
        // write your code here
        this->size_d=dict.size();
        std::vector<string> v_dict;
        v_dict.append(start);

        for (auto s:dict){
        	v_dict.append(s);
        }
        v_dict.append(end);

        int i,j,k;
        for (i=0;i<=size_d+1;i++){
        	for (j=i+1;j<=size_d+1;j++)
        }


    }
};