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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return NULL;
        int count=0;
        ListNode* loc=head;
        while(loc!=NULL)
        {
            count++;
            loc=loc->next;
        }
        loc=head;
        count/=2;
        count-=1;
        while(count>0)
        {
            loc=loc->next;
            count--;
        }
        loc->next=loc->next->next;
        return head;
    }
};