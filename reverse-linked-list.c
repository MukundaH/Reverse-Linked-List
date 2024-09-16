/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* cur(struct ListNode* head, struct ListNode** h){
    if(head->next!=NULL){
        struct ListNode* n = cur(head->next, h);
        n->next=head;
        return head;
    }
    *h=head;
    return head;
}
struct ListNode* reverseList(struct ListNode* head) {
    if(head==NULL){return head;}
    struct ListNode* h;
    head = cur(head, &h);
    head->next=NULL;
    return h;

}
