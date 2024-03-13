
// https://www.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1?page=1&difficulty%5B%5D=0&category%5B%5D=Tree&sortBy=submissions
class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        
        // ya dono null ho
        if(!r1 && !r2)
        return 1;
        
        // ya ak null ho ak ki value ho
        if((!r1 && r2)|| (r1 && !r2))
        return 0;
        //Your Code here
        //  ya data barar nahi ho
        if(r1->data!=r2->data)
        return 0;
        // then function dono  side se cal kra lenge
        return isIdentical(r1->left,r2->left) && isIdentical(r1->right,r2->right);
        
        
        
    }
};