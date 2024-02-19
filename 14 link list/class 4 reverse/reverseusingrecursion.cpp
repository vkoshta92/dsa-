//using recursion

class Solution {
public:
ListNode * Reverse(ListNode *curr,ListNode *prev){
    if(curr==NULL){
return prev;
    }
// ListNode *fut=NULL;
// fut=curr->next;
// or
ListNode *fut=curr->next;
curr->next=prev;
return Reverse(fut,curr);


}


    ListNode* reverseList(ListNode* head) {
return Reverse(head,NULL);


    }
   
};
