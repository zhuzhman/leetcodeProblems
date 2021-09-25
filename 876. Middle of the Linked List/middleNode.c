/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head){
    struct ListNode *tortoise;
    struct ListNode *hare;
    
    tortoise = head;
    hare = head;
    while (hare && hare->next)
    {
        tortoise = tortoise->next;
        hare = hare->next->next;
    }
    return (tortoise);
}
