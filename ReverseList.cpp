// https://leetcode.com/problems/reverse-linked-list/

// iterative
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next) return head;
        
        ListNode *p = NULL, *q = head;
        while(q) {
            ListNode *temp = q->next;
            q->next = p;
            p = q;
            q = temp;
        }
        
        return p;
    }
};

// recursive
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *p = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return p;
    }
};