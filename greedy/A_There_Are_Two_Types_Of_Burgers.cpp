#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin >> tst;
    while (tst--)
    {
        int buns, beef, chicken;
        cin >> buns >> beef >> chicken;
        int h_cost, c_cost;
        cin >> h_cost >> c_cost;
        int bp = buns / 2;
        int mx_price = 0;
        if (h_cost > c_cost) // for hamburger
        {
            mx_price = mx_price + min(bp, beef) * h_cost;
            mx_price = mx_price + min(chicken, bp - min(bp, beef)) * c_cost;
        }
        else
        {
            mx_price = mx_price + min(bp, chicken) * c_cost;
            mx_price = mx_price + min(beef, bp - min(bp, chicken)) * h_cost;
        }
        cout << mx_price << endl;
    }

    return 0;
}