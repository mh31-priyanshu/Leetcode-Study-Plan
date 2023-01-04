/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return head;
        ListNode* back = head;
        ListNode* front = back->next;
        while(front){
            if(front->val == val){
                back->next = front->next;
                front = front->next;
                continue;
            }
            back=front;
            front=front->next;
        }
        
        if(head->val == val) head=head->next;
        if(head && head->val == val) head=head->next;
        return head;
    }
};