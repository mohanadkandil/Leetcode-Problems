class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> answer;
        
        if(root==NULL)
            return answer;
        
        stack<TreeNode*>s;
        
        s.push(root);
        
        while(!s.empty()){
            
            TreeNode* p = s.top();
            s.pop();
            answer.push_back(p->val);
            if(p->right != NULL)
                s.push(p->right);
            if(p->left != NULL)
                s.push(p->left);
            
        }
        return answer;
    }
};
