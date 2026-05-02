#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int count = 0;

        
        while (n > 0)
        {
            if (n % 2 == 1)
            {
                count++;
            }

            n = n / 2;
        }

        
        if (count % 2 == 0)// checking parity
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
    }

    return 0;
}