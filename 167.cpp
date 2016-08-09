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
     * @param l1: the first list
     * @param l2: the second list
     * @return: the sum list of l1 and l2 
     */
    ListNode *addLists(ListNode *l1, ListNode *l2) {
        // write your code here
        int ys=0,i,j;
        if (l1==NULL) return l2;
        if (l2==NULL) return l1;
        ListNode *p1=l1,*p2=l2,*rt_dummy=new ListNode(-1),*rt_scan=rt_dummy;

        while (p1!=nullptr and p2!=nullptr){
        	ListNode *tmp=new ListNode( (ys+p1->val+p2->val)%10 );
        	ys=(ys+p1->val+p2->val)/10;
        	rt_scan->next=tmp;
        	rt_scan=tmp;

        	p1=p1->next;
        	p2=p2->next;

        }

        // cout<<"After qici!"<<endl;

        ListNode *s1;
        if (p1!=nullptr and p2==nullptr) s1=p1;
        else if (p1==nullptr and p2!=nullptr) s1=p2;
        	 else {if (ys==1) {
        	 			ListNode *tmp=new ListNode( ys );
        	 			rt_scan->next=tmp;
        	 					}
        	 			return rt_dummy->next;        	 				
        	 		} 

        rt_scan->next=s1;
        rt_scan=rt_scan->next;

        while (rt_scan!=nullptr){
        	i=(rt_scan->val +ys)%10;
        	ys=(rt_scan->val +ys)/10;
        	rt_scan->val=i;
        	rt_scan=rt_scan->next;
        }

        if (ys==1) {
        	 			ListNode *tmp=new ListNode( ys );
        	 			rt_scan->next=tmp;
        	 					}


        return rt_dummy->next;






    }
};