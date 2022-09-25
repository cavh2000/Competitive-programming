//https://leetcode.com/problems/populating-next-right-pointers-in-each-node/
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root)
            return root;
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            int s=q.size();
            for(int i=0;i<s;i++){
                Node* curr=q.front();
                q.pop();
                if(i+1!=s)
                    curr->next=q.front();
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
        }
        
        return root;
    }
};
