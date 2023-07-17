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
    ListNode* removeElements(ListNode* head, int val)
    {
        if(head==NULL)
            return NULL;
        while(head!=NULL && head->val==val)
        {
            head=head->next;  
        }
        ListNode *loc=head;
        while(loc!=NULL)
        {
            if(loc->next!=NULL && loc->next->val==val)
            {
                if(loc->next->next!=NULL)
                {   loc->next=loc->next->next;
                    continue;
                }
                else
                {
                    loc->next=NULL;
                }
            }
            else
            {
                loc=loc->next;
            }
        }
        return head;
    }
};