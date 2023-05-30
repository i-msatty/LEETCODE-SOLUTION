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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        int  c=0;
        if(head==NULL)
        {
            return NULL;
        }
        struct ListNode *loc1=head;
        struct ListNode *loc2=head;
        while(loc1!=NULL) // counting total length;
        {
            c++;
            loc1=loc1->next;
        }
        if(c==1 && n==1)
        {
            return NULL;
        }
        if(c==n)
        {
            if(head->next==NULL)
            {
                return NULL;
            }
            else
            {
                head=head->next;
                return head;
            }
        }
        else
        {
        while(c!=n)
        {
            if(c-1==n)
            {
                if(loc2->next->next==NULL)
                {
                    loc1=NULL;
                    break;
                }
                else
                {
                  loc1=loc2->next->next;
                  break;
                }
            }
            loc2=loc2->next;
            c--;
        }
        loc2->next=loc1;
        }
        return head;
    }
};