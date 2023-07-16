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
    ListNode* swapNodes(ListNode* head, int k) 
    {
        ListNode *loc=head;
        ListNode *loc1=NULL,*loc2=NULL;
        int size=0,count=0,temp=0;
        while(loc!=NULL)
        {
            size++;
            loc=loc->next;
        }
        loc=head;
        if(size==2 && k==2)
        {
            loc1=head;
            loc2=head->next;
        }
        else
        {
        while(size!=0)
        {
            count++;
            if(count==k)
            {
                loc1=loc;
            }
            if(size==k)
            {
                loc2=loc;
            }
            loc=loc->next;
            size--;
        }
        }
        temp=loc1->val;
        loc1->val=loc2->val;
        loc2->val=temp;
        //free(loc1);
        //free(loc2);
        return head;
    }
};