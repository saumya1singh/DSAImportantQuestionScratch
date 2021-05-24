/*

Problem Link: https://leetcode.com/problems/partition-list/

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
    ListNode* partition(ListNode* head, int x) {
      ListNode *small_head = new ListNode(0);
      ListNode *small = small_head;
      ListNode *high_head = new ListNode(0);
      ListNode *high = high_head;
      while(head){
        if(head -> val < x){
          small -> next = head;
          small = small -> next;
        }
        else{
          high -> next = head;
          high = high -> next;
        }
        head = head -> next;
      }
      high -> next = NULL;
      small -> next = high_head -> next;
      return small_head-> next;
       } 
};
