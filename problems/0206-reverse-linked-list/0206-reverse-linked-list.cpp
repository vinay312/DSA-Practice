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

        // ITERATIVE APPROACH
        
       /* ListNode* curr = head;
        ListNode* back = nullptr;
        ListNode* front = nullptr;

        while(curr){

            front= curr->next;
            curr->next = back;
            back= curr;
            curr= front;
        }

        return back;
        */

        ////////////////////////// RECURSIVE APPROACH//////////////////////////////////////////////////////////

        if(head ==  nullptr || head->next == nullptr){
            return head;
        }

        ListNode* newHead = reverseList(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = nullptr;

        return newHead;
    }
};