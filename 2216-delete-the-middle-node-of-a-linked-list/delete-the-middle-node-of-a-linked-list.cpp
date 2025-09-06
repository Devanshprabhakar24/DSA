class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) return nullptr;

        ListNode *dummy = new ListNode(0, head);
        ListNode *slow = dummy, *fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // unlink middle node (no delete!)
        slow->next = slow->next->next;

        return head;
    }
};
