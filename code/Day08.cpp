// https://leetcode.com/explore/learn/card/fun-with-arrays/526/deleting-items-from-an-array/3248/
class Solution
{
public:
    int removeDuplicates(vector<int> &a)
    {

        int j = 1;
        int n = a.size();
        if (n == 0)
            return n;
        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[i - 1])
                a[j++] = a[i];
        }
        return j;
    }
};