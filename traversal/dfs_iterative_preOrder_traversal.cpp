/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        if(root == NULL) return result;
        
        TreeNode* temp = root;
        stack<TreeNode*> s;
        
        s.push(temp);
        while(!s.empty()){
            temp = s.top();
            s.pop();
            
            result.push_back(temp->val);
            if(temp->right){
                s.push(temp->right);
            }
            if(temp->left){
                s.push(temp->left);
            }
        }
        return result;
    }
};