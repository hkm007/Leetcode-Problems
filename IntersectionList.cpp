// https://leetcode.com/problems/intersection-of-two-linked-lists/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *t = headA, *p = headA, *q = headB;
        int countA = 0, countB = 0;
        
        while(t) {
            t = t->next;
            countA++;
        }
        t = headB;
        while(t) {
            t = t->next;
            countB++;
        }
        
        if(countA > countB) for(int i = 0; i < abs(countA-countB); i++) p = p->next;
        else for(int i = 0; i < abs(countA-countB); i++) q = q->next;
        
        while(p && q) {
            if(p == q) return p;
            p = p->next;
            q = q->next;
        }
        return NULL;
    }
};