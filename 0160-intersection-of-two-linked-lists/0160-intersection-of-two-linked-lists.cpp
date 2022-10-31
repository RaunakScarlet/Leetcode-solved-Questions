/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ans=nullptr;
        while(headB){
            ListNode* temp=headA;
        while(temp!=headB && temp){
            temp=temp->next;
            
           }
            if(temp==headB) return headB;
            
            headB=headB->next;
        }
        return ans;
    }
};