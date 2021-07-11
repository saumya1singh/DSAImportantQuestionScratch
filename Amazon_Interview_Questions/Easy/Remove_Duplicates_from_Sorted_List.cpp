/*

Problem Link: https://leetcode.com/problems/remove-duplicates-from-sorted-list/

*/

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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head -> next == NULL)
            return head;
        ListNode *temp = head;
        while(temp && temp -> next){
            if(temp -> val == temp -> next -> val){
                ListNode *temp1 = temp-> next;
                temp -> val = temp1 -> val;
                temp -> next = temp1 -> next;
                delete(temp1);
            }
            else
                temp = temp -> next;
        }
        return head;
    }    
};
