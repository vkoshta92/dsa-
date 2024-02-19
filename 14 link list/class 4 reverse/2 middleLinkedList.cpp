// https://leetcode.com/problems/middle-of-the-linked-list/

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
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         int count=0;
//         // total no of node
//         ListNode *temp=head;
//         while(temp){
// count++;
// temp=temp->next;
//         };
//         count/=2;
//         //this number i have tae from start
// temp=head;
// while(count--){
//     temp=temp->next;
    
// }
//     return temp;    
//     }
// };


// optimising way
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
    //   while(fastNode && fastNode->next){

  ListNode *slowNode=head;
  ListNode *fastNode=head; // ye soble seed se 2 kdam agee bdgea and us time slow vale ko prnt kra lenge
  while(fastNode!=NULL && fastNode->next!=NULL){
      slowNode= slowNode->next;
      fastNode=fastNode->next->next;
  }
  return slowNode;
    }
};