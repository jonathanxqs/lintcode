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
 
struct Node
{
    TreeNode *node;
    int level;
    Node(){}
    Node(TreeNode *n, int l):node(n), level(l){}
}; 
class Solution {
    /**
     * @param root: The root of binary tree.
     * @return: A list of lists of integer include 
     *          the zigzag level order traversal of its nodes' values 
     */
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root) {
        // write your code here
        vector<vector<int> > ret;
		ret.clear();       
        if (root == NULL)
            return ret;        
        queue<Node> q;        
        q.push(Node(root, 0));        
        int curLevel = -1;        
        vector<int> a;        
        while(!q.empty())
        {
            Node node = q.front();            
            if (node.node->left)
                q.push(Node(node.node->left, node.level + 1));           
            if (node.node->right)
                q.push(Node(node.node->right, node.level + 1));   
            if (curLevel != node.level)
            {
                if (curLevel != -1)
                {
                    if (curLevel % 2 == 1)
                        reverse(a.begin(), a.end());
                        
                    ret.push_back(a);
                }
                a.clear();
                curLevel = node.level;
            }
            a.push_back(node.node->val);
            q.pop();
        }        
        if (curLevel % 2 == 1)
            reverse(a.begin(), a.end());   
        ret.push_back(a);
        return ret;
    }
};