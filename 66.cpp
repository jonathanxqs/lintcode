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
     * @return: Preorder in vector which contains node values.
     */
    vector<int> preorderTraversal(TreeNode *root) {
        // write your code here

        std::vector<int> v;
        v.clear();
        if (root==nullptr) return v ;
        
        v.push_back(root->val);

        std::vector<int> l1,r1;
        l1=preorderTraversal(root->left);
        r1=preorderTraversal(root->right);
        v.insert(v.end(),l1.begin(),l1.end());
        v.insert(v.end(),r1.begin(),r1.end());
        

        return v;
        

    }
};
