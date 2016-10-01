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
     * @aaram a, b, the root of binary trees.
     * @return true if they are identical, or false.
     */
    bool isIdentical(TreeNode* a, TreeNode* b) {
        // Write your code here
        bool rt_identical_flag=false;
        
        if (a==NULL and b==NULL) return true;
        if ((a==NULL and b!=NULL) or (a!=NULL and b==NULL)) return false;
        if ((a->val == b-> val)) rt_identical_flag=true;
            else return false;

        rt_identical_flag = rt_identical_flag and isIdentical(a->left,b->left) and isIdentical(a->right,b->right);
        return rt_identical_flag;
    }
};

// Total Runtime: 28 ms