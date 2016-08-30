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
    /**
     * @param graph: A list of Directed graph node
     * @return: Any topological order for the given graph.
     */
    std::map<int, DirectedGraphNode*> mapNumToNode;
    std::vector<DirectedGraphNode> rt_route;
    int f[1111][1111];

    vector<DirectedGraphNode*> topSort(vector<DirectedGraphNode*> graph) {
        // write your code here

        deque<UndirectedGraphNode *> neighborsInProcess;

        if (graph.size()==0) return neighborsInProcess;
        memset(f,sizeof(f),0);

        neighborsInProcess.push_back(graph);
        mapNumToNode[graph->label]=graph;
        

        while (neighborsInProcess.size()>0){

        	ori_top=neighborsInProcess.front();

        	for (const auto s: ori_top->neighbors){
        			mapNumToNode[s->label]=s;
        			neighborsInProcess.push_back(s);
        			f[ori_top->label][s->label]=1;
        		
        	}

        	neighborsInProcess.pop_front();

        }



    }
};