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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL)
            return head;
        ListNode* middle=head;
        ListNode* find=head;
        bool flag=1;
        while(find!=NULL)
        {
            if(flag==0)
            {
                flag=1;
                middle=middle->next;
            }
            else
                flag=0;
            find=find->next;
        }
        return middle;
    }
};