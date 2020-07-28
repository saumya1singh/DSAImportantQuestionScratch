/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


 //https://leetcode.com/problems/intersection-of-two-linked-lists/
class Solution {
    
    int length(ListNode *head){
        int l=1;
        while(head!=NULL){
            l++;
            head= head->next;
        }
        return l;
    }
    
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(headA==NULL ||  headB==NULL){
            return NULL;
        }
        int lenA, lenB;
        lenA= length(headA);
        lenB= length(headB);
        
        ListNode *larger;
        ListNode *smaller;
        
        if(lenA>lenB){
            larger= headA;
            smaller= headB;
        }else{
            larger= headB;
            smaller= headA;
        }
        
        int d= lenA-lenB;
        if(d < 0)  //find absolute value
	    {
		d = d * (-1);
	    }
        
        int c=1;
        while(c<=d){
            c++;
            larger= larger->next;
        }
        
        while(smaller!=larger){
            larger= larger->next;
            smaller= smaller->next;
        }
        return larger;
    }
};