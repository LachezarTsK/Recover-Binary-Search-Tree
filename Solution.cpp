
using namespace std;

// Struct TreeNode is in-built in the solution file on leetcode.com. 
// When running the code on the website, do not include this struct.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
    
    TreeNode* firstNode{};
    TreeNode* secondNode{};
    TreeNode* previousNode{};

public:
    void recoverTree(TreeNode* root) {
        if (root == nullptr) {
            return;
        }
        inOrder(root);
        swap(firstNode, secondNode);
    }

private:
    void inOrder(TreeNode* root) {
        if (root != nullptr) {
            inOrder(root->left);

            if (previousNode != nullptr && previousNode->val > root->val) {
                firstNode = root;

                if (secondNode == nullptr) {
                    secondNode = previousNode;
                } else {
                    return;
                }
            }

            previousNode = root;
            inOrder(root->right);
        }
    }

    void swap(TreeNode* firstNode, TreeNode* secondNode) {
        int temp = firstNode->val;
        firstNode->val = secondNode->val;
        secondNode->val = temp;
    }
};
