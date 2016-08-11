/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
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

 
// version 1: (Recommend)
class Solution {
public:
    /**
     * @param head: The first node of linked list.
     * @return: a tree node
     */
    TreeNode *sortedListToBST(ListNode *head) {
        if (head == NULL) {
            return NULL;
        }
        int size = getListSize(head);
        return convertHelper(head, size);
    }
    
    int getListSize(ListNode *head) {
        int size = 0;
        while (head != NULL) {
            head = head->next;
            size++;
        }
        return size;
    }
    
    TreeNode *convertHelper(ListNode *&head, int size) {
        if (size == 0) {
            return NULL;
        }
        
        TreeNode *root = new TreeNode(0);
        root->left = convertHelper(head, size / 2);
        root->val = head->val; head = head->next;
        root->right = convertHelper(head, size - size / 2 - 1);
        return root;
    }
};

// // version 2:
// struct ResultType {
//     TreeNode *tree;
//     ListNode *next;
// };

// class Solution {
// public:
//     /**
//      * @param head: The first node of linked list.
//      * @return: a tree node
//      */
//     TreeNode *sortedListToBST(ListNode *head) {
//         if (head == NULL) {
//             return NULL;
//         }
        
//         int size = getListSize(head);
//         ResultType result = convertHelper(head, size);
//         return result.tree;
//     }
    
//     int getListSize(ListNode *head) {
//         int size = 0;
//         while (head != NULL) {
//             head = head->next;
//             size++;
//         }
//         return size;
//     }
    
//     ResultType convertHelper(ListNode *head, int size) {
//         ResultType result;
        
//         if (size == 1) {
//             result.tree = new TreeNode(head->val);
//             result.next = head->next;
//             return result;
//         }
        
//         ResultType left = convertHelper(head, size / 2);
//         result.tree = new TreeNode(left.next->val);
//         result.tree->left = left.tree;
//         if (left.next->next == NULL || size - size / 2 - 1 == 0) {
//             result.tree->right = NULL;
//             result.next = left.next->next;
//             return result;
//         }
//         ResultType right = convertHelper(left.next->next, size - size / 2 - 1);
//         result.tree->right = right.tree;
//         result.next = right.next;
//         return result;
//     }
// };