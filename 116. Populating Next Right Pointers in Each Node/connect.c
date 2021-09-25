/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *left;
 *     struct Node *right;
 *     struct Node *next;
 * };
 */

struct Node* connect(struct Node* root) {
    struct Node *current;
    struct Node *nextLevel;
    
	if (!root)
        return (root);
    current = root;
    while (current->left)
    {
        nextLevel = current->left;
        while (current)
        {
            current->left->next = current->right;
            if (!(current->next))
                current->right->next = ((void *)0);
            else
                current->right->next = current->next->left;
            current = current->next;
        }
        current = nextLevel;
    }
    return (root);
}
