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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
   /*     ListNode*ptr=head;
        int count=0;
        while(ptr!=NULL){
            count++;
            ptr=ptr->next;
        }
        int m=count-n;
        ptr=head;
        if(n==count){
            head=head->next;
            delete(ptr);
        }
        while(m!=0){
            m--;
            ptr=ptr->next;
        }   */
        ListNode*ptr=new ListNode();
        ptr->next=head;
        ListNode*slow=ptr;
        ListNode*fast=ptr;
        for(int i=1;i<=n;i++){
            fast=fast->next;
        }
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        
        return ptr->next;
    }
};
