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
     * @param k1 and k2: range k1 to k2.
     * @return: Return all keys that k1<=key<=k2 in ascending order.
     */
    vector<int> searchRange(TreeNode* root, int k1, int k2) {
        // write your code here
        std::vector<int> rt_v,v1,lf_v;
        if (root==NULL) return v1;
        lf_v=searchRange(root->left,k1,k2);
        if (root->val >=k1 and root->val<=k2) 
        	lf_v.push_back(root->val);
        rt_v=searchRange(root->right,k1,k2);
        lf_v.insert(lf_v.end(),rt_v.begin(),rt_v.end());

        return lf_v;
    }
};