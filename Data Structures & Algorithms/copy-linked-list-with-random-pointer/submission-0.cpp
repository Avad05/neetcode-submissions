/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == nullptr){
            return nullptr;
        }      
        unordered_map<Node*, Node*> hsh;
        Node* p = head;
        
        while( p!= nullptr){
            hsh[p]=new Node(p->val);
            p = p->next;

        }
        p=head;
        while( p != nullptr){
            hsh[p]->next = hsh[p->next];
            hsh[p]->random = hsh[p->random];
            p=p->next;
        }
        return hsh[head];
    }
};
