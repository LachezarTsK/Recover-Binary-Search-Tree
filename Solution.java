
class Solution {

    private TreeNode firstNode, secondNode, previousNode;

    public void recoverTree(TreeNode root) {
        if (root == null) {
            return;
        }
        inOrder(root);
        swap(firstNode, secondNode);
    }

    private void inOrder(TreeNode root) {
        if (root != null) {
            inOrder(root.left);

            if (previousNode != null && previousNode.val > root.val) {
                firstNode = root;

                if (secondNode == null) {
                    secondNode = previousNode;
                } else {
                    return;
                }
            }

            previousNode = root;
            inOrder(root.right);
        }
    }

    private void swap(TreeNode firstNode, TreeNode secondNode) {
        int temp = firstNode.val;
        firstNode.val = secondNode.val;
        secondNode.val = temp;
    }
}

// Class TreeNode is in-built in the solution file on leetcode.com. 
// When running the code on the website, do not include this class.
class TreeNode {

    int val;
    TreeNode left;
    TreeNode right;

    TreeNode() {}

    TreeNode(int val) {
        this.val = val;
    }

    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}
