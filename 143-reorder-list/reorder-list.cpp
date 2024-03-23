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
    void reorderList(ListNode* head) {

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    if (!head || !head->next) {
        return;
    }

    
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    
    ListNode* prev = nullptr;
    ListNode* curr = slow->next;
    while (curr) {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    slow->next = nullptr;

    
    ListNode* p1 = head;
    ListNode* p2 = prev;
    while (p1 && p2) {
        ListNode* next1 = p1->next;
        ListNode* next2 = p2->next;
        p1->next = p2;
        p2->next = next1;
        p1 = next1;
        p2 = next2;
    }
}
};