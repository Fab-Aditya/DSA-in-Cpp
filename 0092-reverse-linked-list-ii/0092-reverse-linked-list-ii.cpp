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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode*dummy=new ListNode(0);
        dummy->next=head;
      
        ListNode*firstptr=dummy;
     
        for(int i=0;i<left-1;i++){
            firstptr=firstptr->next;
        }
       ListNode*tail=firstptr->next;
    ListNode*pre=NULL;
        for(int i=0;i<=(right-left);i++){
         ListNode*nextNode=firstptr->next->next;
         firstptr->next->next=pre;
         pre=firstptr->next;
         firstptr->next=nextNode;

        }
         tail->next=firstptr->next; 
         firstptr->next=pre;       
        return dummy->next;

    }
};