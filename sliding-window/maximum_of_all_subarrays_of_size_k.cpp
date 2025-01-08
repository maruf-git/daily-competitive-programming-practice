// https://www.interviewbit.com/problems/sliding-window-maximum/

#include <bits/stdc++.h>
using namespace std;
vector<int> slidingMaximum(vector<int> &arr, int k)
{
    vector<int> ans;
    multiset<int, greater<int>> ms;
    int i = 0, j = 0;
    while (j < arr.size())
    {
        ms.insert(arr[j]);
        if (j - i + 1 == k)
        {
            auto it = ms.begin();
            ans.push_back(*it);
            if (*it == arr[i])
            {
                ms.erase(it);
            }
            i++;
        }
        j++;
    }
    if (k > arr.size())
        ans.push_back(*ms.begin());
    return ans;
}
int main()
{

    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        // solution
        vector<int> ans = slidingMaximum(v, k);
        for (auto u : ans)
            cout << u << " ";
        cout << endl;
    }

    return 0;
}