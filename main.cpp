#include <iostream>
#include <fstream>
<<<<<<< HEAD

void putOut(string x)
{
    cout << x << endl;
    =======
    map<string, int> books;
    int total = 0;
    void putOut(string x)
    {
        cout << x << endl;
        int pos = x.rfind(" ");
        string temp = x.substr(pos + 1, x.size() - pos - 1);
        total = total + 1 -  min(books[temp], 1);
        books[temp]++;
    }

    void printOutAnswers(int numberOfField) {
        total = 0;
        ifstream fin("answers.txt");
        string s;
        vector <string> names;
        names.clear();
        if (numberOfField == 1) {
            while (fin >> s) {
                {
                    names.push_back(s);
                }
                sort(names.begin(), names.end());
            }
        }

        if (numberOfField == 2) {
            while(fin >> s)
            {
                int pos = s.find(" ");
                string temp = s.substr(pos, s.rfind(" "));
                names.push_back(s);
            }
            sort(names.begin(), names.end());
        }

        if (numberOfField == 3) {
            while(fin >> s)
            {
                int pos = s.rfind(" ");
                string temp = s.substr(pos, s.size() - pos);
                names.push_back(s);
            }
            sort(names.begin(), names.end());
        }


    }
    for(auto x : names)
    {
        putOut(x);
    }

    cout << "Amount of people who passed the survey - " << names.size() << endl;
    cout << "Amount of books present - " << total;
    fin.close();
}

void checkQuestions()
{
    ifstream fin("questions.txt");
    ofstream fout("answers.txt");
    string s;
    string answer;
    for(int i = 0; i < 3; ++i)
    {
        fin >> s;
        cout << s << endl;
        cin >> answer;
        fout << answer << " ";
    }
    fout << endl;
    fin.close();
    fout.close();
}

signed main()
{
    string s;
    cin >> s;
    if(s == "OPROS") checkQuestions();
    else printOutAnswers();
}
