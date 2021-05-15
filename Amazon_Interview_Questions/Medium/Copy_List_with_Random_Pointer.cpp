/*

Problem Link: https://leetcode.com/problems/copy-list-with-random-pointer/

*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
         class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL)
            return head;
          Node *temp = head;
     while(temp != NULL){
         Node *n = new Node(temp -> val);
         n -> next = temp -> next;
         temp -> next = n;
         temp = temp -> next -> next;
     }
     
     temp = head;
     while(temp != NULL){
         if(temp -> random != NULL)
            temp -> next -> random = temp -> random -> next;
         else
            temp -> next -> random = NULL;
         temp = temp -> next -> next;
     }
     
     Node *original = head;
     Node *copy = head -> next;
     Node *d = copy;
     
     while(original != NULL && copy!= NULL){
         original -> next = original -> next -> next;
         
         if(copy -> next != NULL)
            copy -> next = copy -> next -> next;
            
         original = original -> next;
         
         if(copy -> next != NULL)
            copy = copy -> next;
     }
     return d;
    }
};
