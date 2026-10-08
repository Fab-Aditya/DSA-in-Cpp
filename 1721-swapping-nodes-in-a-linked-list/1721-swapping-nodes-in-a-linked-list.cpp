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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode*temp=head;
        ListNode*first=head;
        ListNode*second=head;
      
        int count=0;
       for(int i=0;i<k-1;i++){
            temp=temp->next;
        }
        while(first!=NULL){
            first=first->next;
            count++;
        }
        int n=count-k;
        for(int i=0;i<n;i++){
            second=second->next;
        }
        int p =second->val;
        second->val=temp->val;
        temp->val = p;

        return head;
        
    }
};