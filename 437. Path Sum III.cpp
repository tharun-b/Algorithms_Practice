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
    int func(TreeNode* root, int sum, int cur, int flag)
    {
        if(!root) return 0; 
        int ct =0; 
        
        if(cur == root->val) 
        {
        ct++; 
           // cout<<root->val<<", "<<(root)<<endl; 
        }
        
        ct+=  func(root->left, sum, (cur -root->val), 0);
        ct+=  func(root->right, sum, (cur -root->val), 0);
        
       return ct; 
        
    }
    
    int dfs(TreeNode* root, int sum)
    {
        if(!root) return 0;
        int ct =0; 
        ct+= dfs(root->left,sum);
        ct+= dfs(root->right,sum);
        ct+= func(root,sum,sum,0);
        return ct; 
        
        
    }
    int pathSum(TreeNode* root, int sum) {
        
        
        return dfs(root, sum) ; 
        
    }
};