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
     * @param ListNode l1 is the head of the linked list
     * @param ListNode l2 is the head of the linked list
     * @return: ListNode head of linked list
     */
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        // write your code here
        ListNode *p=l1,*q=l2,*ml_h=new ListNode(),*ml_i=ml_h;

        // cout<<"OK in initiation"<<endl;

        while ( p!=nullptr or q!=NULL){

        	// cout<<"OK in while loop"<<endl;


        	if (q==nullptr or (p!=NULL && p->val < q->val) ){
        		ml_i->val=p->val;
        		// cout<<ml_i->val<<" ";
        		p=p->next;   		

        	}
        	else{
        		ml_i->val=q->val;
        		// cout<<ml_i->val<<" ";
        		q=q->next;
        	}

        	ListNode *ml_n=new ListNode();
        	if (p==nullptr and q==NULL) break;
        		
        		ml_i->next=ml_n;
        		ml_i=ml_n;


        }

        return ml_h;

    }
};