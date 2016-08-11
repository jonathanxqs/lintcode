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
public:
    /**
     * @param root: The root of binary tree.
     * @return: True if this Binary tree is Balanced, or false.
     */
    bool isBalanced(TreeNode *root) {
        // write your code here
        if (root == nullptr) return true;
        return (isBalancedOnlyThisNode(root) and isBalanced(root->left) and isBalanced(root->right));

    }

    bool isBalancedOnlyThisNode(TreeNode *root){
    	if (root == nullptr) return true;
    	if ( abs(maxDepth(root->left)-maxDepth(root->right))<=1 ) return true;
    }

	int maxDepth(TreeNode *root) {
        // write your code here
        if (root == nullptr) return 0;

        return 1+max(maxDepth(root->left),maxDepth(root->right));
    }
};