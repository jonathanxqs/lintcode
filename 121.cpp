class Solution {
public:
    /**
      * @param start, a string
      * @param end, a string
      * @param dict, a set of string
      * @return a list of lists of string
      */
    vector<vector<string>> findLadders(string start, string end, unordered_set<string> &dict) {
        // write your code here
        vector<vector<string>> Path;
		vector<string> CurrPath;
		unordered_set<string> visited;
		queue<pair<string,int>> CurrCandidate;
		multimap<string,string> father;
		bool finded=false;
		int curr_step=0;
		int WordSize=start.size();
		if(start.empty()||end.empty())return Path;
		if(start==end){
			CurrPath.push_back(start);
			Path.push_back(CurrPath);
		}
		if(dict.count(start))dict.erase(start);
		if(dict.count(end))dict.erase(end);
		CurrCandidate.push(make_pair(start,1));
		visited.insert(start);
		while(!CurrCandidate.empty()){
			pair<string,int> CurrWord(CurrCandidate.front());
			CurrCandidate.pop();
			if(curr_step<CurrWord.second){
			    if(finded)break;
			    unordered_set<string>::iterator iter;
				for(iter=visited.begin();iter!=visited.end();iter++){
					dict.erase(*iter);
				}
				curr_step=CurrWord.second;
				visited.clear();
			}
			for(int i=0;i<WordSize;i++){
				for(char c='a';c<='z';c++){
				    if(c==CurrWord.first[i])continue;
					swap(c,CurrWord.first[i]);
					if(CurrWord.first==end){
						finded=true;
						string temp=CurrWord.first;
						swap(c,CurrWord.first[i]);
						father.insert(make_pair(end,CurrWord.first));
						break;
					}
					if(!finded&&dict.count(CurrWord.first)){
						if(visited.count(CurrWord.first)==0){
							CurrCandidate.push(make_pair(CurrWord.first,CurrWord.second+1));
							visited.insert(CurrWord.first);
						}
						string temp=CurrWord.first;
						swap(c,CurrWord.first[i]);
						father.insert(make_pair(temp,CurrWord.first));
						continue;
					}
					swap(c,CurrWord.first[i]);
				}
				
			}
		}
		if(finded==true){
			build_path(father,start,end,CurrPath,Path);
		}
		return Path;
    }

private:
	void build_path(multimap<string,string> father,string start,string end,vector<string> &CurrPath,vector<vector<string>> &Path){
		CurrPath.push_back(end);
		if(start==end){
			Path.push_back(CurrPath);
			reverse(Path.back().begin(),Path.back().end());
			CurrPath.pop_back();
			return;
		}
		pair<multimap<string,string>::iterator,multimap<string,string>::iterator> pos=father.equal_range(end);
		while(pos.first!=pos.second){
			build_path(father,start,pos.first->second,CurrPath,Path);
			pos.first++;
		}
		CurrPath.pop_back();
    }
};