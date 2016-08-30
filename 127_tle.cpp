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
    std::vector<DirectedGraphNode *> rt_route; 
    vector<DirectedGraphNode*> graph,graph_rm;    
    std::map<DirectedGraphNode *,int> qx,qx_ori;
    // set inQueue<>

    

    int dfs(DirectedGraphNode *node){

    	// cout<<node->label<<" ";
    	rt_route.push_back(node);
    	// graph_rm.erase(node);

    	if (rt_route.size()==graph.size()) {
    		// cout<<"DFS finish a route!"<<endl;
    		return 1;
    	}
        
        qx[node]--;
    	for (auto const s:node->neighbors){
    			qx[s]--;   
                if (qx[s]==0  ){                
                    dfs(s) ; 
                    } 			
    	       }
               
    	// for (auto const s:node->neighbors){
    		
    	// 	}
    	// }

    	
    	// graph_rm.push_back(node);
    	// cout<<endl;
    	return -1;

    }

    vector<DirectedGraphNode*> topSort(vector<DirectedGraphNode*> graph) {
        // write your code here

        

        if (graph.size()==0) return rt_route;
        this->graph=graph;
        this->graph_rm=graph;
        
        for(const auto ori_top:graph ) qx[ori_top]=0; 

        for(const auto ori_top:graph ){         	 
        	for (const auto s: ori_top->neighbors){
        				qx[s]+=1;
        	}  
        }

        for (auto const ori_top:graph){
        	if (qx[ori_top]==0) {
        		dfs(ori_top);
                return rt_route;        		
        	}
        }

        return rt_route;



    }
};