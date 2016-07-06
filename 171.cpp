class Solution {
public:    
    
    map<string,vector<string>> check; 
    
    void _put(vector<string> &a,vector<string> &b){
        for(auto e:b)
            a.push_back(e);
    }
    vector<string> anagrams(vector<string> &strs) {
        
        vector<string> ret;
        if(1==strs.size()||0==strs.size())
            return ret;    
        for(auto e:strs){
            string tmp=e;
            sort(tmp.begin(),tmp.end());
            check[tmp].push_back(e);
        }
        for(auto e:check){
            if(e.second.size()>1){
                _put(ret,e.second);
            }    
        }
        return ret;
    }
};