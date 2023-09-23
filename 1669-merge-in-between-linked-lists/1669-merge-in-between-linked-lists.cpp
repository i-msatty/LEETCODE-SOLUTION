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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *p1,*p2,*p3,*loop=NULL;
        loop=list1;
        p3=list2;
        int i;
        //part1 
        for(i=0;i<=b;i++)
        {
            if(i+1==a)
            {
                p1=loop;
            }
            if(i==b)
            {
                p2=loop;
            }
            loop=loop->next;
        }
        //part2
        p1->next=list2;
        while(p3->next!=NULL){
            p3=p3->next;
        }
        p3->next=p2->next;
        return list1;
    }
};