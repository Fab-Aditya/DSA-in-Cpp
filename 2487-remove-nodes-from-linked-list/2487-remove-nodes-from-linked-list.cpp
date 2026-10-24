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
    ListNode*reverse(ListNode*dummy){
        ListNode*prev=NULL;
        ListNode*curr=dummy;
        while(curr!=NULL){
            ListNode*frwd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=frwd;
        }
        return prev;

    }
    ListNode* removeNodes(ListNode* head) {
        ListNode*temp=head;
        ListNode*dummy= new ListNode(0);
        stack<ListNode*>st;
        while(temp!=NULL){
            while(!st.empty() && temp->val>st.top()->val) st.pop();
                   st.push(temp);
                   temp=temp->next;    
        }
        ListNode*remp=dummy;
        while(st.size()>0){
          ListNode*top=st.top();
          st.pop();
          remp->next=top;
          remp=top;
        }
        remp->next=NULL;
        return reverse(dummy->next);
    }
};