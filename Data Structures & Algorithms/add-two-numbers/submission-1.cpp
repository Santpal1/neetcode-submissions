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
        ListNode* list1 = l1;
        ListNode* list2 = l2;
        ListNode* l3 = nullptr;
        ListNode* res = l3;
        int carry = 0;
        while(list1 != nullptr && list2 != nullptr){
            int currSum = list1->val + list2->val + carry;
            if(currSum > 9){
                currSum = currSum % 10;
                carry = 1;
            }
            else{
                carry = 0;
            }
            ListNode* newNode = new ListNode(currSum);
            if(l3 == nullptr) {
                l3 = newNode;
                res = l3;
            }
            else{
                l3->next = newNode;
                l3 = l3->next;
            }
            list1 = list1->next;
            list2 = list2->next;
        }
        while(list1 != nullptr){
            int currSum = list1->val + carry;
            if(currSum > 9){
                currSum = currSum % 10;
                carry = 1;
            }
            else{
                carry = 0;
            }
            ListNode* newNode = new ListNode(currSum);
            if(l3 == nullptr) {
                l3 = newNode;
                res = l3;
            }
            else{
                l3->next = newNode;
                l3 = l3->next;
            }
            list1 = list1->next;
        }
        while(list2 != nullptr){
            int currSum = list2->val + carry;
            if(currSum > 9){
                currSum = currSum % 10;
                carry = 1;
            }
            else{
                carry = 0;
            }
            ListNode* newNode = new ListNode(currSum);
            if(l3 == nullptr) {
                l3 = newNode;
                res = l3;
            }
            else{
                l3->next = newNode;
                l3 = l3->next;
            }
            list2 = list2->next;
        }
        if(carry == 1){
            ListNode* newNode = new ListNode(1);
            l3->next = newNode;
        }
        return res;
    }
};
