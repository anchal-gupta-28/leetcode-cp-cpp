#include<iostream>
using namespace std;

//  Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        ListNode* temp = head;
        while(temp){
            size++;
            temp=temp->next;
        }
        if(n>size) return head; 
        if(n==size){
            head = head->next;
            return head;
        }
        if(size==1 && n==1) return NULL;
        int cnt=0;
        temp=head;
        while(cnt!=(size-n-1 ) && temp){
            cnt++;
            temp=temp->next;
        }
        ListNode* prev = temp;
        ListNode* curr= temp->next;
        
        if(curr && curr->next!=NULL)  prev->next = curr->next;
        else prev->next=NULL;
        delete(curr);

        return head;
    }

    
