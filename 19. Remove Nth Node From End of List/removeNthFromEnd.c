/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    int number;
    struct ListNode *beforeHead;
    struct ListNode *tortoise;
    struct ListNode *hare;
    
    beforeHead = (struct ListNode *)malloc(sizeof(struct ListNode));
    beforeHead->next = head;
    tortoise = beforeHead;
    hare = head;
    while (n > 0)
    {
        hare = hare->next;
        n--;
    }
    while (hare)
    {
        tortoise = tortoise->next;
        hare = hare->next;
    }
    tortoise->next = tortoise->next->next;
    return (beforeHead->next);
}
