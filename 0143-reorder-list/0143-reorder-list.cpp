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

    ListNode* mid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        //ListNode* prev = NULL;

        while(fast != NULL && fast->next != NULL){
            //prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* ans = slow->next;
        slow->next = NULL;

        return ans;
    }

    ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;

        while(curr != NULL) {
            ListNode* next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }
        return prev;
    }

    void reorderList(ListNode* head) {
        ListNode* righthead = mid(head);
        ListNode* rightheadrev = reverse(righthead);

        ListNode* i = head;
        ListNode* j = rightheadrev;

        // ListNode* inext = head->next;
        // ListNode* jnext = rightheadrev->next;

        while(i != NULL && j != NULL){
            ListNode* inext = i->next;
            ListNode* jnext = j->next;

            i->next = j;
            j->next = inext;

            i = inext;
            j = jnext;

        }
        
    }
};