#include <iostream>
#include <map>
#include <set>

using namespace std;

class MovieTicket
{
    map<int, set<int>> bookedUsers;
    map<int, int> bookedCount;

public:

    bool BOOK(int userId, int movieId)
    {
        // already booked
        if (bookedUsers[movieId].count(userId))
        {
            return false;
        }

        // only 100 tickets allowed
        if (bookedCount[movieId] >= 100)
        {
            return false;
        }

        bookedUsers[movieId].insert(userId);
        bookedCount[movieId]++;

        return true;
    }

    bool CANCEL(int userId, int movieId)
    {
        if (bookedUsers[movieId].count(userId) == 0)
        {
            return false;
        }

        bookedUsers[movieId].erase(userId);
        bookedCount[movieId]--;

        return true;
    }

    bool IS_BOOKED(int userId, int movieId)
    {
        if (bookedUsers[movieId].count(userId))
        {
            return true;
        }

        return false;
    }

    int AVAILABLE_TICKETS(int movieId)
    {
        return 100 - bookedCount[movieId];
    }
};

int main()
{
    int q;
    cin >> q;

    MovieTicket obj;

    while (q--)
    {
        string operation;
        cin >> operation;

        if (operation == "BOOK")
        {
            int x, y;
            cin >> x >> y;

            if (obj.BOOK(x, y))
            {
                cout << "true" << endl;
            }
            else
            {
                cout << "false" << endl;
            }
        }

        else if (operation == "CANCEL")
        {
            int x, y;
            cin >> x >> y;

            if (obj.CANCEL(x, y))
            {
                cout << "true" << endl;
            }
            else
            {
                cout << "false" << endl;
            }
        }

        else if (operation == "IS_BOOKED")
        {
            int x, y;
            cin >> x >> y;

            if (obj.IS_BOOKED(x, y))
            {
                cout << "true" << endl;
            }
            else
            {
                cout << "false" << endl;
            }
        }

        else if (operation == "AVAILABLE_TICKETS")
        {
            int y;
            cin >> y;

            cout << obj.AVAILABLE_TICKETS(y) << endl;
        }
    }

    return 0;
}