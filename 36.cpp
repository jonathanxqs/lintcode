/**
 * Definition of singly-linked-list:
 * 
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *        this->val = val;
 *        this->next = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * @param head: The head of linked list.
     * @param m: The start position need to reverse.
     * @param n: The end position need to reverse.
     * @return: The new head of partial reversed linked list.
     */
    ListNode *reverseBetween(ListNode *head, int m, int n) {
        // write your code here
        int i=0,j,k;
        if (m==n) return head;

        ListNode *lf_dummy=new ListNode(-1);
        lf_dummy->next=head;

        ListNode *p1=lf_dummy,*s1,*s2,*s3,*m_new,*l_left,*f_right;

        while (i<m-1){
        	p1=p1->next;
        	i++;
        }   
        
        l_left=p1;
        p1=p1->next;
        m_new=p1;

        s1=p1;s2=p1->next;
        i++;

        // cout<<l_left->val<<" "<<m_new->val<<" "<<s2->val<<endl;

        while (i<n-1){
        	// s2=s1;
        	// s1=p1->next->next;
        	s3=s2->next;
        	s2->next=s1;
        	s1=s2;
        	s2=s3;
        	
        	i++;
        	// cout<<i<<" "<<s1->val<<" "<<s2->val<<endl;
        }

        f_right=s2->next;
        s2->next=s1;
        l_left->next=s2;
        m_new->next=f_right;
        
        return lf_dummy->next;




        //p1 ->lf not change


    }
};
