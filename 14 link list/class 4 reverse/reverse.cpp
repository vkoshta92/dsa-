//https://leetcode.com/problems/reverse-linked-list/
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector <int> myArr;
        ListNode *myTempNode=head;
        while(myTempNode!=NULL){
            myArr.push_back(myTempNode->val);
            myTempNode=myTempNode->next;
        };
        //firtly we reverse an array then put every value in a node
        //now we got array not we have to traverse
        int i= myArr.size()-1;
        myTempNode=head;
        while(myTempNode){
        myTempNode->val=myArr[i];
        i--;
        myTempNode=myTempNode->next;
        }
        return head;
    }
};