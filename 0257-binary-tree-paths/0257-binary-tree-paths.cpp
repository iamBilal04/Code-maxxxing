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
    void dfs(vector<string>& ans, string curr, TreeNode* root){
        if(root->left == nullptr && root->right == nullptr){
            curr += to_string(root->val);
            ans.push_back(curr);
            curr.pop_back();
            return;
        }
        curr += to_string(root->val);
        curr += "->";

        if(root->left != nullptr) dfs(ans, curr, root->left);
        if(root->right != nullptr) dfs(ans, curr, root->right);

        curr.pop_back();
        curr.pop_back();
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> answer;
        string curr;
        dfs(answer, curr, root);
        return answer;
    }
};