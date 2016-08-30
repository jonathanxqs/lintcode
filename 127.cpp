/**
 * Definition for Directed graph.
 * struct DirectedGraphNode {
 *     int label;
 *     vector<DirectedGraphNode *> neighbors;
 *     DirectedGraphNode(int x) : label(x) {};
 * };
 */
class Solution {
public:
    void dfs(DirectedGraphNode* i, vector<DirectedGraphNode*> &ans, map<DirectedGraphNode*, int> &countrd,vector<DirectedGraphNode*> graph)         
    {
    	ans.push_back(i);
        countrd[i]--;
        for(int j = 0; j < i->neighbors.size(); j++) {
		        countrd[i->neighbors[j]]--;
                if(countrd[i->neighbors[j]] == 0)
		        dfs(i->neighbors[j], ans, countrd, graph);
	    }
    }
    
    /**
     * @param graph: A list of Directed graph node
     * @return: Any topological order for the given graph.
     */
    vector<DirectedGraphNode*> topSort(vector<DirectedGraphNode*> graph) {
        // write your code here
        map<DirectedGraphNode*, int> countrd;
        vector<DirectedGraphNode*> ans;
        for(int i = 0; i < graph.size(); i++)
            for(int j = 0; j < graph[i]->neighbors.size(); j++)
                 if (countrd.find(graph[i]->neighbors[j]) == countrd.end())
                    countrd[graph[i]->neighbors[j]] = 1;
                 else
                    countrd[graph[i]->neighbors[j]] += 1;

        for(int i = 0; i < graph.size(); i++)
            if(countrd[graph[i]] == 0)
                dfs(graph[i], ans, countrd, graph);
        return ans;
    }
};