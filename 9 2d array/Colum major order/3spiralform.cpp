// https://leetcode.com/problems/spiral-matrix/submissions/
//54
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if (matrix.empty()) {
            return ans; // Handle the case of an empty matrix
        }
        int row = matrix.size(), col = matrix[0].size();
        int top = 0, bottom = row - 1, left = 0, right = col - 1;
        
        while (left <= right && top <= bottom) {
            // Print top
            for (int j = left; j <= right; j++) {
                ans.push_back(matrix[top][j]);
            }
            top++; // Move top down
            
            // Print right
            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--; // Move right to the left
            
            // Print bottom (if there's still a row to print)
            if (top <= bottom) {
                for (int j = right; j >= left; j--) {
                    ans.push_back(matrix[bottom][j]);
                }
                bottom--; // Move bottom up
            }
            // single array ke edge case ko manage krne ke liye
            // Print left (if there's still a column to print)
            // single array ke edge case ko manage krne ke liye
// ye condition tb bhi chl ja rhi thi isliye alaag se edge case manage krna hoga kyoki hm logh hr bar -- ya ++ krte h.
           // print left
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++; // Move left to the right
            }
        }
        
        return ans;
    }
};


