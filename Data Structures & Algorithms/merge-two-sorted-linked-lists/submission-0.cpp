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
    void insertAtEnd(ListNode* head, int val){
        ListNode* newNode = new ListNode(val);
        if(head == nullptr){
            head = newNode;
        }
        ListNode* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = newNode;
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* result = new ListNode();
        ListNode* l1 = list1;
        ListNode* l2 = list2;
        while(l1 != nullptr && l2 != nullptr){
            if(l1->val < l2->val){
                insertAtEnd(result, l1->val);
                l1 = l1->next;
            }
            else{
                insertAtEnd(result, l2->val);
                l2 = l2->next;
            }
        }
        while(l1 != nullptr){
            insertAtEnd(result, l1->val);
            l1 = l1->next;
        }
        while(l2 != nullptr){
            insertAtEnd(result, l2->val);
            l2 = l2->next;
        }
        return result->next;
    }
};
