// https://www.geeksforgeeks.org/problems/largest-value-in-each-level/1?page=4&difficulty%5B%5D=0&category%5B%5D=Tree&sortBy=submissions

#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

vector<int> largestValuesInLevels(TreeNode* root) {
    vector<int> largestValues;
    if (root == nullptr) return largestValues;

    queue<TreeNode*> levelQueue;
    levelQueue.push(root);

    while (!levelQueue.empty()) {
        int levelSize = levelQueue.size();
        int levelMax = INT_MIN;

        for (int i = 0; i < levelSize; ++i) {
            TreeNode* currentNode = levelQueue.front();
            levelQueue.pop();
            levelMax = max(levelMax, currentNode->val);

            if (currentNode->left) levelQueue.push(currentNode->left);
            if (currentNode->right) levelQueue.push(currentNode->right);
        }

        largestValues.push_back(levelMax);
    }

    return largestValues;
}

int main() {
    // Example usage
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(3);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(3);
    root->right->right = new TreeNode(9);

    vector<int> largestValues = largestValuesInLevels(root);
    cout << "Largest value in each level: ";
    for (int val : largestValues) {
        cout << val << " ";
    }
    cout << endl;

    // Clean up
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right->right;
    delete root->right;
    delete root;

    return 0;
}
