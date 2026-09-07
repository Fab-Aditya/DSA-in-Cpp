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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*dummy=new ListNode(0);
        dummy->next=head;
        ListNode*curr=dummy;
        ListNode*fast=head;
        while(fast!=NULL ){
            if(fast->next!=NULL && fast->val==fast->next->val){
                while(fast->next!=NULL && fast->val==fast->next->val){
                    fast=fast->next;
                }
                curr->next=fast->next;
                fast=fast->next;
            }
            else{
                curr=fast;
                fast=fast->next;
            }
        }
       return dummy->next; 
    }
};