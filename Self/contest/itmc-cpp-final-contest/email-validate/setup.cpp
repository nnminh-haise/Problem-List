#ifndef CREATE_TESTCASES
#define CREATE_TESTCASES

#include <bits/stdc++.h>
#include "libraries/GeneratingMethods.h"
#include "libraries/SideFunctions.h"

using namespace std;

void makeInput(const int testNumber, ofstream &cout)
{
    ClosedSet N = ClosedSet(100, 10000);
    string specialCharacters = "!@#$%^&*()_+{}:><?";
    string alphanumbericCharacters = "qwertyuiopasdfghjklzxcvbnm1234567890QWERTYUIOPASDFGHJKLZXCVBNM";
    if (testNumber <= 10)
    {
        N = ClosedSet(1, 20);
    }

    int n = randInt(N);
    string s = "";
    int coin = randInt(ClosedSet(0, 1));
    if (coin)
    {
        while (s.length() != n)
        {
            s += alphanumbericCharacters[randInt(
                ClosedSet(0, alphanumbericCharacters.length() - 1))];
        }
    }
    else
    {
        while (s.length() != n)
        {
            int p = randInt(ClosedSet(0, 1));
            if (p)
            {
                s += alphanumbericCharacters[randInt(
                    ClosedSet(0, alphanumbericCharacters.length() - 1))];
            }
            else
            {
                s += specialCharacters[randInt(ClosedSet(0, specialCharacters.length() - 1))];
            }
        }
    }

    cout << s + "@gmail.com" << endl;

    return;
}

void makeOutput(ifstream &cin, ofstream &cout)
{
    string s;
    cin >> s;
    // cout << s << endl;

    string p = "";
    int index = 0;
    while (index < s.length() && s[index] != '@')
    {
        p += s[index++];
    }

    bool flag = true;
    // cout << p << endl;
    for (int i = 0; i < p.length(); ++i)
    {
        if (isalnum(p[i]) == false)
        {
            flag = false;
        }
    }

    cout << (flag ? "True\n" : "False\n");
    return;
}

// ! User can modify this function in order to test your code before you begin to create the testcase.
// ! Otherwise please comment the main() function out! The function below may cause function "redefinition" error!

// int main(int agrc, char **agrv) {
//     int test_number = 5;

//     ofstream testcase_input_data_ostream("test.in");
//     ofstream testcase_output_data_ostream("test.out");
//     ifstream testcase_input_date_istream("test.in");

//     makeInput(test_number, testcase_input_data_ostream);
//     makeOutput(testcase_input_date_istream, testcase_output_data_ostream);

//     testcase_input_data_ostream.close();
//     testcase_output_data_ostream.close();
//     testcase_input_date_istream.close();

//     return 0;
// }

#endif
