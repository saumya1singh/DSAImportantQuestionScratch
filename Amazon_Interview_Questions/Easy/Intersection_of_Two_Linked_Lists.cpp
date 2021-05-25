/*

Problem Link: https://leetcode.com/problems/intersection-of-two-linked-lists/

*/


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
    ListNode *getIntersectionNode(ListNode *h1, ListNode *h2) {
        int l1=0,l2=0;
        ListNode *p1=h1,*p2 = h2;
        while(p1!=NULL){
            p1 = p1->next;
            l1++;
        }
        while(p2!=NULL){
            p2 = p2->next;
            l2++;
        }
        p1=h1;
        p2=h2;
        if(l1>l2){
            int diff = l1-l2;
            for(int i=0; i<diff; i++){
                p1=p1->next;
            }
        }
        else{
            int diff = l2-l1;
            for(int i=0; i<diff; i++){
                p2=p2->next;
            }
        }
        while(p1!=p2){
            p1=p1->next;
            p2=p2->next;
        }
        return p1;
    }
};
