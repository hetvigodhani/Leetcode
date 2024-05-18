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
        int carry=0;
        ListNode * tail=new ListNode(0);
        ListNode * dummy=tail;

        while(l1!=NULL || l2!=NULL|| carry)
        {
            int v1=(l1 != nullptr) ? l1->val : 0;
            int v2=(l2 != nullptr) ? l2->val : 0;
            int t=v1+v2+carry;
            int digit=t%10;
            carry=t/10;

            ListNode *newNode= new ListNode(digit);
            dummy->next=newNode;
            dummy=dummy->next;

            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
        }
        ListNode * result=tail->next;
        delete tail;
        return result;
    }
};