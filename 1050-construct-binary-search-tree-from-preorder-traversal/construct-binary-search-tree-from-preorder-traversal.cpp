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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return buildpre(preorder, 0,preorder.size()-1);
    }

    TreeNode* buildpre(vector<int>& preorder, int ps, int pe)
    { int pos;
        if(ps>pe) return NULL;
        TreeNode* node= new TreeNode(preorder[ps]);
        for(int i=ps+1;i<=pe;i++)
        {
            if(preorder[i]>preorder[ps]) 
                {pos=i;
                break;
                }
                
        }
        node->left=buildpre(preorder,ps+1 ,pos-1 );
        node->right=buildpre(preorder,pos ,pe );
        return node;
    }

};