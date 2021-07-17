/*

Problem Link: https://leetcode.com/problems/reorder-list/

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
void Reverse(ListNode **head){
    ListNode *currnode = *head;
    ListNode *nextnode = *head;
    ListNode *prevnode = NULL;
    while(nextnode){
        nextnode = nextnode -> next;
        currnode -> next = prevnode;
        prevnode = currnode;
        currnode = nextnode;
    }
    *head = prevnode;
}

class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        if(head == NULL)
            return;
        while(fast -> next && fast -> next -> next){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        ListNode *head1 = head;
        ListNode *head2 = slow -> next;
        slow -> next = NULL;
        Reverse(&head2);
        head = new ListNode(0);
        ListNode *curr = head;
        while(head1 || head2){
            if(head1){
                curr -> next = head1;
                curr = curr -> next;
                head1 = head1 -> next;
            }
            if(head2){
                curr -> next = head2;
                curr = curr -> next;
                head2 = head2 -> next;
            }
        }
        head = head -> next;
    }
};
