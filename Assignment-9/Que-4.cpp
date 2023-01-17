//leetcode.com/problems/intersection-of-two-linked-lists

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
   
        int a=0, b=0;

        ListNode *currA = headA, *currB = headB;
        while(currA != NULL){
            currA = currA -> next;
            a++;
        }
        while(currB != NULL) {
            currB = currB->next;
            b++;
        }
        
        int k = abs(b-a);
        if ( b > a ) {
            while(k--) {
                headB = headB -> next;
            }
        }
        else {
            while(k--) {
                headA = headA -> next;
            }
        }
        while(headA != headB && headA->next != NULL && headB->next != NULL) {
            headA = headA -> next;
            headB = headB -> next;
        }
        
        if(headA != headB) return NULL;
        
        return headA;
    }
};