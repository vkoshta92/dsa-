// https://www.geeksforgeeks.org/problems/delete-without-head-pointer/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

// del vla man  lo delee krna h.
class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
   Node *temp=del->next;
   del->data=temp->data;
   del->next=temp->next;
   delete temp;
    }

};