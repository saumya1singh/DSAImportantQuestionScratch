/*

Problem Link: https://leetcode.com/problems/odd-even-linked-list/

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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head -> next == NULL)
            return head;
        ListNode *odd = head;
        ListNode *even = head -> next;
        ListNode *oddhead = head;
        ListNode *evenhead = head -> next;
        
        while(odd -> next && even -> next){
            odd -> next = even -> next;
            odd = odd -> next;
            if(odd -> next){
                even -> next = odd -> next;
                even = even -> next;
            }
        }
        odd -> next = evenhead;
        even -> next = NULL;
        return oddhead;
    }
};
