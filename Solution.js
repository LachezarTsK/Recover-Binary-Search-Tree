
// Function TreeNode is in-built in the solution file on leetcode.com. 
// When running the code on the website, do not include this function.
function TreeNode(val, left, right) {
    this.val = (val === undefined ? 0 : val);
    this.left = (left === undefined ? null : left);
    this.right = (right === undefined ? null : right);
}

/**
 * @param {TreeNode} root
 * @return {void} 
 */
var recoverTree = function (root) {
    if (root === undefined || root === null) {
        return;
    }
    this.firstNode = null, this.secondNode = null, this.previousNode = null;
    inOrder(root);
    swap(this.firstNode, this.secondNode);
};

/**
 * @param {TreeNode} root
 * @return {void} 
 */
function  inOrder(root) {
    if (root !== null) {
        inOrder(root.left);
        
        if (this.previousNode !== null && this.previousNode.val > root.val) {
            this.firstNode = root;
            
            if (this.secondNode === null) {
                this.secondNode = this.previousNode;
            } else {
                return;
            }
        }
        
        this.previousNode = root;
        inOrder(root.right);
    }
}

/**
 * @param {TreeNode} firstNode
 * @param {TreeNode} secondNode
 * @return {void} 
 */
function swap(firstNode, secondNode) {
    let temp = firstNode.val;
    firstNode.val = secondNode.val;
    secondNode.val = temp;
}
