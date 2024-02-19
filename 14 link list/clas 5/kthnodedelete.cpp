// https://www.geeksforgeeks.org/problems/remove-every-kth-node/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab





Node* deleteK(Node *head,int K)
{
 if(K==1){
     return NULL;
 }
 Node *curr= head,*prev=NULL;
 int count=1;
 while(curr!=NULL){
    
 if(count==K){
     prev->next= curr->next;
     delete curr;
     curr= prev->next;
     count=1; // kyoki hr kty node lete krm ah reset karna hoga.
 }
 else{
   prev= curr;
   curr= curr->next;
   count++;

 } 
 }
 return head;
}
