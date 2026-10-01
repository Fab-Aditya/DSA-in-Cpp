/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
           if(head==NULL || head->next==NULL)return head;
        ListNode*firstptr=head;
        ListNode*secondptr=head->next;
        ListNode*newNode=secondptr;
     
        while(secondptr!=NULL&&secondptr->next!=NULL){
            firstptr->next=secondptr->next;
            firstptr=firstptr->next;
            secondptr->next=firstptr->next;
            secondptr=secondptr->next;
        }
        firstptr->next=newNode;
        return head;
    }
};