/*

Problem Link: https://leetcode.com/problems/palindrome-linked-list/

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
     void Reverse(ListNode **head){
        ListNode *curr = *head;
        ListNode *prev = NULL;
        ListNode* nextn = *head;
        while(nextn){
            nextn = nextn -> next;
            curr -> next = prev;
            prev = curr;
            curr = nextn;
        }
        *head = prev;
       }
    
    bool isPalindrome(ListNode* head) {
        ListNode *temp = head;
        ListNode *h=head;
        
        Reverse(&temp);
        while(head){
            cout<<head->val<<" ";
            head=head->next;
        }
        while(h && temp){
            if(h->val != temp->val)
                return false;
            h=h->next;
            temp=temp->next;
        }
        return true;
    }
};
