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
     * @return: An integer
     */

    int minDepth(TreeNode *root) {
        // write your code here
        if (root==NULL) return 0;
        int min_tmp=INT_MAX;

        if (root->left==NULL and root->right==NULL) return 1;


        if (root->left) min_tmp=min(minDepth(root->left),min_tmp);
        if (root->right) min_tmp=min(minDepth(root->right),min_tmp); 
        

        return 1+min_tmp;

    }
};