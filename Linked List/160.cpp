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
        ListNode* c1=headA;
        ListNode* c2=headB;
        unordered_set<ListNode*>st;

        while(c1){
            st.insert(c1);
            c1=c1->next;
        }

        while(c2){
            if(st.find(c2)!=st.end()) return c2;
            c2=c2->next;
        }

        return NULL;
        
    }
};