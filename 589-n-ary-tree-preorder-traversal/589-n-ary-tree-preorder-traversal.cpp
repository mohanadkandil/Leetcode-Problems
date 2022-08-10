/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        
        // n l r - Pre order
        stack<Node*> st;
        vector<int> output;
        
        st.push(root);
        
        if (root == NULL) return output;
        
        while(!st.empty()) {
            auto element = st.top();
            st.pop();
            output.push_back(element->val);
            for (int i = element->children.size() - 1; i >= 0; i--) {
                st.push(element->children[i]);
            }
        }
        
        return output;
        
        
    }
};