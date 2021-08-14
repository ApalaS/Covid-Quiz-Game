#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

string *readfunc(string stringname)
{
    string line;
    string arr[5];
    ifstream file(stringname);

    if (file.is_open())
    {
        int i = 0;
        while (getline(file, line))
        {
            arr[i] = line;
            i++;
        }

        file.close();
    }
    else
    {
        cerr << "error opemimg file";
        exit(1);
    }
}

string *readQues(string stringname)
{
    string question[5];
    string line;
    string arr[5];
    ifstream file(stringname);

    if (file.is_open())
    {
        int i = 0;
        for (int i = 0; i < 40; i++)
        {
        }
    }
}
int main()
{
    int n, i;
    string name1, name2;
    cout << "Hey! let's test your covid-19 trivia" << endl;
    cout << "1 player / 2 player ?" << endl; // number of players
    cin >> n;
    if (n == 1)
    {
        cout << "Enter player 1 name :" << endl;
        cin >> name1;
    }

    else if (n == 2)
    {
        cout << "Enter player 1 name :" << endl;
        cin >> name1;
        cout << "Enter player 2 name :" << endl;
        cin >> name2;
    }

    else // for more than 2 players
    {
        cout << "Invalid input" << endl;
    }

    // Reading the rules of the quiz

    string line_;
    ifstream file_("rules.txt");

    if (file_.is_open())
    {
        while (getline(file_, line_))
        {
            cout << line_ << endl;
        }

        file_.close();
    }
    else
    {
        cerr << "error opemimg file";
        exit(1);
    }
    int score1 = 0;
    int score2 = 0;

    cout << "player 1 : " << name1 << endl;

    return 0;
}