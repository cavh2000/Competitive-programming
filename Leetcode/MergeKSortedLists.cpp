//https://leetcode.com/problems/merge-k-sorted-lists/description/
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *aux;
        priority_queue<pair<int,ListNode*>> pq;

        for(int i=0;i<lists.size();i++){
            aux=lists[i];
            while(aux){
                pq.push({aux->val * - 1, aux});
                aux=aux->next;
            }
        }

        ListNode *head = new ListNode(0);
        aux=head;
        while(!pq.empty()){
            aux->next=pq.top().second;
            pq.pop();
            aux=aux->next;
            aux->next = nullptr;
        }

        return head->next;
    }
};
