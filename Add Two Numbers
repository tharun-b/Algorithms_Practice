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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 ==NULL) return l2;
        if(l2==NULL) return l1; 
        ListNode *ptr1 =l1; 
        ListNode *ptr2 =l2; 
        int sum =0 ;
        int carryin =0; 
        ListNode *pptr1 = ptr1; 
        ListNode *pptr2 = ptr2; 
        while((ptr1 != NULL) && (ptr2!=NULL)) 
        {
             sum = ptr1->val + ptr2->val +carryin;
             carryin = sum/10;
             sum = sum%10; 
             ptr1->val = sum;
             
             pptr1 = ptr1; 
             pptr2 = ptr2; 
             
             ptr1= ptr1->next; 
             ptr2= ptr2->next; 
        }
       
        ListNode *extra ; 
        if(ptr1 ==NULL)
        {
            extra = ptr2; 
        }
        else
        {
            extra = ptr1;
        }
           pptr1->next  = extra; 


            if(carryin >0)
            {
                while(extra !=NULL)
                {
                     sum = extra->val  + carryin;
                     carryin = sum/10;
                     sum = sum% 10; 
                     extra->val = sum;
                     
                     pptr1 = extra; 
                     extra= extra->next; 
                }
                if(carryin >0)
                {
                    ListNode *npt = new ListNode(carryin); 
                    pptr1->next =npt;  
                    return l1;
                }
            }
            else
            {
                return l1; 
            }
          return l1; 

        }
};
