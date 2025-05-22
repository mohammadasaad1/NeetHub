/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int mn = 10000;

    public void helper(TreeNode root, int here) {
        if(root == null) return; 
        if ((root.left == null && root.right == null)) {
            mn = Math.min(mn, here);
            return;
        }

        
        helper(root.left, here + 1);

        helper(root.right, here + 1);
    }

    public int minDepth(TreeNode root) {
        if (root == null)
            return 0;
        helper(root, 0);
        return mn + 1;
    }
}