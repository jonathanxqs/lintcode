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
     * @return: head node
     */
    ListNode *deleteDuplicates(ListNode *head) {
        // write your code here
        ListNode *p=head;
        while (p!=nullptr){
        	while (p->next and p->val == p->next->val){
        		p->next=p->next->next;
        	}
        	p=p->next;


        }

        return head;
    }
};