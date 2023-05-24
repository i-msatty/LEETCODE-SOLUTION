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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *temp = head;
        map<int, int> m;
        
        while(temp!= NULL)
        {
            m[temp->val]++;
            temp = temp->next;
        }
        
        ListNode *t = new ListNode();
        ListNode *t1 = t;
        for(auto it: m)
        {
            if(it.second==1)
            {
                ListNode *temp1 = new ListNode(it.first);
                t->next = temp1;
                t = t->next;
            }
        }
        t1 = t1->next;
        
        return t1;
    }
};