#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool s1(TreeNode *A, int B, vector<int> &res)
{
    if (!A)
        return false;

    res.push_back(A->val);

    if (A->val == B)
        return true;

    if (s1(A->left, B, res) || s1(A->right, B, res))
        return true;

    res.pop_back();
    return false;
}

vector<int> solve(TreeNode *A, int B)
{

    vector<int> res;
    if (!A)
        return res;

    s1(A, B, res);
    return res;
}

int main()
{

    return 0;
}