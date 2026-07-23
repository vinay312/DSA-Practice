/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        /////////////// SLOW FAST POINTER APPROACH ///////////
        ListNode *slow = head;
        ListNode *fast = head;

        while(fast!= nullptr && fast->next != nullptr){

            slow= slow->next;
            fast= fast->next->next;


            if(fast==slow){
                slow= head;

                while(slow!=fast){
                    slow= slow->next;
                    fast = fast -> next;

                    
                }

                return slow;
            }

           
        }

         return nullptr;

        //////////////HASHING METHOD///////////

        /*ListNode* temp  = head;

        unordered_map<ListNode* , int> mpp;

        while(temp != nullptr){
            if(mpp.find(temp) != mpp.end()){
                return temp;
            }

            mpp[temp]=1;
            temp= temp -> next;

        }

        return nullptr;
        */
    }
    
};