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
     *@param preorder : A list of integers that preorder traversal of a tree
     *@param inorder : A list of integers that inorder traversal of a tree
     *@return : Root of a tree
     */
public:
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
        // write your code here
    	if (preorder.size()==0) return NULL;

        int midVal=preorder[0];
        TreeNode *mid=new TreeNode(preorder[0]),*left,*right,*s1,*s2;

        auto md_it=find(inorder.begin(),inorder.end(),midVal);
        int in_lg=md_it-inorder.begin();
        // cout<<in_lg<<endl;

        std::vector<int> in_left(inorder.begin(),md_it);
        std::vector<int> in_right(md_it+1,inorder.end());
        std::vector<int> pre_left(preorder.begin()+1,preorder.begin()+1+in_lg);
        std::vector<int> pre_right(preorder.begin()+1+in_lg,preorder.end());

        

        mid->left=buildTree(pre_left,in_left);
        mid->right=buildTree(pre_right,in_right);

        return mid;

    }
};