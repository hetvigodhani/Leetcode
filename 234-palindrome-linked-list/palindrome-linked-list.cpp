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
    bool isPalindrome(ListNode* head) {

        //one node in linkedlist
        if(head->next==NULL || head==NULL)  return true;

        //finding mid
        ListNode * slow=head;
        ListNode * fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }

        //reverse right of mid
        ListNode * pre=NULL;
        ListNode * curr=slow;
        ListNode * nex=NULL;
        while(curr!=NULL)
        {
            nex=curr->next;
            curr->next=pre;
            pre=curr;
            curr=nex;
        }

        //check pal.
        ListNode * first=head;
        ListNode * second=pre;
        while(second!=NULL)
        {
            if(first->val!=second->val) return false;
            first=first->next;
            second=second->next;
        }
        return true;
    }
};