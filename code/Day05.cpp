#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ve = vector<int>;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ve v = {1, 2, 3};
    auto it = v.begin();
    string s = typeid(it).name();
    ve ::iterator it1;
    // cout<<(s == typeid(it1).name());
    // it = (v.rend());
    auto i3 = v.rend();
    auto i4 = v.rbegin();
    // cout << *(v.end() - 1)<<"\n";
    // cout <<"rend : "<<*(i3-1)<< "\nrbegin : "<<*(i4 +2);

    ve v2 = {6, 7};
    v.swap(v2);
    for (auto i : v2)
    {
        cout << i << " ";
    }

    // if n size vector from 0 to n-1, then:
    // v.begin () : begins at 0th
    // v.end() begins at n
    // v.rbegin() begins at n-1 and goes reverse
    // v.rend() begins at -1, and goes reverse

    // cout<<( typeid(i4).name() == typeid(i3).name());
    // cout << *(it - 1);
}