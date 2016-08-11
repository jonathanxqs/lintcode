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
     * @return: True if the binary tree is BST, or false
     */

    bool isValidBST(TreeNode *root) {
        // write your code here
        if (root->left){ 
        		if (isValidBST(root->left) and root->val > maxNodeValue(root->left->val)) ;
        		else return false;
        	}

        if (root->right){ 
        		if (isValidBST(root->right) and root->val < mixNodeValue(root->right->val)) ;
        		else return false;
        	}

        if (root==nullptr) return true;
        return true;


    }
    
    int maxNodeValue(TreeNode *root){
    	if (root==nullptr) return -INT_MAX;
    	return max(root->val,maxNodeValue(root->left),maxNodeValue(root->right));

    }

    int minNodeValue(TreeNode *root){
    	if (root==nullptr) return INT_MAX;
    	return min(root->val,minNodeValue(root->left),minNodeValue(root->right));

    }

};