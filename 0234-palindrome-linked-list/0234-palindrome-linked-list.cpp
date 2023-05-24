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
     ListNode* reverseList(ListNode* head) {
        
        ListNode * prev = NULL;
        ListNode * curr = head;
        ListNode * next;
        
        while(curr!=NULL)
        {
            next = curr->next;
            curr->next = prev;
            
            prev = curr;
            curr = next;
            
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        
        if(head->next==NULL)
            return true;
        
        ListNode * temp1 = head;
        int count=1;
        int i= 1;
        while(temp1!=NULL)
        {
            temp1= temp1->next;
            count++;
        }
        
        count = count/2;
        // cout<<count<<endl;
        temp1 = head;
        while(i<count)
        {
            temp1= temp1->next;
            i++;
        }
        ListNode* t=temp1->next;
        cout<<t->val<<endl;
        temp1->next=NULL;
        ListNode* h2=reverseList(t);
        ListNode* h1=head;
        cout<<h1->val<<" "<<h2->val<<endl;
        while(h1!=NULL && h2!=NULL)
        {
            if(h1->val!=h2->val)
                return false;
            h1=h1->next;
            h2=h2->next;
        }
        return true;
        
        //rev
        
//         ListNode *prev = temp1;
//         ListNode *curr = temp1->next;
//         ListNode *next1;
        
//         while(curr!= NULL)
//         {
//             next1 = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next1;
//         }
        
//         temp1  = head;
//         i=0;
        
//         while(i <count)
//         {
//             temp1 = temp1->next;
//             i++;
//         }
         
//         while(count--)
//         {
//            if(head->val != temp1->val)
//                return 0;
//         }
    
        
    }
};