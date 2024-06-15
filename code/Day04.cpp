// sum of first n terms
// https://www.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1
using ll = long long;
class Solution
{
public:
    ll f(ll s, ll n)
    {
        if (n != 1)
            s = f(s, n - 1);
        s += pow(n, 3);
        return s;
    }
    long long sumOfSeries(long long N)
    {
        ll s = 0;
        return f(s, N);
    }
};