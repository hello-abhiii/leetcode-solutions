/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int n1 = p->val;
        int n2 = q->val;

        if(root == NULL) {
            return NULL;
        }

        if(root->val == n1 || root->val == n2){
            return root;
        }

        TreeNode* leftLCA = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightLCA = lowestCommonAncestor(root->right, p, q);

        if(leftLCA != NULL && rightLCA != NULL) {
            return root;
        }

        return leftLCA == NULL ? rightLCA : leftLCA;

    }
};