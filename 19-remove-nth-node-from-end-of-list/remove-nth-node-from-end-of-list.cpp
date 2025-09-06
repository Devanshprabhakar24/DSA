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
        if(head==NULL|| head->next==NULL) return NULL;

        ListNode * temp=head;
        int cnt=0;

        while(temp!=NULL){
            cnt++;
            temp=temp->next;

        }
        if(cnt==n){
            ListNode* newHead=head->next;
            delete(head);
            return newHead;

        }

        temp=head;
        int res=cnt-n;
        while(temp){
        

            res--;
            if(res==0){
                break;

            }
             temp=temp->next;
          
        }
        ListNode* deleteNode=temp->next;
       
        temp->next=temp->next->next;
         delete(deleteNode);

        return head;

        
    }
};