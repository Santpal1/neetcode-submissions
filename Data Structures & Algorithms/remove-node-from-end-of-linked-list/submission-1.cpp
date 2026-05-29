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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == nullptr) return nullptr;
        ListNode* temp = head;
        int count = 1;
        while(temp->next != nullptr){
            temp = temp->next;
            count++;
        }
        
        int remove = count - n;
        if(remove == 0){
            ListNode* temp2 = head;
            head = head->next;
            delete temp2;
            return head;
        }

        temp = head;
        for(int i = 0; i < remove - 1; ++i){
            temp = temp->next;
        }
        ListNode* temp2 = temp->next;
        temp->next = temp->next->next;
        delete temp2;
        return head;
    }
};
