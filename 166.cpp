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
     * @param n: An integer.
     * @return: Nth to last node of a singly linked list. 
     */
    ListNode *nthToLast(ListNode *head, int n) {
        // write your code here
        ListNode *leftDummy=new ListNode(-1),*tmp=leftDummy;
        leftDummy->next=head;
        int i=0;
        while (i<n){
        	tmp=tmp->next;
        	i++;
        }
        ListNode *l_rt=leftDummy;
        while (tmp!=nullptr){
        	l_rt=l_rt->next;
        	tmp=tmp->next;
        }
        return l_rt;
    }
};


