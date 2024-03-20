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
        ListNode* temp=list1;
        ListNode* temp2=list1;
        ListNode* temp3=list2;
        while(temp3->next!=NULL)
        {
            temp3=temp3->next;
        }
        int cnt=0;
        while(cnt!=a-1)
        {
            temp=temp->next;
            cnt++;
        }
        // cnt2=cnt;
        temp2=temp;
        while(cnt!=b+1)
        {
            temp2=temp2->next;
            cnt++;
        }
        temp->next=list2;
        temp3->next=temp2;
        return list1;
    }
};