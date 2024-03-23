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
    void reorderList(ListNode* head) {
        stack<ListNode*> s;
        ListNode *slow=head;
        ListNode *fast=head;
        //Find the mid in linked list
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        //insert nodes after finding mid into the stack
        ListNode *temp=slow->next;
        slow->next=NULL;
        while(temp!=NULL)
        {
            s.push(temp);
            temp=temp->next;
        }
        //insert top to linked list
        slow=head;
        while(!s.empty())
        {
            temp=s.top();
            s.pop();
            temp->next=slow->next;
            slow->next=temp;
            slow=temp->next;
        }
    }
};