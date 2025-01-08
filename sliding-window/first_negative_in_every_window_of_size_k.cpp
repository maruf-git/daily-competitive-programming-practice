// https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

#include <bits/stdc++.h>
using namespace std;

vector<int> FirstNegativeInteger(vector<int> &arr, int k)
{
    vector<int> ans;
    queue<int> q;

    int i = 0, j = 0;
    while (j < arr.size())
    {
        if (arr[j] < 0)
            q.push(arr[j]);
        if (j - i + 1 == k)
        {
            if (q.size() == 0)
                ans.push_back(0);
            else
            {
                ans.push_back(q.front());
                if (arr[i] < 0)
                    q.pop();
            }
            i++;
        }
        j++;
    }
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
        vector<int> ans = FirstNegativeInteger(v, k);
        for (auto u : ans)
            cout << u << " ";
        cout << endl;
    }

    return 0;
}