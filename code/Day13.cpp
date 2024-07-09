// https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array/
int Solution::removeDuplicates(vector<int> &a)
{
    int n = a.size();
    if (n == 0)
        return n;
    int j = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            a[j] = a[i];
            j++;
        }
    }
    return j;
}
