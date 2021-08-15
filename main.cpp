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
int main()
{
    int n, i;
    string name1, name2;
    char opt1, opt2, opt3, opt4, opt5, opt6, opt7, opt8, opt9, opt10;
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
    string start;
    cout << "Are you ready?" << endl;
    cout << "YES/NO" << endl;
    cin >> start;
    cout << endl;
    if (start == "NO")
    {
        return 0;
        ;
    }

    int score1 = 0;
    int score2 = 0;

    cout << "The first question is: " << endl;
    cout << endl;
    cout << "What does COVID-19 stand for?" << endl;
    cout << "a)There are 19 variants of the coronavirus." << endl;
    cout << "b) There are 19 symptoms of coronavirus disease." << endl;
    cout << "c) This is the 19th coronavirus pandemic." << endl;
    cout << "d) It's a term that stands for Coronavirus Disease 2019, the year it was first identified." << endl;
    cout << endl;
    if (n == 1)
    {
        cout << name1 << " Enter your answer:" << endl;
        cin >> opt1;
        if (opt1 == 'd')
        {
            score1++;
        }
    }
    if (n == 2)
    {
        cout << name1 << " Enter your answer:" << endl;

        cin >> opt1;
        cout << name2 << " Enter your answer:" << endl;
        cin >> opt2;
        if (opt1 == 'd')
        {
            score1++;
        }
        if (opt2 == 'd')
        {
            score2++;
        }
    }
    cout << endl;
    cout << "The correct answer is option d." << endl;
    cout << endl;
    cout << "The second question is: " << endl;
    cout << endl;
    cout << "What other viruses belong to the coronavirus family?" << endl;
    cout << "a) SARS and influenza" << endl;
    cout << "b) SARS and MERS" << endl;
    cout << "c) SARS and HIV" << endl;
    cout << "d) only SARS" << endl;
    cout << endl;
    if (n == 1)
    {
        cout << name1 << " Enter your answer:" << endl;
        cin >> opt3;
        if (opt3 == 'b')
        {
            score1++;
        }
    }
    if (n == 2)
    {
        cout << name1 << " Enter your answer:" << endl;

        cin >> opt3;
        cout << name2 << " Enter your answer:" << endl;
        cin >> opt4;
        if (opt3 == 'b')
        {
            score1++;
        }
        if (opt4 == 'b')
        {
            score2++;
        }
    }
    cout << endl;
    cout << "The correct answer is option b." << endl;
    cout << endl;
    cout << "The third question is: " << endl;
    cout << endl;
    cout << "True or false: There is more than one coronavirus." << endl;
    cout << "a) True" << endl;
    cout << "b) false" << endl;
    cout << endl;
    if (n == 1)
    {
        cout << name1 << " Enter your answer:" << endl;
        cin >> opt5;
        if (opt5 == 'a')
        {
            score1++;
        }
    }
    if (n == 2)
    {
        cout << name1 << " Enter your answer:" << endl;

        cin >> opt5;
        cout << name2 << " Enter your answer:" << endl;
        cin >> opt6;
        if (opt5 == 'a')
        {
            score1++;
        }
        if (opt6 == 'a')
        {
            score2++;
        }
    }
    cout << endl;
    cout << "The correct answer is option a." << endl;
    cout << endl;
    cout << "The forth question is: " << endl;
    cout << endl;
    cout << "The “corona” in coronavirus means:" << endl;
    cout << "a)beer" << endl;
    cout << "b)strong" << endl;
    cout << "c)crown" << endl;
    cout << "d)sun" << endl;
    cout << endl;
    if (n == 1)
    {
        cout << name1 << " Enter your answer:" << endl;
        cin >> opt7;
        if (opt7 == 'c')
        {
            score1++;
        }
    }
    if (n == 2)
    {
        cout << name1 << " Enter your answer:" << endl;

        cin >> opt7;
        cout << name2 << " Enter your answer:" << endl;
        cin >> opt8;
        if (opt7 == 'c')
        {
            score1++;
        }
        if (opt8 == 'c')
        {
            score2++;
        }
    }
    cout << endl;
    cout << "The correct answer is option c." << endl;
    cout << endl;
    cout << "The last question is: " << endl;
    cout << endl;
    cout << "An effective hand sanitizer contains at least this percentage of alcohol to kill the coronavirus and other germs:" << endl;
    cout << "60%" << endl;
    cout << "80%" << endl;
    cout << "98%" << endl;
    cout << "50%" << endl;
    cout << endl;
    if (n == 1)
    {
        cout << name1 << " Enter your answer:" << endl;
        cin >> opt9;
        if (opt9 == 'a')
        {
            score1++;
        }
    }
    if (n == 2)
    {
        cout << name1 << " Enter your answer:" << endl;

        cin >> opt9;
        cout << name2 << " Enter your answer:" << endl;
        cin >> opt10;
        if (opt9 == 'a')
        {
            score1++;
        }
        if (opt10 == 'a')
        {
            score2++;
        }
    }
    cout << endl;
    cout << "The correct answer is option a." << endl;
    cout << endl;
    if (n == 2)
    {
        cout << "The final scores are - " << endl;
        cout << name1 << " : " << score1 << endl;
        cout << name2 << " : " << score2 << endl;
    }
    if (n == 1)
    {
        cout << "Your final score is - " << endl;
        cout << name1 << " : " << score1 << endl;
    }
    cout << endl;
    if (n == 2)
    {
        if (score1 > score2)
        {
            cout << "THE WINNER IS : " << name1 << endl;
        }
        else if (score1 == score2)
        {
            cout << "Looks like it'sa tie! so basically you both win!!" << endl;
        }
        else
        {
            cout << "THE WINNER IS : " << name2 << endl;
        }
    }
    cout << endl;
    cout << "Congartulations for completing this quiz!" << endl;
    cout << "Hope you enjoyed as well as gained some knowledge." << endl;
    cout << endl;
    return 0;
}