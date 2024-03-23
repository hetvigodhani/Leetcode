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
       if (head == nullptr || head->next == nullptr)
            return true; // empty list or single element is considered palindrome

        ListNode* slow = head;
        ListNode* fast = head;
        
        // Finding the middle of the linked list
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reversing the second half of the linked list
        ListNode* prev = nullptr;
        ListNode* curr = slow;
        ListNode* next = nullptr;
        
        while (curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // Comparing the first half with the reversed second half
        ListNode* first = head;
        ListNode* second = prev;

        while (second != nullptr) {
            if (first->val != second->val)
                return false;
            first = first->next;
            second = second->next;
        }

        return true;
    }
};