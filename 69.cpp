/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */
 
 
class Solution {
    /**
     * @param root: The root of binary tree.
     * @return: Level order a list of lists of integer
     */
public:
    vector<vector<int>> levelOrder(TreeNode *root) {
        // write your code here
        std::deque<TreeNode *> thisLevel,nextLevel;
        std::vector<int> v;
        vector<vector<int>> rt_v;
        
        if (root==NULL) return rt_v;

        thisLevel.push_back(root);

        while(thisLevel.size()){
        	v.clear();
        	nextLevel.clear();

        	while(thisLevel.size()){
        		TreeNode *i=thisLevel.front();
        		v.push_back(i->val);
        		if (i->left) nextLevel.push_back(i->left);
        		if (i->right) nextLevel.push_back(i->right);
        		thisLevel.pop_front();
        	}
        	
        	thisLevel=nextLevel;
        	rt_v.push_back(v);
        }

        return rt_v;


    }
};
