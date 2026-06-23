class Solution {
public:

    void inorder(TreeNode* root, vector<int> &output){
        if(root == NULL) return ;

        inorder(root->left,output);

        output.push_back(root->val);

        inorder(root->right,output);
        
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> output;

        inorder(root,output);

        return output;
    }
};