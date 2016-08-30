/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
class Solution {
public:
    /**
     * @param node: A undirected graph node
     * @return: A undirected graph node
     */

    std::vector<std::vector<int> > Edge;
    std::map<int, UndirectedGraphNode* > mapNumToNode;

    UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
        // write your code here
        
        deque<UndirectedGraphNode *> neighborsInProcess;

        if (node == NULL) return NULL;
        UndirectedGraphNode *newGraphRoot=new UndirectedGraphNode(node->label);
    	

        int ngr_flag=1;
        neighborsInProcess.push_back(node);        
        mapNumToNode[newGraphRoot->label]=newGraphRoot;
        UndirectedGraphNode *g,*ori_top,*new_top;

        while (neighborsInProcess.size()>0){

        	ori_top=neighborsInProcess.front();

        	if (ngr_flag==1) {
        		new_top=newGraphRoot;
        		ngr_flag=0;
        	}
        		else if (mapNumToNode.count(ori_top->label)>0) new_top=mapNumToNode[ori_top->label];
        			 else new_top=new UndirectedGraphNode(ori_top->label);
        	
        	// UndirectedGraphNode *g;      	

        	for (const auto s: ori_top->neighbors){
        		if (mapNumToNode.find(s->label) != mapNumToNode.end() ){
        			(new_top->neighbors).push_back(mapNumToNode[s->label]);
        			// cout<<ori_top->label<<" Relates :"<<s->label<<endl;
        			// cout<<(new_top->neighbors).size()<<endl;

        		}
        		else{
        			g=new UndirectedGraphNode(s->label);
        			mapNumToNode[s->label]=g;

        			neighborsInProcess.push_back(s);
        			(new_top->neighbors).push_back(g);
        			// cout<<ori_top->label<<" Creates and Relates :"<<s->label<<endl;
        			// cout<<(new_top->neighbors).size()<<endl;
        		}
        	}

        	neighborsInProcess.pop_front();

        }


        // for (auto s:(mapNumToNode[1]->neighbors)) cout<<s->label<<"	";
        // 	 cout<<"size = "<<(mapNumToNode[1]->neighbors).size()<<endl;

        return newGraphRoot;



    }
};