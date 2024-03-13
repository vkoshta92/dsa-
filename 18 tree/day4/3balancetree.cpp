// -1<=height(l)-height(r)<=1
//  node ke left and  right ki height ka dif -1 0 ya 1 hona chiye tbhi balance hai
// unbalnce karne ke liye bas ak node chiye isliye starting me 1 leng balance man  lengr bhi ak bhi  0 mila unbalnce hai

// https://www.geeksforgeeks.org/problems/check-for-balanced-tree/1?page=1&difficulty%5B%5D=0&category%5B%5D=Tree&sortBy=submissions
class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node* root, bool& valid){
        if(!root)
            return 0;
        
        
        int left = height(root->left,valid);
        
        if(valid){
                   int right= height(root->right,valid);
        
        if(abs(left-right)>1)
            valid=false;
        
        return 1+ max(left,right); 
        }
        return -1;

    }
    
    bool isBalanced(Node *root)
    {
        //  Your Code here
        // -1<=height(l)-height(r)<=1
        // man  liya valid true hai
        bool valid=true;
        height(root,valid);
        return valid;
        
    }
};


//{ Driver Code Starts.

/* Driver program to test size function*/

  

int main() {

   
    int t;
    scanf("%d ", &t);
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);
        Solution ob;
        cout << ob.isBalanced(root) << endl;
    }
    return 0;
}

// } Driver Code Ends