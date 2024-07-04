// https://leetcode.com/problems/product-of-array-except-self/
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &a)
    {
        int n = a.size();
        vector<int> pre(n, 1);
        vector<int> suf(n, 1);
        for (int i = 1; i < n; i++)
        {
            pre[i] = pre[i - 1] * a[i - 1];
            suf[n - 1 - i] = suf[n - i] * a[n - i];
        }
        for (int i = 0; i < n; i++)
        {
            a[i] = pre[i] * suf[i];
        }
        return a;
    }
};
