/**
 * Definition of ListNode
 * 
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 * 
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
     * @return: The new head of reversed linked list.
     */
    ListNode *reverse(ListNode *head) {
        // write your code here
        ListNode *s1=head,*tmp,*bf=nullptr,*af;


        while (s1!=nullptr){
        	af=s1->next;
        	s1->next=bf;
        	if (af!=nullptr) {
        	    bf=s1;
        	    s1=af;
        	    
        	}
        	else break;
        }

        return s1;
    }
};
