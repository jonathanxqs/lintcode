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

        cout<<head->val<<endl;

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

// 1. root node is the target node: find the right most node if its left child and replace the root node
// 2. target node has no child leaf: set its parent left/right child to null
// 3. target node has only one child: replace target node with that child
// 4. target node has both children: find the right most leaf of its left children and replace the target node; 
// remember to set its parent child to null and replace children of this node to the target node children 
// (another corner case: check if its child is itself)

//  most left subnode in the right tree or most right node in the left subtree