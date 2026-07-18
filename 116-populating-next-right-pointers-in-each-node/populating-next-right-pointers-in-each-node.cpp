/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return NULL;
        queue<pair<Node*,int>> q;
        q.push({root,0});

        Node* prev=NULL;
        int prevlevel=0;
        while(q.size()>0)
        {
            Node* curr=q.front().first;
            int level=q.front().second;
            if(prevlevel!=level) prev=NULL;
            q.pop();
            
            if(curr->left!=NULL)
            {
                q.push({curr->left,level+1});
            }
                
            if(curr->right!=NULL)
            {
                q.push({curr->right,level+1});
            }

            if(prev!=NULL)
            {
                prev->next=curr;
            }
            prev=curr;
            prevlevel=level;
        }
        return root;
    }
};