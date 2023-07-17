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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        int carry=0;
        ListNode* head1= NULL;
        ListNode* head2= NULL;
        ListNode* head3=NULL;
        while(l1!=NULL)
        {
            ListNode* temp=new ListNode;
            temp->val=l1->val;
            temp->next=head1;
            head1=temp;
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            ListNode* temp=new ListNode;
            temp->val=l2->val;
            temp->next=head2;
            head2=temp;
            l2=l2->next;
        }
        while(head1!=NULL &&  head2!=NULL)
        {
            ListNode* temp=new ListNode;
            temp->val=head1->val+head2->val+carry;
            {
                if(temp->val>9)
                {    temp->val=abs(10-temp->val);
                     carry=1;
                }
                else
                {
                    carry=0;
                }
            }
            temp->next=head3;
            head3=temp;
            head1=head1->next;
            head2=head2->next;
        }
        if(head1!=NULL && head2==NULL)
        {
            while(head1!=NULL)
            {
            ListNode* temp=new ListNode;
            temp->val=head1->val;
                if(carry!=0)
                {
                    temp->val+=carry;
                    carry=0;
                }
                if(temp->val>9)
                {
                    carry=1;
                    temp->val=abs(10-temp->val);
                }
            temp->next=head3;
            head3=temp;
            head1=head1->next;
            }
        }
         if(head1==NULL && head2!=NULL)
        {
            while(head2!=NULL)
            {
            ListNode* temp=new ListNode;
            temp->val=head2->val;
                if(carry!=0)
                {
                    temp->val+=carry;
                    carry=0;
                }
                if(temp->val>9)
                {
                    carry=1;
                    temp->val=abs(10-temp->val);
                }
            temp->next=head3;
            head3=temp;
            head2=head2->next;
            }
        }
        if(carry!=0)
        {
            ListNode* temp=new ListNode;
            temp->val=carry;
            temp->next=head3;
            head3=temp;
        }
     return head3;  
    }
};