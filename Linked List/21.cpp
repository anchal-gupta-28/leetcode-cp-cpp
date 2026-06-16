#include<iostream>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* c1 = list1;
        ListNode* c2 = list2;

        ListNode* head = new ListNode(-1);
        ListNode* temp = head;
        while(c1 && c2){
            if(c1->val < c2->val){
                ListNode* curr = new ListNode(c1->val);
                temp->next = curr;
                c1=c1->next;
            }else{
                ListNode* curr = new ListNode(c2->val);
                temp->next = curr;
                c2=c2->next;
            }
            temp=temp->next;
        }

        while(c1){
            ListNode* curr = new ListNode(c1->val);
            temp->next = curr;
            temp=temp->next;
            c1=c1->next;
        }

        while(c2){
            ListNode* curr = new ListNode(c2->val);
            temp->next = curr;
            temp=temp->next;
            c2=c2->next;
        }
        return head->next;
    }

    void printList(ListNode* head) {
    while(head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
    }

    int main(){
        // 1 2 4 
        ListNode* l1 = new ListNode(1);
        l1->next = new ListNode(2);
        l1->next->next = new ListNode(4);

        // 1 3 4
        ListNode * l2 = new ListNode(1);
        l2->next= new ListNode(3);
        l2->next->next= new ListNode(4);

        ListNode* result = mergeTwoLists(l1, l2);

        cout << "Merged List: ";
        printList(result);
        return 0;
    }
