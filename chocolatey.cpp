#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // sorting in descending order
        sort(arr.begin(), arr.end(), greater<int>());

        set<int> used;

        long long alex = 0;
        long long bob = 0;

        int turn = 0;

        for (int i = 0; i < n; i++)
        {
            // skip duplicate chocolate quantity
            if (used.count(arr[i]))
            {
                continue;
            }

            used.insert(arr[i]);

            // alex turn
            if (turn % 2 == 0)
            {
                alex += arr[i];
            }
            else
            {
                bob += arr[i];
            }

            turn++;
        }

        if (alex > bob)
        {
            cout << "Alex" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }

    return 0;
}