#include <iostream>
#include <map>

using namespace std;

class Bank
{
    map<int, int> balance;

public:

    bool CREATE(int userId, int amount)
    {
        if (balance.find(userId) == balance.end())
        {
            balance[userId] = amount;
            return true;
        }
        else
        {
            balance[userId] += amount;
            return false;
        }
    }

    bool DEBIT(int userId, int amount)
    {
        if (balance.find(userId) == balance.end())
        {
            return false;
        }

        if (balance[userId] < amount)
        {
            return false;
        }

        balance[userId] -= amount;

        return true;
    }

    bool CREDIT(int userId, int amount)
    {
        if (balance.find(userId) == balance.end())
        {
            return false;
        }

        balance[userId] += amount;

        return true;
    }

    int BALANCE(int userId)
    {
        if (balance.find(userId) == balance.end())
        {
            return -1;
        }

        return balance[userId];
    }
};

int main()
{
    int q;
    cin >> q;

    Bank obj;

    while (q--)
    {
        string operation;
        cin >> operation;

        if (operation == "CREATE")
        {
            int x, y;
            cin >> x >> y;

            if (obj.CREATE(x, y))
            {
                cout << "true" << endl;
            }
            else
            {
                cout << "false" << endl;
            }
        }

        else if (operation == "DEBIT")
        {
            int x, y;
            cin >> x >> y;

            if (obj.DEBIT(x, y))
            {
                cout << "true" << endl;
            }
            else
            {
                cout << "false" << endl;
            }
        }

        else if (operation == "CREDIT")
        {
            int x, y;
            cin >> x >> y;

            if (obj.CREDIT(x, y))
            {
                cout << "true" << endl;
            }
            else
            {
                cout << "false" << endl;
            }
        }

        else if (operation == "BALANCE")
        {
            int x;
            cin >> x;

            cout << obj.BALANCE(x) << endl;
        }
    }

    return 0;
}