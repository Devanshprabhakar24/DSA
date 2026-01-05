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

if (head == NULL || head->next == NULL) return head;
            ListNode * temp=head;
            ListNode * front=NULL;
            ListNode * prev=NULL;
            

        while(temp){
            front=temp->next;          //1->2->3->4->5
            temp->next=prev;
            prev=temp;
            temp=front;

        }
        return prev;
        
    }
};