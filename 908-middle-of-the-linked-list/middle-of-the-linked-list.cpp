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
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        int n = 0;

        ListNode* temp = head;
       
        while(head!=NULL)
        {
            n++;
            head = head->next;
        }

        n = n/2 + 1;

        while(n>1)
        {
            temp = temp->next;
            n--;
        }

        return temp;
    }
};