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


 //https://leetcode.com/problems/add-two-numbers/
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy= new ListNode(0);
        ListNode* l3= dummy;
        int carry= 0;
        
        while(l1!=NULL || l2!=NULL || carry){
            int l1val= (l1!=NULL)? l1->val: 0;
            int l2val= (l2!=NULL)? l2->val: 0;
            int currentSum= l1val+ l2val+ carry;
            carry= currentSum/10;
            int last_digit= currentSum%10;
            
            ListNode* newNode= new ListNode(last_digit);
            l3->next= newNode;
            
            if(l1!=NULL){
                l1= l1->next;
            }
            if(l2!=NULL){
                l2= l2->next;
            }
            l3= newNode;
        }
        return dummy->next;
    }    
};

// Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)

    