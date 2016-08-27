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
    const int NotLinkParaMax=INT_MAX/2-1;

    int distancLize(string s1,string s2){
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
        memset(f,sizeof(f),0);
        int i,j,k;
        for (i=0;i<=size_d+1;i++){
        	for (j=i+1;j<=size_d+1;j++)
        		f[i][j]=f[j][i]=distancLize(v_dict[i],v_dict[j]);
        }

        std::deque<int> shortDis_0(size_d+5,NotLinkParaMax);
        for (i=0;i<=size_d+1;i++) shortDis_0[i]=f[0][i];
        
        std::set<int> inStack,notInStack;
   	    for (i=0;i<=size_d+1;i++) notInStack.push_back()

        	
        for (i=0;i<=size_d+1;i++){
        	for (j=0;j<=size_d+1;j++)
        	{
        		if ()
        		f[i][j]=f[j][i]=distancLize(v_dict[i],v_dict[j]);
        	}
        }


    }
};