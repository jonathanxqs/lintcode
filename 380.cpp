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
     * @param headA: the first list
     * @param headB: the second list
     * @return: a ListNode
     */
    map<ListNode *,int> nodeAlready;
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *pa=headA,*pb=headB;
        int lengthA=0,lengthB=0;
        while(pa) {pa=pa->next;lengthA++;}
        while(pb) {pb=pb->next;lengthB++;}
        
        if(lengthA<=lengthB){
          int n=lengthB-lengthA;
          pa=headA;pb=headB;
          while(n) {pb=pb->next;n--;}
        }else{
          int n=lengthA-lengthB;
          pa=headA;pb=headB;
          while(n) {pa=pa->next;n--;}
        }
        while(pa!=pb){
          pa=pa->next;
          pb=pb->next;
        }
        return pa;
      }

};