/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
//Comment and Upvote
class Solution {
public:
    int findTilt(TreeNode* root) {
        int res = 0;
        solve(root, res);
        return res;
    }
    int solve(TreeNode* root, int& res){
        if(root == NULL){
            return 0;
        }

        int lft = solve(root->left, res);
        int rgt = solve(root->right, res);
        res +=  abs(lft - rgt);
        return root->val + lft + rgt;
    }
};