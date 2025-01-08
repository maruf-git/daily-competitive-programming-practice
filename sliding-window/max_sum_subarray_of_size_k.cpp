// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
// where all the array elements are positive

#include <bits/stdc++.h>
using namespace std;

// submit solution function
int maximumSumSubarray(vector<int> &arr, int k)
{
    int mx = INT_MIN;
    int sum = 0;
    // max_sum_subarray_start and end point
    vector<pair<int, int>> vp;
    int i = 0, j = 0;
    while (j < arr.size())
    {
        sum += arr[j];
        // if window size matched
        if (j - i + 1 == k)
        {
            if (sum == mx)
            {
                vp.push_back({i, j});
            }
            else if (sum > mx)
            {
                vp.clear();
                vp.push_back({i, j});
                mx = sum;
            }
            sum -= arr[i];
            i++;
        }
        j++;
    }

 

    // cout<<"result:"<<endl;
    // for(auto u:vp)cout<<u.first<<" "<<u.second<<endl;

    return mx;
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

        int ans = maximumSumSubarray(v, k);
        cout << ans  << endl;
    }
    return 0;
}