class Solution
{
public:
    int removeDuplicates(vector<int> &l)
    {
        int j = 0;
        int n = l.size();
        for (int i = 0; i < n; i++)
        {
            if (l[i] > l[j])
            {
                l[j + 1] = l[i];
                j++;
            }
        }
        return j + 1;
    }
};