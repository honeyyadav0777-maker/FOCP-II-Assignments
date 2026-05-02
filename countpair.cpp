#include <iostream>
#include <vector>

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

        long long count = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int minimumValue;

                if (arr[i] < arr[j])
                {
                    minimumValue = arr[i];
                }
                else
                {
                    minimumValue = arr[j];
                }

                int xorValue = arr[i] ^ arr[j];

                if (minimumValue <= xorValue)
                {
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}