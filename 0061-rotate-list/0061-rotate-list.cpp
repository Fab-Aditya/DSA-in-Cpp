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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode*firstptr=head;
        ListNode*secondptr=head;
        ListNode*temp=head;
        int count=0;
        if(head==NULL||head->next==NULL)return head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int n=k%count;
        if(n==0)return head;
        for(int i=0;i<n;i++){
            secondptr=secondptr->next;
        }
        while(secondptr->next!=NULL){
            secondptr=secondptr->next;
            firstptr=firstptr->next;
        }
        ListNode*newNode=firstptr->next;
        firstptr->next=NULL;
        secondptr->next=head;

       return newNode;

    }
};