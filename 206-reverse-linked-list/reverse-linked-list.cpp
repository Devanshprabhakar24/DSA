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
    ListNode* reverseList(ListNode* head) {
        stack<ListNode* > s;
        ListNode * temp=head;

        while(temp!=NULL){
            s.push(temp);
            temp=temp->next;
            }
            if (s.empty()) return nullptr;
            ListNode *head1=new ListNode(s.top()->val);
            s.pop();
            ListNode*curr=head1;

            while(!s.empty()){
                curr->next=new ListNode(s.top()->val);
                s.pop();
                curr=curr->next;

            }
            return head1;
            


        
    }
};