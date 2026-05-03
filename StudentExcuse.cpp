#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int main()
{
    string name;

    cout << "Enter student name: ";
    getline(cin, name);

    vector<string> excuses = {

        name + " could not complete the assignment because the laptop battery died.",

        name + " was about to submit homework but the internet stopped working.",

        name + " lost the assignment file mysteriously at the last moment.",

        name + " tried to study but Windows started updating for hours.",

        name + " completed the work but forgot to save the file.",

        name + " had keyboard problems while doing the assignment.",

        name + " got stuck in traffic while bringing the notebook.",

        name + " accidentally deleted the important folder.",

        name + " was solving questions when the electricity went off.",

        name + " planned to finish homework early but slept accidentally."
    };

    srand(time(0));

    int randomIndex = rand() % excuses.size();

    cout << endl;
    cout << "Excuse: " << excuses[randomIndex] << endl;

    return 0;
}