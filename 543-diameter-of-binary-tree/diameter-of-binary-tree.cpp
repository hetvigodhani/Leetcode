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

    int h(TreeNode* root)
    {
        if(!root)   return 0;
        return 1+max(h(root->left),h(root->right));
    }
    int ans=0;
    int dia(TreeNode* root)
    {
        if(!root)   return 0;
        int lh=h(root->left);
        int rh=h(root->right);

        int ld=dia(root->left);
        int rd=dia(root->right);

        return max(max(ld,rd),lh+rh+1);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        return dia(root)-1;
    }
};