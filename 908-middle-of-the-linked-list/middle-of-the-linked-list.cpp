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
    ListNode* middleNode(ListNode* head) {
        if(head==nullptr) return NULL;
        if(head->next==nullptr) return head;
        int cnt=0;
        ListNode *temp=head;

        while(temp){
            cnt++;
            temp=temp->next;

        }
        int half=cnt/2;
        temp=head;
        while(half>0){
            temp=temp->next;
            
            half--;

        }
        return temp;
    }

        
    
};