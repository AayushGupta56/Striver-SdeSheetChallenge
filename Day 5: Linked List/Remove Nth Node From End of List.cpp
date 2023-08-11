class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*dummy=new ListNode(-1);dummy->next=head;
        ListNode*fast=dummy;ListNode*slow =dummy;
       while(n--){
           fast=fast->next;
       }   
        while(fast->next){
            fast=fast->next;
            slow=slow->next;
        }
        ListNode*temp=slow->next->next;
        slow->next=temp;
        return dummy->next;
    }
    };
