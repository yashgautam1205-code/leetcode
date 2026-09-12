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
class Solution {
public:
    int minDepth(TreeNode* root) {

        if (root == NULL)
            return 0;

        queue<TreeNode*> q;

        q.push(root);
        q.push(NULL);

        int count = 1;

        while (!q.empty()) {

            TreeNode* r = q.front();
            q.pop();

            if (r == NULL) {

                count++;

                if (!q.empty())
                    q.push(NULL);

            } else {

                if (r->left == NULL && r->right == NULL)
                    return count;

                if (r->left != NULL)
                    q.push(r->left);

                if (r->right != NULL)
                    q.push(r->right);
            }
        }

        return count;
    }
};