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
 */
class Solution {
public:
    /**
     * @param head: The first node of linked list.
     * @return: void
     */
    void reorderList(ListNode *head) {
        // write your code here
        if (head == NULL)
            return;
        
        vector<ListNode*> nodes;
        ListNode* iter = head;
        while(iter != NULL)
        {
            nodes.push_back(iter);
            iter = iter->next;
        }
        
        int LEN = nodes.size();
        int left = 0;
        int right = LEN -1;
        while(left < right)
        {
            nodes[left]->next = nodes[right];
            nodes[right--]->next = nodes[++left];
        }
        nodes[left]->next = NULL;
    }
};
