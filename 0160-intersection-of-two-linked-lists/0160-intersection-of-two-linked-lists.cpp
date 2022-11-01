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
      /*  
        
        O(N*M)
        
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
        
        */
        
        
        
        
        /*
        
        
        O(N+M)
        
        
        unordered_map<ListNode*,int>umap;
        while(headA){
            umap[headA]++;
            headA=headA->next;
        }
        while(headB){
            if(umap.find(headB)!=umap.end()) return headB;
            else{
                headB=headB->next;
            }
        }
        return nullptr;
        
        */
        
        
        
        
        
        
        
        
        /*
       ListNode* tempA=headA;
        int countA=0;
        while(tempA){
            tempA=tempA->next;
            countA++;
        }
        
       ListNode* tempB=headB;
        int countB=0;
        while(tempB){
            tempB=tempB->next;
            countB++;
        }
        if(countA-countB>=0){
            int x=countA-countB;
            while(x--){
                headA=headA->next;
            }
        }else{
             int x=-(countA-countB);
             while(x--){
                headB=headB->next;
            }
        }
        while(headA!=headB){
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
        
        
*/
        
        
//         while(headA!=headB){
//             if(headA==nullptr){
//                 headA=headB;
//             } 
//             else{
//                 headA=headA->next;
//             } 
            
//             if(headB==nullptr) {
//                 headB=headA;
//             }
//             else {
//                 headB=headB->next;
//             }
//         }
//         return headA;
        
        if(headA==nullptr || headB==nullptr) return nullptr;
        
        ListNode* a=headA;
        ListNode* b=headB;
        while(a!=b){
            a=a==nullptr?headB:a->next;
            b=b==nullptr?headA:b->next;
        }
        
        
        return a;
    }
};