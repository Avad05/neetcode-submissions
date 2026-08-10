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
    bool hasCycle(ListNode* head) {
        ListNode *currfast = head, *currslow=head;
        while(currfast != nullptr && currfast->next != nullptr){
            currfast = currfast->next->next;
            currslow = currslow->next;
            if(currslow == currfast){
                return true;
            }
        }
        return false;
        }
};
