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
     * @param root : The root of binary tree.
     * @return : buttom-up level order a list of lists of integer
     */
public:
    vector<vector<int>> levelOrderBottom(TreeNode *root) {
        // write your code here
        vector<vector<int> > ret;
		ret.clear();
		if(root == NULL)
			return ret;
		queue<TreeNode*> S;
		S.push(root);
		S.push(NULL);
		vector<int> tmp;
		while(!S.empty()){
			//travesal current level
			TreeNode* p = S.front();
			S.pop();
			if(p!=NULL)
			{
				tmp.push_back(p->val);
				if(p->left) 
					S.push(p->left);
				if(p->right)
					S.push(p->right);
			}else{
				if(!tmp.empty())
				{	
					S.push(NULL);
					ret.push_back(tmp);
					tmp.clear();
				}
			}
		}
		reverse(ret.begin(),ret.end());
        return ret;
    }
};