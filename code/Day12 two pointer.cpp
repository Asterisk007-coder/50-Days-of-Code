// https : // leetcode.com/problems/squares-of-a-sorted-array/
class Solution
{
public:
    vector<int> sortedSquares(vector<int> &a)
    {
        int n = a.size();
        vector<int> v(n, 0);
        int i = 0, j = n - 1;
        int x, y;
        for (int k = n - 1; k >= 0; k--)
        {
            x = a[i] * a[i];
            y = a[j] * a[j];
            if (x < y)
            {
                v[k] = y;
                j--;
            }
            else
            {
                v[k] = x;
                i++;
            }
        }
        return v;
    }
};
