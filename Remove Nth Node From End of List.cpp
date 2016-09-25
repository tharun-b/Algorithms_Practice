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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *ptre = head; 
        ListNode *ptrm = head;
        if(n<1) return head; 
        
        int c  = n ; 
        while(c--)
        {
            ptre = ptre->next;
        }
        if(ptre == NULL) return head->next; 
        while(ptre->next != NULL)
        {
            ptre = ptre->next; 
            ptrm = ptrm->next;
        }
        
        // if(ptrm == head)
        // head->next = head->next->next; 
        
        if(ptrm->next)
        ptrm->next = ptrm->next->next; 
        else ptrm->next = NULL; 
        
        
        
        return head;
        
    }
};
