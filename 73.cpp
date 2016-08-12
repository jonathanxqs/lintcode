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
     *@param preorder : A list of integers that preorder traversal of a tree
     *@param inorder : A list of integers that inorder traversal of a tree
     *@return : Root of a tree
     */
public:
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
        // write your code here
    	if (preorder.size()==0) return NULL;

        int midVal=preorder[0];
        TreeNode *mid=new TreeNode(preorder[0]),*left,*right,*s1,*s2;

        

        mid->left=buildTree();
        mid->right=buildTree();

        return mid;

    }
};