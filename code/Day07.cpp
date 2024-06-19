// https://www.geeksforgeeks.org/problems/second-largest3735/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=second-largest
class Solution
{
public:
    // Function returns the second
    // largest elements
    int print2largest(int a[], int n)
    {
        // code here
        if (n < 2)
            return -1;
        int x = a[0], y = a[1];
        if (y > x)
        {
            swap(x, y);
        }
        if (*max_element(a, a + n) == *(min_element(a, a + n)))
            return -1;

        for (int i = 2; i < n; i++)
        {
            if (a[i] > y)
            {
                if (a[i] > x)
                {
                    y = x;
                    x = a[i];
                }
                else
                {
                    y = a[i];
                }
            }
        }
        return y;
    }
};