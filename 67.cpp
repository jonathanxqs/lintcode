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
     * @return: Inorder in vector which contains node values.
     */
public:

	std::vector<int> rt_invt;

    vector<int> inorderTraversal(TreeNode *root) {
        // write your code here

        std::vector<int> v1;

        if (root==nullptr) return rt_invt;

        if (root->left) v1=inorderTraversal(root->left);
        rt_invt.push_back(root->val);
        if (root->right) v1=inorderTraversal(root->right);

        return rt_invt;

    }
};