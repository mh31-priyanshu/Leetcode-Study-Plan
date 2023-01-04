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
    bool hasCycle(ListNode *head) {
        if(!head || !head->next) return false;
        ListNode* slow = head;
        ListNode* fast = slow->next;
        while (1) {
            if(!fast->next || !fast->next->next){
                return false;
            }else {
                if(slow==fast){
                    return true;
                }else {
                    slow=slow->next;
                    fast = fast->next->next;
                }
            }
        }
    }
};