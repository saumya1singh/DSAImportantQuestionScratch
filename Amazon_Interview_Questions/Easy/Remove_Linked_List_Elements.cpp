/*

Problem Link: https://leetcode.com/problems/remove-linked-list-elements/

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
    ListNode* removeElements(ListNode* head, int x) {
        ListNode *temp = head;
        ListNode *prev = NULL;
        while(temp!=NULL){
            if(temp -> val == x){
                if(prev == NULL){
                    temp = temp -> next;
                    head = head ->next;    
                }
                else {
                    prev -> next = temp -> next;  
                    temp = prev -> next;
                }
            }
            else{
            prev = temp;
            temp = temp -> next; 
          }
        }
        return head;
    }
};
