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
     *@param inorder : A list of integers that inorder traversal of a tree
     *@param postorder : A list of integers that postorder traversal of a tree
     *@return : Root of a tree
     */
public:
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
        // write your code here
    	int i,j,k,n=inorder.size(),m_mid,mid_val;
    	if (n==0) return NULL;

    	mid_val=postorder[n-1];
    	m_mid=find(inorder.begin(),inorder.end(),mid_val)-inorder.begin();

    	std::vector<int> in_l(inorder.begin(),inorder.begin()+m_mid),in_r(inorder.begin()+m_mid+1,inorder.end()),
    	post_l(postorder.begin(),postorder.begin()+m_mid),post_r(postorder.begin()+m_mid,postorder.end()-1);

    	
        TreeNode *root=new TreeNode(mid_val);
        root->left=buildTree(in_l,post_l);
        root->right=buildTree(in_r,post_r);

        return root;
    }
};