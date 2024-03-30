
//Function to return a list containing the level order traversal in spiral form.
// https://www.geeksforgeeks.org/problems/level-order-traversal-in-spiral-form/1?page=1&difficulty%5B%5D=0&category%5B%5D=Tree&sortBy=submissions
vector<int> findSpiral(Node *root)
{
    //Your code here
    
    stack <Node*>s1; // right to left
    stack<Node*>s2; //left to right
    
    s1.push(root);
    vector<int>ans;
    
    while(!s1.empty() || !s2.empty()){
        // right to left
        if(!s1.empty()){
            while(!s1.empty()){
                Node *temp= s1.top();
                s1.pop();
                ans.push_back(temp->data);
                
                //right
                if(temp->right){
                    s2.push(temp->right);
                }
                // left
                if(temp->left){
                    s2.push(temp->left);
                }
                
            }
        }
        
        else{ // left to right
            while(!s2.empty()){
                Node *temp= s2.top();
                s2.pop();
                ans.push_back(temp->data);
                // left phle ayega kyoko keft to right h
                if(temp->left){
                    s1.push(temp->left);
                }
                // right
                if(temp->right){
                    s1.push(temp->right);
                }
                
            }
        }
        
        
    }
    
    return ans;
    
    
    
    
    
    
}
