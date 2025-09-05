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
    bool hasCycle(ListNode *head) {
        map<ListNode*, bool> visited;  // store node address, not value
        ListNode* temp = head;

        while(temp){
            if(visited[temp]){   // if this node was already visited → cycle
                return true;
            }
            visited[temp] = true;
            temp = temp->next;
        }
        return false; // reached null → no cycle
    }
};
