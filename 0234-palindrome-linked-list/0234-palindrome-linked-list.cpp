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

ListNode* reverse(ListNode * slow){
    ListNode* pre=NULL;
    ListNode * next=NULL;
    while(slow){
        next=slow->next;
        slow->next=pre;
        pre=slow;
        slow=next;
    }
    return pre;
}
    bool isPalindrome(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return true;

        ListNode* slow=head;
        ListNode *fast=head;

        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }

       slow->next= reverse(slow->next);

        slow=slow->next;
        while( head && slow){
            if(head->val!=slow->val) return false;
            slow=slow->next;
            head=head->next;

        }

return true;

    }
};