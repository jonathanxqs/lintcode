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
     * @param root: The root of the binary search tree.
     * @param value: Remove the node with given value.
     * @return: The root of the binary search tree after removal.
     */
    TreeNode* removeNode(TreeNode* root, int value) {
        // write your code here
        if (root == NULL)
            return NULL;
        TreeNode * head = new TreeNode();
        head->left = root;
        TreeNode * tmp = root, *father = head;

        while (tmp != NULL) {
            if (tmp->val == value)
                break;
            father = tmp;
            if (tmp->val > value)
                tmp = tmp->left;
            else
                tmp = tmp->right;
        }
        if (tmp == NULL)
            return head->left;

        if (tmp->right == NULL) {
            if (father->left == tmp)
                father->left = tmp->left;
            else
                father->right = tmp->left;
        } else 
        if (tmp->right->left == NULL) {
            if (father->left == tmp)
                father->left = tmp->right;
            else
                father->right = tmp->right;

            tmp->right->left = tmp->left;
            
        } else {
            father = tmp->right;
            TreeNode * cur = tmp->right->left;
            while (cur->left != NULL) {
                father = cur;
                cur = cur->left;
            }
            tmp->val = cur->val;
            father->left = cur->right;
        }
        return head->left;
    }
};