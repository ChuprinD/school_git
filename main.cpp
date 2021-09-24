#include <iostream>
#include <fstream>
void changeQuestions() {
    cout << "If you want to change the quesions, enter 1. Else enter no, and the program will terminate." << endl;
    int val = 0;
    cin >> val;
    if(val == 1) {
        cout << "Ok, opening questions file";
        ofstream fout("questions.txt");
        cout << "Enter the number of questions you want the file to have" << endl;
        ofstream cleared("answers.txt");
        cleared << endl;
        cleared.close();
        int numOfQuestions = 0;
        cin >> numOfQuestions;
        for(int i = 0; i < numOfQuestions; ++i) {
            string s1;
            cin >> s1;
            fout << s1 << endl;
        }
    } else {
        return;
    }
}
