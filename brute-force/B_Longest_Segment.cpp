#include <bits/stdc++.h>
using namespace std;

const int mx = 123;
int x[mx], y[mx];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int distance = ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
            mx = max(mx, distance);
        }
    };
    cout << fixed << setprecision(10) << sqrt(mx);

    return 0;
}