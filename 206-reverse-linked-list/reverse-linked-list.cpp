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
    ListNode* reverseList(ListNode* head) {
        ListNode * curr=head;
        ListNode * pre=NULL;
        ListNode * nex=NULL;
        while(curr!=NULL)
        {
            nex=curr->next;
            curr->next=pre;
            pre=curr;
            curr=nex;
        }
        head=pre;
        return head;
    }
};