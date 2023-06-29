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
class Solution 
{
    
public:
        struct ListNode *head=NULL;
        struct ListNode *loc=NULL;
        int carry=0;
        int sum=0;
        void sum1(int a, int b)
        {
            sum=0;
            if(a+b+carry>9)
            {
                sum=a+b+carry-10;
                carry=1;
                insert(sum);
            }
            else
            {
                sum=a+b+carry;
                insert(sum);
                carry=0;
            }
        }
        void insert(int sum)
        {
            struct ListNode *ptr=new ListNode;
            ptr->val=sum;
            ptr->next=NULL;
            if(head==NULL)
            {
                head=ptr;
            }
            else
            { 
                loc=head;
                while(loc->next!=NULL)
                {
                    loc=loc->next;
                }
                loc->next=ptr;
            }
            
        }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        
        int i;
        while(l1!=NULL && l2!=NULL)
        {
            sum1(l1->val,l2->val);
            l1=l1->next;
            l2=l2->next;
        }
        if(l1!=NULL && l2==NULL)
        {
            while(l1!=NULL)
            {
                sum1(l1->val,0);
                l1=l1->next;
            }
        }
        if(l2!=NULL && l1==NULL)
        {
             while(l2!=NULL)
            {
                sum1(l2->val,0);
                l2=l2->next;
            }
        }
        if(carry!=0)
        {
            sum1(0,0);
            carry=0;
        }
        return head;
    }
};