class Solution
{
public:
    int maxFrequency(vector<int> &a, int k)
    {
        int n = a.size();
        // int x;
        long long l, s = 0;
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            s += a[i];
            l = i - j + 1;
            l *= a[i];
            if (l - s > k)
            {
                s -= a[j];
                j++;
            }
        }

        return n - j;
    }
};