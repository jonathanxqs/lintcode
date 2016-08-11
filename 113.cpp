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
class Solution{
public:
    /**
     * @param head: The first node of linked list.
     * @return: head node
     */
    ListNode * deleteDuplicates(ListNode *head) {
        // write your code here
        ListNode *leftDummy=new ListNode(-1);
        leftDummy->next=head;

        ListNode *p=leftDummy,*q=p->next,*s1,*s2;

        while (q != nullptr){
        	if (q->next and q->val == q->next->val){
        		while (q->next and q->val == q->next->val) q->next=q->next->next;
        		p->next=q->next;
        		q=p->next;
        	}
        	else {
        		q=q->next;
        		p=p->next;
        	}

        	
        }

        return leftDummy->next;
    }
};