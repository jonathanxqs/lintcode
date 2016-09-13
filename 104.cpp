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
     * @param lists: a list of ListNode
     * @return: The head of one sorted list.
     */
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        // write your code here
        ListNode* tmp_node = NULL;
        ListNode* tar_node = NULL;
        ListNode* new_node = NULL;
        ListNode* result = NULL;
        for (int i = 0; i < lists.size(); ++i) {
            tmp_node = lists[i];
            if (NULL == tmp_node) {
                continue;
            }
            if (NULL == result) {
                result = new ListNode(tmp_node->val);
                tmp_node = tmp_node->next;
            } else {
                if (result->val > tmp_node->val) {
                    new_node = new ListNode(tmp_node->val);
                    new_node->next = result;
                    result = new_node;
                    tmp_node = tmp_node->next;
                }
            }
            tar_node = result;
            while (tmp_node != NULL) {
                while (NULL != tar_node->next && tar_node->next->val < tmp_node->val) {
                    tar_node = tar_node->next;
                }
                if (NULL == tar_node->next) {
                    new_node = new ListNode(tmp_node->val);
                    tar_node->next = new_node;
                } else {
                    new_node = new ListNode(tmp_node->val);
                    new_node->next = tar_node->next;
                    tar_node->next = new_node;
                }
                tmp_node = tmp_node->next;
            }
        }
        return result;
    }
};

// Total Runtime: 360 m