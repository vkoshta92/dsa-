
// https://www.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

/*You are required to complete below method*/
// Node* deleteNode(Node *head,int x)
// {
//   if(x==1){
//       Node *temp=head;
//       head=head->next;
//       delete temp;
//         return head;
//   }
  
//   x--;
//   Node *curr=head;
//   Node *prev= NULL;
//    while(x--){
//        prev=curr;
//        curr=curr->next;
//    }
   
//     prev->next=curr->next;
//     delete curr;
  
//   return head;
  
  
// }

// /using recursion

Node * deleteNode(Node *curr,int x){
    if(x==1){
        Node *temp=curr->next;
        delete curr;
        return temp;
    }
    
    curr->next=deleteNode(curr->next,x-1);
    return curr;
}





