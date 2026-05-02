#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    vector<int> cost(n);

    for (int i = 0; i < n; i++)
    {
        cin >> cost[i];
    }

    long long ans = LLONG_MAX;

    // checking all possible starting points
    for (int i = 0; i <= k; i++)
    {
        long long total = 0;

        for (int j = i; j < n; j += (2 * k + 1))
        {
            total += cost[j];
        }

        ans = min(ans, total);
    }

    cout << ans;

    return 0;
}