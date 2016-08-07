/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    /**
     * @param head: the list
     * @param k: rotate to the right k places
     * @return: the list after rotation
     */
    ListNode *rotateRight(ListNode *head, int k) {
        // write your code here
        if (k==0 or head==nullptr) return head;
        ListNode* left_dummy=new ListNode();
        left_dummy->next=head;
        ListNode *lf_p=left_dummy;
        ListNode *rt_p=lf_p->next;

        int i=0,j=0;

        while (rt_p!=nullptr){
        	rt_p=rt_p->next;
        	j++;
        }

        k=k%j;
        if (k==0) return head;
        rt_p=lf_p->next;


        while (i<k){
        	rt_p=rt_p->next;
        	i++;
            }
        while (rt_p!=NULL){
        	rt_p=rt_p->next;
        	lf_p=lf_p->next;
        }

        ListNode *rpart_p=lf_p->next,*n_head=rpart_p;
        lf_p->next=nullptr;
        while (rpart_p->next != nullptr){
        	rpart_p=rpart_p->next;
        }
        rpart_p->next=left_dummy->next;

        return n_head;

    }
};