// https://leetcode.com/problems/reverse-linked-list/
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
      ListNode *current= head;
      ListNode *prev=NULL;
      ListNode *future=NULL;
      while(current!=NULL){
          future=current->next;
          current->next=prev; // address
          prev=current; // value insert
          current=future;
      }
     head=prev;
     return head;
    }
   
};





// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//  ListNode *curr=head,*prev=NULL,*fut=NULL;

//  while(curr){
//      fut=curr->next;
//      curr->next=prev;
//      prev=curr;
//      curr=fut;
//  }
//  head=prev;
//  return head;
//     }
   
// };