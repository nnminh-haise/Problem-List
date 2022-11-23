#include <iostream>
#include <string.h>
#include <vector>
#include <map>
#include <algorithm>
#include <math.h>
#include <fstream>
#include <climits>

using namespace std;

bool isnumberic(string s) {
    for (char chr: s) {
        if (!('0' <= chr and chr <= '9')) {
            return false;
        }
    }
    return true;
}

vector < string > split(string s) {
    vector < string > res;
    for (int i = 0; i < s.length(); ++i) {
        string tmp = "";
        while (s[i] != ' ' && i < s.length()) {
            tmp += s[i];
            ++i;
        }
        res.push_back(tmp);
    }
    return res;
}

int convert(string s) {
    long long res = 0;

    int id = 0;
    for (char chr: s) {
        ++id;
        res *= 10;
        res += (int)(chr - '0');
        if (res > INT_MAX) {
            id = s.length() + 1;
            break;
        }
    }
    if (id == s.length() + 1) {
        return 0;
    }
    return res;
}

int calculate(string &s) {
    if (s.length() > 9) {
        return 0;
    }

    long long n = 0;
    for (char i: s) {
        if (!isdigit(i)) {
            return 0;
        }
        n = n * 10 + i - '0';
    }
    if (n <= INT_MAX) {
        return (int) n;
    }
    return 0;
}

unsigned long long sum = 0;

int main() {
    ifstream in ("DATA.in");

    string s;
    while (in >> s) {
        sum += calculate(s);
    }

    // while (!in.eof()) {
    //     string s = "";
    //     getline(in, s);
    //     vector < string > res = split(s);
    //     for (string item: res) {
    //         if (isnumberic(item)) {
    //             unsigned long long val = convert(item);
    //             sum += val;
    //         }
    //     }
    // }

    cout << sum << endl;

    in.close();

    return 0;
}