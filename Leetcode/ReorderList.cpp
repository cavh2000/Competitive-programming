//https://leetcode.com/problems/reorder-list/description/
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode *fast=head;
        ListNode *slow=head;

        while(fast!=nullptr && fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
        }
        fast=slow;
        slow=slow->next;
        fast->next=nullptr;

        stack<ListNode*> right;
        while(slow!=nullptr){
            right.push(slow);
            slow=slow->next;
        }

        ListNode *left=head;
        ListNode *aux;
       
        while(!right.empty()){
            right.top()->next=left->next;
            left->next=right.top();
            left=right.top()->next;
            right.pop();
        }
    }
};
