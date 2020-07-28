// https://leetcode.com/problems/merge-two-sorted-lists/

// recursive
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        else if(!l2) return l1;
        
        ListNode *temp = NULL;
        
        if(l1->val <= l2->val) {
            temp = l1;
            temp->next = mergeTwoLists(l1->next, l2);
        }
        else {
            temp = l2;
            temp->next = mergeTwoLists(l1, l2->next);
        }
        
        return temp;
    }
};


// iterative
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        else if(!l2) return l1;
        
        ListNode *p = l1, *q = l2, *head = NULL, *temp = NULL;
        
        if(p->val <= q->val) {
            head = p;
            p = p->next;
        }
        else {
            head = q;
            q = q->next;
        }
        
        temp = head;
        
        while(p && q) {
            if(p->val <= q->val) {
                temp->next = p;
                p = p->next;
            }
            else {
                temp->next = q;
                q = q->next;
            }
            temp = temp->next;
        }
        
        if(p && !q) temp->next = p;
        else if(!p && q) temp->next = q;
        
        return head;
    }
};