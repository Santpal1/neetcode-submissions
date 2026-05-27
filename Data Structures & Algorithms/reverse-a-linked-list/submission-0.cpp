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
        ListNode* temp = head;
        ListNode* prev = head;
        while (temp != nullptr) {
            ListNode* temp1 = temp->next;
            if (temp == head)
                temp->next = nullptr;
            else
                temp->next = prev;
            prev = temp;
            temp = temp1;
        }
        return prev;
    }
};
