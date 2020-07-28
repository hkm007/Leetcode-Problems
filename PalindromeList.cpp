// https://leetcode.com/problems/palindrome-linked-list/

class Solution {
public:
    ListNode* reverse(ListNode *head) {
        if(!head || !head->next) return head;
        ListNode *p = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return p;
    }
    
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;
        
        ListNode *slow = head, *fast = head;
        
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        fast = head;
        slow = reverse(slow);
        
        while(slow && fast) {
            if(slow->val != fast->val) return false;
            slow = slow->next;
            fast = fast->next;
        }
        return true;
    }
};