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

        if (root==nullptr) return true;

        if (root->left){ 
        		if (isValidBST(root->left) and (root->val > maxNodeValue(root->left))) ;
        		else return false;
        	}

        if (root->right){ 
        		if (isValidBST(root->right) and (root->val < minNodeValue(root->right))) ;
        		else return false;
        	}
        	// cout<<root->val<<endl;
        
        return true;


    }

    int maxNodeValue(TreeNode *root){
    	if (root==nullptr) return -INT_MAX;
    	int subtreeMax=max(maxNodeValue(root->left),maxNodeValue(root->right));
    	return max(subtreeMax,root->val);

    }

    int minNodeValue(TreeNode *root){
    	if (root==nullptr) return INT_MAX;
    	int subtreeMin=min(minNodeValue(root->left),minNodeValue(root->right));
    	return min(subtreeMin,root->val);

    }



};


// class Solution {
// private:
//     TreeNode *lastNode = NULL;
// public:
//     /**
//      * @param root: The root of binary tree.
//      * @return: True if the binary tree is BST, or false
//      */
//     bool isValidBST(TreeNode *root) {
//         if (root == NULL) {
//             return true;
//         }
//         if (!isValidBST(root->left)) {
//             return false;
//         }
//         if (lastNode != NULL && lastNode->val >= root->val) {
//             return false;
//         }
//         lastNode = root;
//         return isValidBST(root->right);
//     }
// };