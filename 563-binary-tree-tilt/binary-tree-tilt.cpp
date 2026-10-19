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
    int tilt=0;
    int findTilt(TreeNode* root) {
        ans(root);
        return tilt;
    }
    int ans(TreeNode* root){
        if(root==NULL)
            return 0;
        
        int left=ans(root->left);
        int right=ans(root->right);
        
        tilt+=abs(left-right);
        return root->val+left+right; 
    }
};