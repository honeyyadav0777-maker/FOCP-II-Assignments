#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int main()
{
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    vector<string> roasts = {

        name + " writes code so slowly that even a turtle feels fast.",

        "If laziness had a brand ambassador, it would be " + name + ".",

        name + " debugs code by staring at the screen and hoping for magic.",

        name + " can turn a 5 minute task into a semester project.",

        "Even Google gets confused by " + name + "'s code.",

        name + " studies one night before exam and still opens Instagram.",

        name + "'s code has more bugs than a jungle.",

        "When " + name + " runs code, even the compiler gets emotional.",

        name + " types so slowly that autocomplete falls asleep.",

        name + " treats warnings as motivational messages."
    };

    srand(time(0));

    int randomIndex = rand() % roasts.size();

    cout << endl;
    cout << "Roast: " << roasts[randomIndex] << endl;

    return 0;
}