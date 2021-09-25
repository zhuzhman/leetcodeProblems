/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* mergeTrees(struct TreeNode* root1, struct TreeNode* root2){
    struct TreeNode *result;
    
    if (root1 == (void *)0)
        return (root2);
    if (root2 == (void *)0)
        return (root1);
    result = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    result->val = root1->val + root2->val;
    result->left = mergeTrees(root1->left, root2->left);
    result->right = mergeTrees(root1->right, root2->right);
    return (result);
}
