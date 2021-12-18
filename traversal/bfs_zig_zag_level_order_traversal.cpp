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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(!root) return v;
        
        vector<int> level;
        int noActualPush = 0;
        bool switchLevel = true;
        queue<TreeNode*> q;
           
        q.push(root);
        // pushing NULL in queue after first level push
        q.push(NULL);
        
        while(!q.empty()){
            // pushing NULL in q if we encounter NULL
            if(q.front() != NULL){
                if(q.front()->left){
                    q.push(q.front()->left);
                }
                if(q.front()->right){
                    q.push(q.front()->right);
                }
                
                level.push_back(q.front()->val);
                noActualPush = 0;
            }
            else{
                q.push(NULL);
                if(!level.empty()){
                    if(switchLevel) v.push_back(level);
                    else{
                        reverse(level.begin(), level.end());
                        v.push_back(level);   
                    }
                    switchLevel = !switchLevel;
                }
                level.clear();
                
                if(noActualPush) break;
                noActualPush = 1;
            }
            q.pop();
        }
        return v;
    }
};