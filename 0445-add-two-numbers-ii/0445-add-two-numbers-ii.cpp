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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> a1;
        stack<int> a2;
        stack<int> ans;
        int carry = 0;
        ListNode *temp1 = l1;
        ListNode *temp2 = l2;
        while(temp1 && temp2){
            a1.push(temp1->val);
            a2.push(temp2->val);
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while(temp1){
            a1.push(temp1->val);
            temp1=temp1->next;
        }
        while(temp2){
            a2.push(temp2->val);
            temp2=temp2->next;
        }
        while(!a1.empty() && !a2.empty()){
            int s = a1.top()+a2.top()+carry;
            ans.push(s%10);
            carry = s/10;
            a1.pop();
            a2.pop();
        }
        while(!a1.empty()){
            int s = a1.top()+carry;
            ans.push(s%10);
            carry=s/10;
            a1.pop();
        }
        while(!a2.empty()){
            int s = a2.top()+carry;
            ans.push(s%10);
            carry=s/10;
            a2.pop();
        }
        if(carry){
            ans.push(1);
        }
        ListNode *f_ans = new ListNode(ans.top());
        ans.pop();
        ListNode *t = f_ans;
        while(!ans.empty()){
            ListNode *newnode = new ListNode(ans.top());
            t->next = newnode;
            t=newnode;
            ans.pop();
        }
        return f_ans;
    }
};